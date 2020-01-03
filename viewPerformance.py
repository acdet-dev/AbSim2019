import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Pango

import assessmentViewer
import examParser
import menu
from menu import *
from aStringResources import AStringResources
import exammodel
import splashscreen
from casetext import CaseTextBuffer
from messages import sim_class_message, sim_message


class ViewPerformance(Gtk.Window, menu.MenuBar):
    def __init__(self, name, password):

        # initialize string resources
        self.string_resources = AStringResources("view_performance", back_flag=True).get_by_identifier()

        # Make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # get class parameters
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
        self.notebook.set_tab_pos(Gtk.POS_LEFT)

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

        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        # scroller window for all abnormality and ddx exams in queue
        sw = Gtk.ScrolledWindow()
        sw.set_shadow_type(Gtk.SHADOW_ETCHED_IN)
        sw.set_policy(Gtk.POLICY_AUTOMATIC, Gtk.POLICY_AUTOMATIC)

        # pack scroller box to an h box
        ovbox.pack_start(sw, True, True, 0)
        hbox.pack_start(ovbox, True, True, 10)

        # text is not editable and wraps between words
        text_view = Gtk.TextView(buffer=self.tb)
        text_view.set_editable(False)
        text_view.set_wrap_mode(Gtk.WRAP_WORD)

        # get adjusted width
        screen_width = Gtk.gdk.screen_width()
        screen_height = Gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=500)

        text_scroller = Gtk.ScrolledWindow()
        text_scroller.set_property('hscrollbar-policy', Gtk.POLICY_AUTOMATIC)
        text_scroller.set_property('vscrollbar-policy', Gtk.POLICY_AUTOMATIC)
        text_scroller.set_size_request(width, height)
        text_scroller.set_property('border-width', 1)
        text_scroller.add(text_view)
        self.tb.new_case(self.string_resources["base_text"])
        # text_scroller_vadjustment = text_scroller.get_vadjustment()

        hbox.pack_start(text_scroller, False, False, 10)

        # get database entries for treeview in scroller window
        store = self.create_model()

        treeView = Gtk.TreeView(store)
        treeView.connect('cursor-changed', self.on_row_change)
        treeView.set_rules_hint(True)
        sw.add(treeView)

        self.create_columns(treeView)

        # Add navigation buttons
        self.button_tree = self.add_buttons()

        # pack all to vbox
        vbox.pack_start(hbox, True, True, 0)
        vbox.pack_start(self.button_tree, False, False, 0)

        return vbox

    def build_logo(self, widget):
        logo = Gtk.Image()
        logo.set_from_file('img/acdet-logo.gif')

        widget.pack_start(logo, False, False, 0)

        return widget

    def add_buttons(self):

        button_table = Gtk.Table(rows=4, columns=2)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        assign_button = self.build_button(self.string_resources["assign_button"])
        assign_button.connect('clicked', self.assign)
        button_table.attach(assign_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        results_button = self.build_button(self.string_resources["results_button"])
        results_button.connect('clicked', self.results)
        button_table.attach(results_button, 1, 2, 0, 1, xoptions=False, yoptions=False)

        back_button = self.build_button(self.string_resources["back_button"])
        back_button.connect('clicked', self.go_back)
        button_table.attach(back_button, 2, 3, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_button(self, label_text):
        from simLabels import construct_markup
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=20)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def build_check_button(self, label_text):
        from simLabels import construct_markup

        button = Gtk.CheckButton.new()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=10)
        label.set_markup(label_pre_mark)
        label.set_padding(5, 5)
        button.add(label)
        button.connect("toggled", self.on_button_toggled, label_text)

        return button

    def build_button_tree(self, sec_nums):
        check_button_box = Gtk.VBox()

        for num in sec_nums:
            button = self.build_check_button(num)
            check_button_box.pack_start(button, False, False, 0)

        return check_button_box

    def on_button_toggled(self, button, name):
        if button.get_active():
            self.sec_name.append(name)
        else:
            self.sec_name.remove(name)

    def get_number_sections(self):
        """ function to return unique sections of students """
        from studentmodel import StudentModel

        sm = StudentModel()
        students = sm.get_all(key="check")

        unique_sections = list(set([i[0] for i in students]))

        return sorted(unique_sections)

    def setup_transfer(self):
        self.splash_screen = splashscreen.SplashScreen()
        self.splash_screen.show_all()
        while Gtk.events_pending():
            Gtk.main_iteration()

    def close_menu(self):
        self.handler_block(self.destroy_signal_handler)
        self.destroy()

    def finish_transfer(self):
        self.splash_screen.hide()
        self.close_menu()

    def get_sections(self):
        section_numbers = self.get_number_sections()
        if len(section_numbers) > 0:
            button_tree = self.build_button_tree(section_numbers)

            return button_tree

        else:
            return None

    def assign_to_students_by_section(self, sections):
        """ function to write to_take strings to database for test taking """
        from totake import ToTake

        # initialize db model
        tt = ToTake()

        # write assessment title and sec_string to db iteratively
        for sec in sections:
            tt.save_to_db(self.window_resources["exam_id"], sec)

        return

    def assign(self, widget):
        """ Assign highlighted exam to section(s) of students """

        # call get sections
        bt = self.get_sections()

        self.sec_name = []

        if bt:

            s = sim_class_message(self,
                                  bt,
                                  self.sec_name,
                                  info_string=self.string_resources["choose_title"],
                                  secondary_text=self.string_resources["choose_description"])

            if s:
                self.assign_to_students_by_section(s)
            else:
                sim_message(self, info_string=self.string_resources["info_string"],
                            secondary_text=self.string_resources["secondary"])

        else:
            sim_message(self, info_string=self.string_resources["no_students_error"],
                        secondary_text=self.string_resources["please_add"])

        return

    def results(self, widget):
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
                assessmentViewer.AssessmentViewer(sorted(s), self.window_resources, self.bases, self.cases, self.ddxs)
            else:
                sim_message(self, info_string=self.string_resources["info_string"],
                            secondary_text=self.string_resources["secondary"])

        else:
            sim_message(self, info_string=self.string_resources["no_students_error"],
                        secondary_text=self.string_resources["please_add"])

    def go_back(self, widget):
        from sim import UserType
        self.setup_transfer()
        UserType('faculty', self.name, self.password)
        self.finish_transfer()

    def create_model(self):
        store = Gtk.ListStore(str, str, str, str, str, str, str)
        self.exam_info = exammodel.ExamModel()
        self.exams = self.exam_info.get_all(key='check')

        if self.exams:
            for exam in self.exams:
                # query exam model by one exam title to give AbSim machine commands.
                ep = examParser.ExamParser(flag='one', title=exam[0].decode('utf-8'))
                case_info = ep.get_exam_info(ep.flag, ep.title)
                a_t = sorted(ep.get_assigned_to())
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
                store.append([exam[0].decode('utf-8'), base, cases, ddx, "-".join(case_title_list),
                              ", ".join(ddx_cases), ", ".join(a_t)])
        else:
            logging.debug('No assessments returned')
        return store

    def parse_assessments(self, case, ddx):
        base = self.bases

        if base == "yes":
            base_string = u"\u2713"
        else:
            base_string = ""

        cases = case.split("-")
        just_cases = [i for i in cases if "ddx_" not in i]

        text = self.string_resources["baseline_text"] + base_string + "\n\n" +\
               self.string_resources["ab_text"] + "\n" + ", ".join(just_cases) + "\n\n" +\
               self.string_resources["ddx_text"] + "\n" + ddx

        return text

    def create_columns(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header"], renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_2"], renderer_text, text=6)
        column.set_sort_column_id(6)
        column.set_resizable(True)
        treeView.append_column(column)

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

        new_text = self.parse_assessments(case_title_list, ddx_cases)
        self.tb.new_case(new_text)
