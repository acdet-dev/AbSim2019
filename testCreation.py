# vim: set fileencoding=utf-8 :
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

import time
import exammodel as e
from cases import Cases
from casetext import CaseText, CaseTextBuffer
from aStringResources import AStringResources
from menuBar import MenuBar
from buildWidgets import BuildWidgets
import logging
from simLabels import MilestoneNameLabel
from messages import sim_class_message, sim_message
from sectionTree import SectionTree
from takenmodel import TakenModel
from simFaculty import SimFaculty


class TestCreation(Gtk.Window, MenuBar):
    """
    test making window. Allows faculty to create and assign tests
    """

    def __init__(self, user_type, name, password, current_page=0):
        # initialize string resources
        self.string_resources = AStringResources("create_assessments", back_flag=True).get_by_identifier()

        # make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('img/icon.ico')
        self.maximize()

        # intialize resources
        self.user_type = user_type
        self.name = name
        self.password = password

        self.window_resources = {
            "window": self,
            "user_type": self.user_type,
            "name": self.name,
            "password": self.password
        }

        # build menu bar to pack later
        widget = self.build_bar()

        # build notebook object
        self.notebook = Gtk.Notebook()
        self.notebook.set_tab_pos(0)
        self.notebook.connect('switch-page', self.reset_active_page)
        self.notebook.show()

        self.window_resources["notebook"] = self.notebook

        # build individual page objects
        # first notebook tab
        first_page = InstructionPage(self.string_resources, self.window_resources)
        first_page.set_property('border-width', 15)
        first_page_label = MilestoneNameLabel(self.string_resources["nb_tab_1"])
        self.notebook.append_page(first_page, first_page_label)

        # second notebook tab
        second_page = CreatePage(self.string_resources, self.window_resources)
        second_page.set_property('border-width', 15)
        second_page_label = MilestoneNameLabel(self.string_resources["nb_tab_2"])
        self.notebook.append_page(second_page, second_page_label)

        # third notebook tab
        third_page = ViewExams(self.window_resources, view_flag="edit")
        third_page.set_property('border-width', 15)
        third_page_label = MilestoneNameLabel(self.string_resources["nb_tab_3"])
        self.notebook.append_page(third_page, third_page_label)

        widget.pack_start(self.notebook, True, True, 0)

        self.add(widget)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        self.notebook.set_current_page(current_page)

    def reset_active_page(self, notebook, useless_param, page_num):
        # When the user clicks a page, reset it to its default.
        # useless_param is useless in PyGtk, but Gtk passes it anyway.
        page = notebook.get_nth_page(page_num)
        try:
            page.reset_page()
        except AttributeError as e:
            logging.debug("no reset method")
            pass


class InstructionPage(Gtk.VBox):
    def __init__(self, string_resources, wr):
        super(InstructionPage, self).__init__(False, 2)

        # initialize passed string resources
        self.string_resources = string_resources
        self.window_resources = wr
        self.bw = BuildWidgets()

        built_box = self.build_interface()

        self.add(built_box)

        built_box.show_all()

        self.show()

    def build_interface(self):
        box = Gtk.VBox()

        label = self.bw.build_label(label_text=self.string_resources["header_text"], f_size=20, alignment=[0, 0])

        info_label = self.bw.build_label(label_text=self.string_resources["create_info"], f_size=16, alignment=[0, 0])

        constructed_text = self.string_resources["test_selection_description"] + u":\n\n" + \
                           u"1.\t" + self.string_resources["test_option_1"] + u"\n" + \
                           u"2.\t" + self.string_resources["test_option_2"] + u"\n" + \
                           u"3.\t" + self.string_resources["test_option_3"]

        options_label = self.bw.build_label(label_text=constructed_text, f_size=16, alignment=[0, 0])

        move_on_text = self.bw.build_label(label_text=self.string_resources["create_exam_move"],
                                           f_size=16,
                                           alignment=[0, 0])

        box.pack_start(label, False, False, 10)
        box.pack_start(info_label, False, False, 10)
        box.pack_start(options_label, False, False, 10)
        box.pack_start(move_on_text, False, False, 10)

        return box


