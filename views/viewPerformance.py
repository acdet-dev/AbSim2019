import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk

import logging
import examParser
from views.menuBar import MenuBar
from aStringResources import AStringResources
from views.buildWidgets import BuildWidgets
from models import exammodel
from models.takenmodel import TakenModel
from casetext import CaseTextBuffer
from messages import sim_class_message, sim_message
import simLabels


class ViewPerformance(Gtk.Window, MenuBar):
    def __init__(self, user_type, name, password):

        # initialize string resources
        self.string_resources = AStringResources("view_performance", back_flag=True).get_by_identifier()

        # initialize builder
        self.bw = BuildWidgets()

        # Make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # get class parameters
        self.user_type = user_type
        self.name = name
        self.password = password
        self.exam_id = ''
        self.bases = ''
        self.cases = ''
        self.ddxs = ''
        self.baseline = ''
        self.ab = ''
        self.ddx = ''
        self.notebook = Gtk.Notebook()
        self.tb = CaseTextBuffer()
        self.sec_name = []
        self.no_exams_flag = False

        self.window_resources = {
            "exam_id": self.exam_id,
            "baseline": self.baseline,
            "ab": self.ab,
            "ddx": self.ddx,
            "notebook": self.notebook,
            "window": self,
        }

        # build menu bar
        box = self.build_bar()

        vbox = self.build_interface()
        base_vbox = Gtk.HBox(False, 2)
        ab_vbox = Gtk.VBox(False, 2)
        ddx_vbox = Gtk.VBox(False, 2)

        # Build main notebook. Each tab represents an instructional phase.
        self.notebook.set_tab_pos(0)

        # first selection notebook tab
        self.abDDX = vbox
        self.abDDX.set_property('border-width', 15)
        abDDX_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_1"])
        self.notebook.append_page(self.abDDX, abDDX_label)

        # baseline exam notebook tab
        self.window_resources['baseline'] = base_vbox
        self.window_resources['baseline'].set_property('border-width', 15)
        baseline_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_2"])
        self.notebook.append_page(self.window_resources['baseline'], baseline_label)

        # ab exam notebook tab
        self.window_resources['ab'] = ab_vbox
        self.window_resources['ab'].set_property('border-width', 15)
        ab_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_3"])
        self.notebook.append_page(self.window_resources['ab'], ab_label)

        # ddx exam notebook tab
        self.window_resources['ddx'] = ddx_vbox
        self.window_resources['ddx'].set_property('border-width', 15)
        ddx_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_4"])
        self.notebook.append_page(self.window_resources['ddx'], ddx_label)

        # add vbox as widget to window
        self.notebook.show()

        f_vbox = Gtk.VBox(False, 2)
        f_vbox.pack_start(box, False, False, 0)
        f_vbox.pack_start(self.notebook, True, True, 0)
        self.add(f_vbox)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)
        self.notebook.set_current_page(0)
        self.notebook.get_nth_page(1).hide()
        self.notebook.get_nth_page(2).hide()
        self.notebook.get_nth_page(3).hide()

    def build_interface(self):
        from simLabels import screen_sizer

        # get adjusted width
        screen_width = Gdk.Screen.get_default().get_width()
        screen_height = Gdk.Screen.get_default().get_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=500)

        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        # create scroller
        sw = self.bw.create_scroller()

        # pack scroller box to an h box
        ovbox.pack_start(sw, True, True, 0)
        hbox.pack_start(ovbox, True, True, 10)

        # create text scroller with text view
        text_scroller = self.bw.create_text_view(width, height, self.tb)

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
        b_list = [self.string_resources["assign_button"], self.string_resources["results_button"],
                  self.string_resources["delete_button"], self.string_resources["back_button"]]
        f_list = [self.assign, self.results, self.delete, self.go_back]
        button_tree = self.bw.add_horizontal_buttons(b_list, f_list, f_size=16)

        # pack all to vbox
        vbox.pack_start(hbox, True, True, 0)
        vbox.pack_start(button_tree, False, False, 0)

        return vbox

    def build_button_tree(self, sec_nums):
        check_button_box = Gtk.VBox()

        for num in sec_nums:
            button = self.bw.build_check_button(num, self.on_button_toggled, 12, [5, 5])
            check_button_box.pack_start(button, False, False, 0)

        return check_button_box

    def on_button_toggled(self, button, name):
        if button.get_active():
            self.sec_name.append(name)
        else:
            self.sec_name.remove(name)

    def get_number_sections(self):
        """ function to return unique sections of students """
        from models.studentmodel import StudentModel

        sm = StudentModel()
        students = sm.get_all(key="check")

        unique_sections = list(set([i[0] for i in students]))

        return sorted(unique_sections)

    def get_sections(self):
        section_numbers = self.get_number_sections()
        if len(section_numbers) > 0:
            button_tree = self.build_button_tree(section_numbers)

            return button_tree

        else:
            return None

    def assign_to_students_by_section(self, sections):
        """ function to write to_take strings to database for test taking """
        from models.totake import ToTake

        # initialize db model
        tt = ToTake()

        # initialize a flag for return value
        a_flag = False

        # write assessment title and sec_string to db iteratively
        for sec in sections:
            # check in loop to see that not already assigned
            result = tt.get_by_section_exam_id(key1=sec, key2=self.window_resources["exam_id"])
            if len(result) > 0:
                sim_message(self, info_string=self.string_resources["already_assigned"],
                            secondary_text=self.string_resources["already_description"])
            else:
                tt.save_to_db(self.window_resources["exam_id"], sec)
                a_flag = True

        return a_flag

    def assign(self, widget):
        """ Assign highlighted exam to section(s) of students """
        if self.no_exams_flag:
            sim_message(self, info_string=self.string_resources["no_data"],
                        secondary_text=self.string_resources["no_data_message"])

        elif self.window_resources["exam_id"] == '':
            sim_message(self, info_string=self.string_resources["no_assessment_selected"],
                        secondary_text=self.string_resources["no_assess_description"])

        else:
            # call get sections
            bt = self.get_sections()

            self.sec_name = []

            if bt:

                s = sim_class_message(self,
                                      bt,
                                      self.sec_name,
                                      info_string=self.string_resources["choose_title"],
                                      secondary_text=self.string_resources["choose_sections"])

                if s:
                    assigned_flag = self.assign_to_students_by_section(s)

                    if assigned_flag:
                        sim_message(self, info_string=self.string_resources["assigned"],
                                    secondary_text=self.string_resources["assigned_description"])
                        self.facilitate_transfer(ViewPerformance, self.user_type, self.name, self.password)

                else:
                    sim_message(self, info_string=self.string_resources["info_string"],
                                secondary_text=self.string_resources["secondary"])

            else:
                sim_message(self, info_string=self.string_resources["no_students_error"],
                            secondary_text=self.string_resources["please_add"])

        return

    def results(self, widget):
        from views.assessmentViewer import AssessmentViewer
        if self.no_exams_flag:
            sim_message(self, info_string=self.string_resources["no_data"],
                        secondary_text=self.string_resources["no_data_message"])

        elif self.window_resources["exam_id"] == '':
            sim_message(self, info_string=self.string_resources["no_assessment_selected"],
                        secondary_text=self.string_resources["no_assess_description"])

        else:
            # view highlighted exam's scores
            bt = self.get_sections()

            self.sec_name = []

            if bt:

                s = sim_class_message(self,
                                      bt,
                                      self.sec_name,
                                      info_string=self.string_resources["choose_title"],
                                      secondary_text=self.string_resources["choose_description"])

                if s:
                    AssessmentViewer(sorted(s), self.window_resources, self.bases, self.cases, self.ddxs)
                else:
                    sim_message(self, info_string=self.string_resources["info_string"],
                                secondary_text=self.string_resources["secondary"])

            else:
                sim_message(self, info_string=self.string_resources["no_students_error"],
                            secondary_text=self.string_resources["please_add"])

    def delete(self, widget):
        if self.no_exams_flag:
            sim_message(self, info_string=self.string_resources["no_data"],
                        secondary_text=self.string_resources["no_data_message"])

        elif self.window_resources["exam_id"] == '':
            sim_message(self, info_string=self.string_resources["no_assessment_selected"],
                        secondary_text=self.string_resources["no_assess_description"])

        else:

            from models.totake import ToTake
            from messages import sim_reset_dialogue

            tt = ToTake()
            tm = TakenModel()

            yes_no = sim_reset_dialogue(self, info_string=self.string_resources["warning"],
                                        secondary_text=self.string_resources["warning_message"])

            if yes_no == "reset":

                # execute delete statements
                self.exam_info.delete_by_exam_id(key=self.window_resources["exam_id"])
                tt.delete_by_exam_id(key=self.window_resources["exam_id"])
                tm.delete_rows(key=self.window_resources["exam_id"])

                self.facilitate_transfer(ViewPerformance, self.user_type, self.name, self.password)

            else:
                sim_message(self, info_string=self.string_resources["no_delete"],
                            secondary_text=self.string_resources["no_delete_message"])

    def go_back(self, widget):
        from views.simFaculty import SimFaculty
        self.facilitate_transfer(SimFaculty, self.user_type, self.name, self.password)

    def facilitate_transfer(self, new_window, *args):
        from views.handleTransitions import HandleTransitions

        ht = HandleTransitions(self)

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
        from models.studentmodel import StudentModel
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
        store = Gtk.ListStore(str, str, str, str, str, str, str, str)
        self.exam_info = exammodel.ExamModel()
        self.exams = self.exam_info.get_all(key='check')

        if self.exams:
            for exam in self.exams:
                # query exam model by one exam title to give AbSim machine commands.
                ep = examParser.ExamParser(flag='one', title=exam[0])
                case_info = ep.get_exam_info(ep.flag, ep.title)
                a_t = sorted(ep.get_assigned_to())

                # check number of students
                num_students = self.check_students(a_t)

                # check number of taken
                num_taken = self.check_taken(a_t, ep.title)

                # write string to print
                completed_string = str(num_taken) + "/" + str(num_students)

                case_list_comm, case_title_list, baseline_model, baseline_flag,\
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

        cases = case.split("-")
        just_cases = [u"\u2022" + i for i in cases if "ddx_" not in i]
        ddx = ddx.split("-")
        ddx = [u"\u2022" + i for i in ddx]

        text = self.string_resources["baseline_text"] + " " + base_string + "\n\n" +\
               self.string_resources["ab_text"] + "\n" + u"\n".join(just_cases) + "\n\n" +\
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