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


class TestCreation(Gtk.Window, MenuBar):
    """
    test making window. Allows faculty to create and assign tests
    """

    def __init__(self, user_type, name, password):
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
        third_page = ViewPage(self.string_resources, self.window_resources)
        third_page.set_property('border-width', 15)
        third_page_label = MilestoneNameLabel(self.string_resources["nb_tab_3"])
        self.notebook.append_page(third_page, third_page_label)

        widget.pack_start(self.notebook, True, True, 0)

        self.add(widget)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        self.notebook.set_current_page(0)

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


class CreatePage(Gtk.VBox):
    def __init__(self, string_resources, wr):
        super(CreatePage, self).__init__(False, 2)

        # intialize passed string resources
        self.string_resources = string_resources
        self.window_resources = wr
        self.label_tb = CaseTextBuffer()
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

    def add_check_buttons(self, lst, use_case_dict=False):
        from math import ceil

        check_button_box = Gtk.HBox()

        check_button_half = Gtk.VBox()
        check_button_o_half = Gtk.VBox()

        if use_case_dict:
            for i in range(0, ceil(len(lst)/2)):
                button = self.bw.build_check_button(self.case_dict[lst[i]], function=self.on_button_toggled,
                                                    f_size=14, padding=[10, 10])
                check_button_half.pack_start(button, False, False, 0)
                self.button_list.append(button)

            for j in range(ceil(len(lst)/2), len(lst)):
                button2 = self.bw.build_check_button(self.case_dict[lst[j]], function=self.on_button_toggled,
                                                     f_size=14, padding=[10, 10])
                check_button_o_half.pack_start(button2, False, False, 0)
                self.button_list.append(button2)

        else:
            lst = sorted(lst)
            for i in range(0, ceil(len(lst) / 2)):
                button = self.bw.build_check_button(label_text=lst[i], function=self.on_button_toggled,
                                                    f_size=14, padding=[10, 10])
                check_button_half.add(button)
                self.button_list.append(button)

            for j in range(ceil(len(lst) / 2), len(lst)):
                button2 = self.bw.build_check_button(label_text=lst[j], function=self.on_button_toggled,
                                                     f_size=14, padding=[10, 10])
                check_button_o_half.add(button2)
                self.button_list.append(button2)

        check_button_box.pack_start(check_button_half, False, False, 10)
        check_button_box.pack_start(check_button_o_half, False, False, 10)

        return check_button_box

    def build_buttons(self, rows, columns):
        button_table = Gtk.Table(rows=rows, columns=columns, homogeneous=True)
        button_table_alignment = Gtk.Alignment(xalign=0.0)

        check_label_text = self.string_resources["option_1"]
        button = self.bw.build_check_button(label_text=check_label_text, function=self.on_button_toggled, f_size=14,
                                            padding=[10, 10])

        button_table.attach(button, 0, 1, 0, 1)
        button_table_alignment.add(button_table)

        return button_table_alignment

    def on_button_toggled(self, button, name):
        if name == "Add Palpatory Examination?":
            if button.get_active():
                self.baseline_flag = True

            else:
                self.baseline_flag = False

        elif name in list(self.case_dict.values()):
            if button.get_active():
                self.case_list.append(list(self.case_dict.keys())[list(self.case_dict.values()).index(name)])
                self.title_list.append(name)
            else:
                self.case_list.remove(list(self.case_dict.keys())[list(self.case_dict.values()).index(name)])
                self.title_list.remove(name)

        elif name in self.ddx_list:
            if button.get_active():
                self.ddx_case_list.append(name)
                self.ddx_title_list.append('ddx' + '_' + name)
            else:
                self.ddx_case_list.remove(name)
                self.ddx_title_list.remove('ddx' + '_' + name)

    def create_text_view(self, tb, o_w=300, o_h=300):
        # create text view
        text_scroller = self.bw.create_text_view(o_w, o_h, tb)

        return text_scroller

    def build_interface(self):
        box = Gtk.VBox()

        # initialize and add label buffer text
        label_buffer_text = "1. {}".format(self.string_resources["palpatory_text"])

        self.label_tb.new_case(label_buffer_text)

        label_scroller = self.create_text_view(self.label_tb, 300, 50)

        # initialize and add description buffer text
        description_text = self.string_resources["palpatory_description"]
        self.description_tb.new_case(description_text)

        desc_scroller = self.create_text_view(self.description_tb, 300, 50)

        # add check button options
        palpatory_bta = self.build_buttons(1, 1)

        # add normal page nav buttons
        b_list = [self.string_resources["next_button"], self.string_resources["back_button"]]
        f_list = [self.next_type, self.return_home]
        button_tree = self.bw.add_horizontal_buttons(button_list=b_list, functions=f_list, f_size=16)

        box.pack_start(label_scroller, False, False, 10)
        box.pack_start(desc_scroller, False, False, 10)
        box.pack_start(palpatory_bta, False, False, 10)
        box.pack_start(button_tree, False, False, 10)

        return box

    def facilitate_transfer(self, *args, new_window):
        from handleTransitions import HandleTransitions

        ht = HandleTransitions(self.window_resources['window'])

        ht.setup_transfer()
        new_window(*args)
        ht.finish_transfer()

    def return_home(self, widget):
        from simFaculty import SimFaculty
        self.facilitate_transfer(self.window_resources['user_type'], self.window_resources['name'],
                                 self.window_resources['password'], new_window=SimFaculty)

    def add_and_remove_widgets(self):
        # get list of children
        box_children = self.built_box.get_children()

        # remove current check list
        self.built_box.remove(box_children[2])

        # move added check list to second position
        self.built_box.reorder_child(box_children[-1], 2)

        # show all widgets existing in built_box
        self.built_box.show_all()

    def next_type(self, choice):
        self.counter += 1

        if self.counter == 1:
            # initialize and add label buffer text
            label_bt = "2. {}".format(self.string_resources["ab_text"])
            self.label_tb.new_case(label_bt)

            # initialize and add description buffer text
            description_text = self.string_resources["ab_description"]
            self.description_tb.new_case(description_text)

            # create abnormality button alignment
            case_commands = [
                'none n', 'appendix t', 'appendix g', 'appendix r', 'appendix gr',
                'bladder t', 'colon t', 'colon g', 'gallbladder t', 'gallbladder g',
                'ugi t', 'ovary_left t', 'ovary_left g', 'ovary_right t', 'ovary_right g',
                'pancreas t', 'hepatomegaly n', 'splenomegaly n', 'enlarged_bladder n']
            abnormality_bta = self.add_check_buttons(lst=case_commands, use_case_dict=True)
            self.built_box.pack_start(abnormality_bta, False, False, 10)

            # remove existing choice tree child and add new
            self.add_and_remove_widgets()

        elif self.counter == 2:
            # initialize and add label buffer text
            label_bt = "3. {}".format(self.string_resources["ddx_text"])
            self.label_tb.new_case(label_bt)

            # initialize and add description buffer text
            description_text = self.string_resources["ddx_description"]
            self.description_tb.new_case(description_text)

            # create abnormality button alignment
            ddx_names = CaseText().cases.get(525, [])
            for j in ddx_names:
                temp = [i["ddx_name"] for i in j]
                self.ddx_list.append(temp[0])

            ddx_bta = self.add_check_buttons(lst=self.ddx_list)
            self.built_box.pack_start(ddx_bta, False, False, 10)

            # remove existing choice tree child and add new
            self.add_and_remove_widgets()

        elif self.counter == 3:
            self.add_to_exam()
            self.window_resources["notebook"].set_current_page(2)
            self.window_resources["notebook"].get_nth_page(0).hide()
            self.window_resources["notebook"].get_nth_page(1).hide()

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


class ViewPage(Gtk.VBox):
    def __init__(self, string_resources, wr):
        super(ViewPage, self).__init__(False, 2)

        self.string_resources = string_resources
        self.window_resources = wr