class CreatePage(Gtk.VBox):
    def __init__(self, string_resources, wr):
        super(CreatePage, self).__init__(False, 2)

        # intialize passed string resources
        self.string_resources = string_resources
        self.window_resources = wr
        self.label_tb = CaseTextBuffer()
        self.test_desc_tb = CaseTextBuffer()
        self.test_desc_tb_2 = CaseTextBuffer()
        self.description_tb = CaseTextBuffer()
        self.check_buttons_tb = CaseTextBuffer()
        self.bw = BuildWidgets()
        self.button_list = []

        # intialize base, case, and ddx dependent variables
        self.baseline_flag = False
        self.case_dict = Cases().pretty_ailment_names
        self.ddx_list = []
        self.case_list = []
        self.title_list = []
        self.ddx_case_list = []
        self.ddx_title_list = []

        self.counter = 0

        self.built_box = self.build_interface()

        self.add(self.built_box)

        self.built_box.show_all()

        self.show()

    def build_buttons(self, rows, columns):
        button_table = Gtk.Table(rows=rows, columns=columns, homogeneous=True)
        button_table_alignment = Gtk.Alignment(xalign=0.0)

        check_label_text = self.string_resources["option_1"]
        button = self.bw.build_check_button(label_text=check_label_text, function=self.on_button_toggled, f_size=14,
                                            padding=[10, 10])

        button_table.attach(button, 0, 1, 0, 1)
        button_table_alignment.add(button_table)

        return button_table_alignment

    def get_ailment_english(self, key):
        constant_ailment = {self.ddx_list[0]: 'Upper Gastrointestinal Etiology',
                            self.ddx_list[1]: 'Choledocolithiasis',
                            self.ddx_list[2]: 'Pancreatitis',
                            self.ddx_list[3]: 'Cholecystitis',
                            self.ddx_list[4]: 'Mesenteric Infarction',
                            self.ddx_list[5]: 'Small Bowel Obstruction',
                            self.ddx_list[6]: 'Appendicitis',
                            self.ddx_list[7]: 'Diverticulitis',
                            self.ddx_list[8]: 'Acute Enteritis'}

        return constant_ailment[key]

    def on_button_toggled(self, button, name):
        if name == "Add Palpatory Examination?":
            if button.get_active():
                self.baseline_flag = True

            else:
                self.baseline_flag = False

        elif name in list(self.case_dict.values()):
            if button.get_active():
                self.case_list.append(list(self.case_dict.keys())[list(self.case_dict.values()).index(name)])
                self.title_list.append(list(self.case_dict.values())[list(self.case_dict.values()).index(name)])

            else:
                self.case_list.remove(list(self.case_dict.keys())[list(self.case_dict.values()).index(name)])
                self.title_list.remove(list(self.case_dict.values())[list(self.case_dict.values()).index(name)])

        elif name in self.ddx_list:
            saved_name = self.get_ailment_english(name)
            if button.get_active():
                self.ddx_case_list.append(saved_name)
                self.ddx_title_list.append('ddx' + '_' + saved_name)
            else:
                self.ddx_case_list.remove(saved_name)
                self.ddx_title_list.remove('ddx' + '_' + saved_name)

    def create_text_view(self, tb, o_w=300, o_h=300):
        # create text view
        text_scroller = self.bw.create_text_view(o_w, o_h, tb)

        return text_scroller

    def build_interface(self):
        box = Gtk.VBox()

        # initialize and add label buffer text
        label_buffer_text = "1. {}".format(self.string_resources["test_option_1"])

        self.label_tb.new_case(label_buffer_text)

        label_scroller = self.create_text_view(self.label_tb, 300, 25)

        # intialize label description
        palp_desc_label_text = self.string_resources["option_1_desc"]
        palp_desc_label_text_2 = self.string_resources["option_1_desc_2"]

        self.test_desc_tb.new_case(palp_desc_label_text)
        self.test_desc_tb_2.new_case(palp_desc_label_text_2)

        label_desc = self.create_text_view(self.test_desc_tb, 300, 50)
        label_desc_2 = self.create_text_view(self.test_desc_tb_2, 300, 50)

        # add text
        depth_thorough_label = self.bw.build_label(label_text=self.string_resources["final_note"], f_size=14,
                                                   alignment=[0, 0])

        # initialize and add description buffer text
        description_text = self.string_resources["palpatory_description"]
        self.description_tb.new_case(description_text)

        desc_scroller = self.create_text_view(self.description_tb, 300, 25)

        # add check button options
        palpatory_bta = self.build_buttons(1, 1)

        # add normal page nav buttons
        b_list = [self.string_resources["next_button"], self.string_resources["restart"],
                  self.string_resources["back_button"]]
        f_list = [self.next_type, self.restart, self.return_home]
        button_tree = self.bw.add_horizontal_buttons(button_list=b_list, functions=f_list, f_size=16)

        box.pack_start(label_scroller, False, False, 5)
        box.pack_start(label_desc, False, False, 5)
        box.pack_start(label_desc_2, False, False, 5)
        box.pack_start(depth_thorough_label, False, False, 5)
        box.pack_start(desc_scroller, False, False, 5)
        box.pack_start(palpatory_bta, False, False, 5)
        box.pack_start(button_tree, False, False, 5)

        return box

    def facilitate_transfer(self, *args, new_window):
        from handleTransitions import HandleTransitions

        ht = HandleTransitions(self.window_resources['window'])

        ht.setup_transfer()
        new_window(*args)
        ht.finish_transfer()

    def restart(self, widget):
        self.facilitate_transfer(self.window_resources['user_type'], self.window_resources['name'],
                                 self.window_resources['password'], 1, new_window=TestCreation)

    def return_home(self, widget):
        from simFaculty import SimFaculty
        self.facilitate_transfer(self.window_resources['user_type'], self.window_resources['name'],
                                 self.window_resources['password'], new_window=SimFaculty)

    def add_and_remove_widgets(self):
        # get list of children
        box_children = self.built_box.get_children()

        # remove current check list
        if self.counter == 1:
            self.built_box.remove(box_children[3])
            self.built_box.remove(box_children[4])
            self.built_box.remove(box_children[5])
        else:
            self.built_box.remove(box_children[3])

        # move added check list to second position
        self.built_box.reorder_child(box_children[-1], 3)

        # show all widgets existing in built_box
        self.built_box.show_all()

    def next_type(self, choice):
        self.counter += 1

        if self.counter == 1:
            # initialize and add label buffer text
            label_bt = "2. {}".format(self.string_resources["test_option_2"])
            self.label_tb.new_case(label_bt)

            ab_label = self.string_resources["ab_label_desc"]
            ab_label_2 = self.string_resources["ab_label_desc_2"]

            self.test_desc_tb.new_case(ab_label)
            self.test_desc_tb_2.new_case(ab_label_2)

            # initialize and add description buffer text
            description_text = self.string_resources["ab_description"]
            self.description_tb.new_case(description_text)

            # create abnormality button alignment
            case_comms = [
                'none n', 'appendix t', 'appendix g', 'appendix r', 'appendix gr',
                'bladder t', 'colon t', 'colon g', 'gallbladder t', 'gallbladder g',
                'ugi t', 'ovary_left t', 'ovary_left g', 'ovary_right t', 'ovary_right g',
                'pancreas t', 'hepatomegaly n', 'splenomegaly n', 'enlarged_bladder n']

            case_commands = [self.case_dict[i] for i in case_comms]

            st = SectionTree(self.bw, [], one_flag=False)
            abnormality_bta = st.build_button_tree(sec_nums=case_commands, function=self.on_button_toggled)

            self.built_box.pack_start(abnormality_bta, False, False, 10)

            # remove existing choice tree child and add new
            self.add_and_remove_widgets()

        elif self.counter == 2:
            # initialize and add label buffer text
            label_bt = "3. {}".format(self.string_resources["test_option_3"])
            self.label_tb.new_case(label_bt)

            ddx_label = self.string_resources["ddx_label_desc"]
            ddx_label_2 = self.string_resources["ddx_label_desc_2"]

            self.test_desc_tb.new_case(ddx_label)
            self.test_desc_tb_2.new_case(ddx_label_2)

            # initialize and add description buffer text
            description_text = self.string_resources["ddx_description"]
            self.description_tb.new_case(description_text)

            # create abnormality button alignment
            ddx_names = CaseText().cases.get(525, [])

            for j in ddx_names:
                temp = [i["ddx_name"] for i in j]
                self.ddx_list.append(temp[0])

            # use tree class to build button tree
            st = SectionTree(self.bw, [], one_flag=False)
            ddx_bta = st.build_button_tree(sec_nums=self.ddx_list, function=self.on_button_toggled)
            self.built_box.pack_start(ddx_bta, False, False, 10)

            # remove existing choice tree child and add new
            self.add_and_remove_widgets()

        elif self.counter == 3:
            self.add_to_exam()
            self.facilitate_transfer(self.window_resources['user_type'], self.window_resources['name'],
                                     self.window_resources['password'], 2, new_window=TestCreation)

    def add_to_exam(self):
        exam_model = e.ExamModel()

        if self.baseline_flag:
            try:
                if self.case_list[0] == 'none n' and self.title_list[0] == 'Baseline':
                    self.case_list.pop(0)
                    self.title_list.pop(0)
            except IndexError:
                pass
            self.case_list.insert(0, 'none n')
            self.title_list.insert(0, 'Baseline')
        else:
            try:
                if self.case_list[0] == 'none n' and self.title_list[0] == 'Baseline':
                    self.case_list.pop(0)
                    self.title_list.pop(0)
            except IndexError:
                pass

        if self.ddx_case_list and self.ddx_title_list:
            self.case_list.extend(self.ddx_case_list)
            self.title_list.extend(self.ddx_title_list)

        if len(self.title_list) > 0:
            timestr = time.strftime("%Y%m%d-%H%M%S")
            exam_num = self.get_number_exams(exam_model)
            nums = [int(i.split('_')[1]) for i in exam_num]
            if len(exam_num) < 1:
                exam_name = self.string_resources["assess_string"] + "_1"
            else:
                exam_name = self.string_resources["assess_string"] + "_" + str(max(nums) + 1)
            case_string = '+'.join(self.case_list)
            title_string = '+'.join(self.title_list)

            exam_model.save_to_db(self.window_resources['window'], exam_name, case_string, title_string, timestr)

        else:
            exam_model.save_to_db(self.window_resources['window'], "NA", self.case_list, self.title_list, "NA")

    def get_number_exams(self, em):
        exam_info = em.get_all(key="check")
        return [a[0] for a in exam_info]

    def reset_page(self):
        pass


class ViewExams(Gtk.VBox):
    def __init__(self, wr, view_flag=""):
        super(ViewExams, self).__init__(False, 2)

        # initialize string resources
        self.string_resources = AStringResources("view_performance", back_flag=True).get_by_identifier()
        self.window_resources = wr
        self.window_resources["exam_id"] = ""
        self.view_flag = view_flag
        self.bases = ""
        self.cases = ""
        self.ddxs = ""
        self.sec_name = []
        self.no_exams_flag = False
        self.bw = BuildWidgets()
        self.tb = CaseTextBuffer()

        self.built_box = self.build_interface()

        self.add(self.built_box)

        self.built_box.show_all()

        self.show()

    def build_interface(self):
        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        # create scroller
        sw = self.bw.create_scroller()

        # pack scroller box to an h box
        ovbox.pack_start(sw, True, True, 0)
        hbox.pack_start(ovbox, True, True, 10)

        # pass old width and height
        o_w = 400
        o_h = 500

        # create text scroller with text view
        text_scroller = self.bw.create_text_view(o_w, o_h, self.tb)

        self.tb.new_case(self.string_resources["base_text"])

        hbox.pack_start(text_scroller, False, False, 10)

        # get database entries for treeview in scroller window
        store = self.create_model()

        # build treeview
        tree_view = self.bw.build_tree_view(store, self.on_row_change)

        # add tree view to sw
        sw.add(tree_view)

        # build list of headers
        column_header_list = [self.string_resources["column_header"], self.string_resources["column_header_2"],
                              self.string_resources["column_header_3"]]
        self.bw.create_columns(tree_view, column_header_list, custom_indices=[0, 6, 7])

        # Add navigation buttons
        if self.view_flag == "edit":
            b_list = [self.string_resources["assign_button"], self.string_resources["delete_button"],
                      self.string_resources["button_back"], self.string_resources["back_button"]]
            f_list = [self.assign, self.delete, self.restart, self.go_back]
        else:
            b_list = [self.string_resources["results_button"],
                      self.string_resources["back_button"]]
            f_list = [self.results, self.go_back]
        button_tree = self.bw.add_horizontal_buttons(b_list, f_list, f_size=16)

        # pack all to vbox
        vbox.pack_start(hbox, True, True, 0)
        vbox.pack_start(button_tree, False, False, 0)

        return vbox

    def restart(self, widget):
        self.facilitate_transfer(TestCreation, self.window_resources["user_type"], self.window_resources["name"],
                                 self.window_resources["password"], 1)

    def results(self, widget):
        from assessmentViewer import AssessmentViewer
        if self.no_exams_flag:
            sim_message(self.window_resources["window"], info_string=self.string_resources["no_data"],
                        secondary_text=self.string_resources["no_data_message"])

        elif self.window_resources["exam_id"] == '':
            sim_message(self.window_resources["window"], info_string=self.string_resources["no_assessment_selected"],
                        secondary_text=self.string_resources["no_assess_description"])

        else:
            # view highlighted exam's scores
            # call get sections
            st = SectionTree(self.bw, self.sec_name)
            bt = st.get_sections()

            st.sec_name = []

            if bt:

                s = sim_class_message(self.window_resources["window"],
                                      bt,
                                      st.sec_name,
                                      info_string=self.string_resources["choose_title"],
                                      secondary_text=self.string_resources["choose_description"])

                if s:
                    AssessmentViewer(s, self.window_resources, self.bases, self.cases, self.ddxs)
                else:
                    sim_message(self.window_resources["window"], info_string=self.string_resources["info_string"],
                                secondary_text=self.string_resources["secondary"])

            else:
                sim_message(self.window_resources["window"], info_string=self.string_resources["no_students_error"],
                            secondary_text=self.string_resources["please_add"])

    def assign_to_students_by_section(self, sections):
        """ function to write to_take strings to database for test taking """
        from totake import ToTake

        # initialize db model
        tt = ToTake()

        # initialize a flag for return value
        a_flag = False

        # write assessment title and sec_string to db iteratively
        for sec in sections:
            # check in loop to see that not already assigned
            result = tt.get_by_section_exam_id(key1=sec, key2=self.window_resources["exam_id"])
            if len(result) > 0:
                sim_message(self.window_resources["window"], info_string=self.string_resources["already_assigned"],
                            secondary_text=self.string_resources["already_description"])
            else:
                tt.save_to_db(self.window_resources["exam_id"], sec)
                a_flag = True

        return a_flag

    def assign(self, widget):
        """ Assign highlighted exam to section(s) of students """
        if self.no_exams_flag:
            sim_message(self.window_resources["window"], info_string=self.string_resources["no_data"],
                        secondary_text=self.string_resources["no_data_message"])

        elif self.window_resources["exam_id"] == '':
            sim_message(self.window_resources["window"], info_string=self.string_resources["no_assessment_selected"],
                        secondary_text=self.string_resources["no_assess_description"])

        else:
            # call get sections
            st = SectionTree(self.bw, self.sec_name)
            bt = st.get_sections()

            st.sec_name = []

            if bt:

                s = sim_class_message(self.window_resources["window"],
                                      bt,
                                      st.sec_name,
                                      info_string=self.string_resources["choose_title"],
                                      secondary_text=self.string_resources["choose_sections"])

                if s:
                    assigned_flag = self.assign_to_students_by_section(s)

                    if assigned_flag:
                        sim_message(self.window_resources["window"], info_string=self.string_resources["assigned"],
                                    secondary_text=self.string_resources["assigned_description"])
                        self.facilitate_transfer(TestCreation, self.window_resources["user_type"],
                                                 self.window_resources["name"],
                                                 self.window_resources["password"],
                                                 2)

                else:
                    sim_message(self.window_resources["window"], info_string=self.string_resources["info_string"],
                                secondary_text=self.string_resources["secondary"])

            else:
                sim_message(self.window_resources["window"], info_string=self.string_resources["no_students_error"],
                            secondary_text=self.string_resources["please_add"])

        return

    def delete(self, widget):
        if self.no_exams_flag:
            sim_message(self.window_resources["window"], info_string=self.string_resources["no_data"],
                        secondary_text=self.string_resources["no_data_message"])

        elif self.window_resources["exam_id"] == '':
            sim_message(self.window_resources["window"], info_string=self.string_resources["no_assessment_selected"],
                        secondary_text=self.string_resources["no_assess_description"])

        else:
            from totake import ToTake
            from baselinemodel import BaselineModel
            from messages import sim_reset_dialogue

            tt = ToTake()
            tm = TakenModel()
            bm = BaselineModel()

            yes_no = sim_reset_dialogue(self.window_resources["window"], info_string=self.string_resources["warning"],
                                        secondary_text=self.string_resources["warning_message"])

            if yes_no == "reset":

                # execute delete statements
                self.exam_info.delete_by_exam_id(key=self.window_resources["exam_id"])
                bm.delete_by_exam_id(key=self.window_resources["exam_id"])
                tt.delete_by_exam_id(key=self.window_resources["exam_id"])
                tm.delete_rows(key=self.window_resources["exam_id"])

                self.facilitate_transfer(TestCreation, self.window_resources["user_type"],
                                         self.window_resources["name"],
                                         self.window_resources["password"], 2)

            else:
                sim_message(self.window_resources["window"], info_string=self.string_resources["no_delete"],
                            secondary_text=self.string_resources["no_delete_message"])

    def go_back(self, widget):
        self.facilitate_transfer(SimFaculty, self.window_resources["user_type"], self.window_resources["name"],
                                 self.window_resources["password"])

    def facilitate_transfer(self, new_window, *args):
        from handleTransitions import HandleTransitions

        ht = HandleTransitions(self.window_resources["window"])

        ht.setup_transfer()
        new_window(*args)
        ht.finish_transfer()

    def check_taken(self, sections, title):
        tm = TakenModel()

        t = []
        for section in sections:
            t.extend(tm.get_by_exam_section_id(section, title))

        return len(t)

    def check_students(self, sections):
        """ method to return number of students taken out of total students assigned assessment """
        from studentmodel import StudentModel
        import itertools
        from functools import partial
        from operator import ne

        s = []
        for section in sections:
            s.extend(StudentModel().get_by_section(section))

        merged = list(itertools.chain.from_iterable(s))

        if "" in merged:
            merged = list(filter(partial(ne, ""), merged))

        if "ID" in merged:
            merged = list(filter(partial(ne, "ID"), merged))

        denominator = len(merged)

        return denominator

    def create_model(self):
        from exammodel import ExamModel
        from examParser import ExamParser

        store = Gtk.ListStore(str, str, str, str, str, str, str, str)
        self.exam_info = ExamModel()
        self.exams = self.exam_info.get_all(key='check')

        if self.exams:
            for exam in self.exams:
                # query exam model by one exam title to give AbSim machine commands.
                ep = ExamParser(flag='one', title=exam[0])
                case_info = ep.get_exam_info(ep.flag, ep.title)
                a_t = sorted(ep.get_assigned_to())

                # check number of students
                num_students = self.check_students(a_t)

                # check number of taken
                num_taken = self.check_taken(a_t, ep.title)

                # write string to print
                completed_string = str(num_taken) + "/" + str(num_students)

                case_list_comm, case_title_list, baseline_model, baseline_flag, \
                ddx_cases = ep.parse_exam_info(case_info)

                if baseline_flag:
                    base = 'yes'
                else:
                    base = 'no'
                if len(case_list_comm) > 0:
                    cases = 'yes'
                else:
                    cases = 'no'
                if len(ddx_cases) > 0:
                    ddx = 'yes'
                else:
                    ddx = 'no'
                store.append([exam[0], base, cases, ddx, "-".join(case_title_list),
                              "-".join(ddx_cases), ", ".join(a_t), completed_string])
        else:
            logging.debug('No assessments returned')
            self.no_exams_flag = True
        return store

    def parse_assessments(self, case, ddx):
        base = self.bases

        if base == "yes":
            base_string = u"\u2713"
        else:
            base_string = ""

        if len(case) > 0:
            cases = case.split("-")
            case = [u"\u2022" + i for i in cases if "ddx_" not in i]
        if len(ddx) > 0:
            ddx = ddx.split("-")
            ddx = [u"\u2022" + i for i in ddx]

        text = self.string_resources["baseline_text"] + " " + base_string + "\n\n" + \
               self.string_resources["ab_text"] + "\n" + u"\n".join(case) + "\n\n" + \
               self.string_resources["ddx_text"] + "\n" + u"\n".join(ddx)

        return text

    def on_row_change(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()
        self.window_resources['exam_id'] = model.get(iter, 0)[0]
        self.bases = model.get(iter, 1)[0]
        self.cases = model.get(iter, 2)[0]
        self.ddxs = model.get(iter, 3)[0]
        case_title_list = model.get(iter, 4)[0]
        ddx_cases = model.get(iter, 5)[0]
        assigned_string = model.get(iter, 6)[0]
        complete_string = model.get(iter, 7)[0]

        new_text = self.parse_assessments(case_title_list, ddx_cases)
        self.tb.new_case(new_text)
