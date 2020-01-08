from aStringResources import AStringResources
import splashscreen
from messages import sim_message
import time
import ailments
import pressurepoints
import guarding
import statewatcher
import casetext
import copy
import observer
import port_settings
import simLabels
from simLabels import construct_markup, font_size, screen_sizer
import sounds
import donottouch
import takenmodel
import examParser
import logging
import random
from Levenshtein import distance

import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib, Pango


class ViewAssignments(Gtk.Window):

    def __init__(self, section, last, first, password):
        # initialize inherited variables
        self.section = section
        self.last = last
        self.first = first
        self.password = password
        self.exam_title = self.check_exam_by_section()
        self.exam_info = self.exams_left()
        self.string_resources = AStringResources("view_assignments", back_flag=True).get_by_identifier()

        # build parent objects for child classes to save to
        self.ab_flag = False
        self.baselineFlag = False
        self.ddx_flag = False
        self.score = 0
        self.num = 0
        self.den = 0
        self.ddx_den = 0
        self.ddx_score = 0
        self.ddx_num = 0
        self.cases = []
        self.title_list = []
        self.ddx_indices = []
        self.ddx_cases = []
        self.text_dict = {}
        self.answer_list = []
        self.ddx_answer_list = []
        self.student_answer_list = []
        self.student_ddx_list = []
        self.untouched = []
        self.untouched_ddx = []
        self.baselinemodel = None
        self.exam_title = None

        self.exam_resources = {
            'section': self.section,
            'last': self.last,
            'first': self.first,
            'password': self.password,
            'exam_info': self.exam_info,
            'ab_flag': self.ab_flag,
            'baseline_flag': self.baselineFlag,
            'ddx_flag': self.ddx_flag,
            'ab_score': self.score,
            'ab_num': self.num,
            'ab_den': self.den,
            'ddx_score': self.ddx_score,
            'ddx_num': self.ddx_num,
            'ddx_den': self.ddx_den,
            'case_list': self.cases,
            'case_title_list': self.title_list,
            'ddx_indices': self.ddx_indices,
            'ddx_cases': self.ddx_cases,
            'text_dict': self.text_dict,
            'ab_answer_list': self.answer_list,
            'ddx_answer_list': self.ddx_answer_list,
            'student_answer_list': self.student_answer_list,
            'student_ddx_list': self.student_ddx_list,
            'untouched': self.untouched,
            'untouched_ddx': self.untouched_ddx,
            'baseline_model': self.baselinemodel,
            'exam_title': self.exam_title,
            'baseline_start': 0,
            'ab_start': 0,
            'ab_end': 0,
            'ddx_start': 0,
            'ddx_end': 0,
        }

        # Build all the objects that talk to each other
        self.new_selected_case = observer.Observer()
        self.ailments = ailments.Ailments()
        self.pressurepoints = pressurepoints.PressureList(self.new_selected_case)
        self.guarding = guarding.Guarding()
        self.state_watcher = statewatcher.StateWatcher(self.ailments, self.pressurepoints)
        self.touch_alerter = donottouch.TouchAlerter(self.state_watcher, self.pressurepoints)
        self.current_case = 'none n'
        self.port_settings = port_settings.PortSettings(self, self.state_watcher, self.touch_alerter)

        self.new_case_block = observer.Observer()
        self.sounds = sounds.Sounds(self.state_watcher, self.pressurepoints, self.ailments, self.touch_alerter)

        self.notebook = Gtk.Notebook()
        self.view_resources = {
            'ailments': self.ailments,
            'pressurepoints': self.pressurepoints,
            'guarding': self.guarding,
            'state_watcher': self.state_watcher,
            'new_case_observer': self.new_selected_case,
            'new_case_block_observer': self.new_case_block,
            'notebook': self.notebook,
            'window': self,
        }

        # make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # Disconnection Error message
        self.disconnection_warning = simLabels.DisconnectWarning()

        self.new_case_observer = self.view_resources['new_case_observer']
        self.new_case_block_observer = self.view_resources['new_case_block_observer']

        # Build main notebook. Each tab represents an instructional phase.
        self.notebook.set_tab_pos(Gtk.POS_LEFT)
        self.notebook.connect('switch-page', self.reset_active_page)

        # destroy signal for window
        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        # Baseline Assessment
        self.baseline = BaselineTest(self.exam_resources, self.view_resources, self.string_resources)
        self.baseline.set_property('border-width', 15)
        baseline_label = simLabels.MilestoneNameLabel(self.string_resources["baseline_option"])
        self.notebook.append_page(self.baseline, baseline_label)

        # Case Assessment
        self.case_exam = CaseExam(self.exam_resources, self.view_resources, self.string_resources)
        self.case_exam.set_property('border-width', 15)
        case_exam_label = simLabels.MilestoneNameLabel(self.string_resources["ab_option"])
        self.notebook.append_page(self.case_exam, case_exam_label)

        # DDX Assessment
        self.ddx_exam = DdxExam(self.exam_resources, self.view_resources, self.string_resources)
        self.ddx_exam.set_property('border-width', 15)
        ddx_exam_label = simLabels.MilestoneNameLabel(self.string_resources["ddx_option"])
        self.notebook.append_page(self.ddx_exam, ddx_exam_label)

        # View Tests
        self.view_tests = ViewTests(self.exam_resources, self.view_resources, self.string_resources)
        self.view_tests.set_property('border-width', 15)
        view_tests_label = simLabels.MilestoneNameLabel(self.string_resources["view_option"])
        self.notebook.prepend_page(self.view_tests, view_tests_label)

        self.notebook.show()
        self.view_tests.show()
        self.baseline.show()
        self.case_exam.show()
        self.ddx_exam.show()

        vbox = Gtk.VBox(False, 2)
        vbox.pack_start(self.disconnection_warning, False, False, 0)
        vbox.pack_start(self.notebook, True, True, 0)
        self.add(vbox)

        self.show_all()

        self.notebook.get_nth_page(1).hide()
        self.notebook.get_nth_page(2).hide()
        self.notebook.get_nth_page(3).hide()

        # connect signals
        self.do_not_touch = donottouch.DoNotTouchWarning(self.state_watcher)
        self.attach_new_case_observer(self.do_not_touch.restart)
        self.attach_new_case_observer(self.guarding.new_case_selected)
        self.attach_new_case_observer(self.touch_alerter.enable_protection)
        self.attach_new_case_observer(self.sounds.new_generic_case)
        self.new_case_block.connect(self.sounds.new_generic_case)

        self.state_watcher.connect('sensor_pad_disconnected', self.show_disconnection_warning)
        self.state_watcher.connect('sensor_pad_connected', self.hide_disconnection_warning)

        # Always do this one last
        # This means the case will be readable on the main window
        # but people will still know not to strip the belts.
        if hasattr(self.port_settings, 'cnc_port'):
            logging.debug('cnc has port')
            self.hide_disconnection_warning(signal_source='hi')

        else:
            logging.debug('cnc port not found')
            self.show_disconnection_warning(self.state_watcher)

        self.attach_new_case_observer(self.port_settings.new_case_selected)

        self.new_selected_case.alert('none n')
        self.notebook.set_current_page(0)

    def reset_active_page(self, notebook, useless_param, page_num):
        # When the user clicks a page, reset it to its default.
        # useless_param is useless in PyGtk, but Gtk passes it anyway.
        page = notebook.get_nth_page(page_num)
        page.reset_page()

    def attach_new_case_observer(self, callback):
        if self.state_watcher.sensor_pad_is_connected == True:
            self.new_selected_case.connect(callback)
        else:
            logging.debug('not true')

    def show_do_not_touch_modal(self, widget):
        # Gtk.threads_enter()
        # GObject.idle_add(self.do_not_touch.restart)
        GLib.idle_add(self.do_not_touch.restart)
        # Gtk.threads_leave()

    def show_disconnection_warning(self, signal_source):
        GLib.idle_add(self.disconnection_warning.show_all)

    def hide_disconnection_warning(self, signal_source):
        GLib.idle_add(self.disconnection_warning.hide)

    def check_exam_by_section(self):
        """ function to populate tree widget with assigned assessments """
        from totake import ToTake
        tt = ToTake().get_by_section_id(key=self.section)

        return tt

    def exams_left(self):
        # function to only show what exams a student has not taken, to prevent retaking for higher score.
        import exammodel
        import takenmodel
        import baselinemodel

        exam_model = exammodel.ExamModel()

        exam_info = []
        for title in self.exam_title:
            exam_info.append(list(exam_model.get_by_exam_id(key=title[0])))

        taken_model = takenmodel.TakenModel()

        taken_list = taken_model.get_by_score_id(key=self.password)
        baseline_model = baselinemodel.BaselineModel()
        baseline_list = baseline_model.get_by_score_id(key=self.password)

        if taken_list:
            for i in range(0, len(taken_list)):
                for j in exam_info:
                    if taken_list[i][1].encode() in j:
                        exam_info.remove(j)

        if baseline_list:
            for i in range(0, len(baseline_list)):
                for j in exam_info:
                    if baseline_list[i][0].encode() in j:
                        exam_info.remove(j)

        return exam_info

    def return_home(self, optional=''):
        import defineUser
        import dbmigrator

        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        # Perform DB migration to make sure we have the newest version
        dbmigrator.DBMigrator()

        try:
            self.sounds.stop_sound_player()
            self.port_settings.stop_devices()
        except AttributeError:
            logging.debug('attributes necessary for stopping devices not made yet')

        defineUser.DefineUser()
        splash_screen.hide()
        self.destroy()
        Gtk.main()


class ViewTests(Gtk.HBox):
    def __init__(self, exam_resources, view_resources, sr):
        super(ViewTests, self).__init__(False, 2)

        self.exam_resources = exam_resources
        self.view_resources = view_resources
        self.string_resources = sr

        # build interface
        built_box = self.build_interface()

        self.add(built_box)

        built_box.show_all()

        self.show()

    def build_view_tree(self):

        # Columns available to rows:
        #   str: name of exam

        store = Gtk.ListStore(str)

        for i in range(0, len(self.exam_resources['exam_info'])):
            treeiter = store.append([self.exam_resources['exam_info'][i][0]])

        tv = Gtk.TreeView(store)

        # Set up font for display
        font = Pango.FontDescription('normal 14')
        self.cell = Gtk.CellRendererText()
        self.cell.set_property('font-desc', font)

        tvcolumn = Gtk.TreeViewColumn(self.string_resources["column_header"], self.cell)
        tv.append_column(tvcolumn)
        tvcolumn.add_attribute(self.cell, 'text', 0)
        tv.expand_all()
        tv.connect('cursor-changed', self.on_tree_selected)
        return tv

    def on_tree_selected(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()

        self.exam_resources['exam_title'] = model.get(iter, 0)[0]

    def build_interface(self):
        box = Gtk.VBox()
        case_selector_tree = self.build_view_tree()
        case_selector_scroller = Gtk.ScrolledWindow()
        case_selector_scroller.add(case_selector_tree)
        case_selector_scroller.set_policy(Gtk.POLICY_NEVER, Gtk.POLICY_AUTOMATIC)
        case_selector_scroller.set_size_request(450, 200)

        label = Gtk.Label()
        label_text = self.string_resources["welcome_string"] + "\n\n" +\
                     self.string_resources["instruction_string"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        label.set_markup(label_pre_mark)
        label.set_line_wrap(True)
        label.set_alignment(0, 0)
        label.set_max_width_chars(50)

        button_tree = self.add_buttons()

        # construct horizontal box to place label to the left of box features
        # pre_box = Gtk.HBox()

        # pre_box.pack_start(label, False, False, 50)
        box.pack_start(label, False, False, 20)
        box.pack_start(case_selector_scroller, True, True, 20)
        box.pack_start(Gtk.HSeparator(), False, False, 40)
        box.pack_start(button_tree, True, True, 10)
        # pre_box.pack_start(box, False, False, 20)

        return box

    def add_buttons(self):
        button_table = Gtk.Table(rows=2, columns=2)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(self.string_resources["begin_button"])
        right_button.connect('clicked', self.begin_exam)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        left_button = self.build_button(self.string_resources["back_button"])
        left_button.connect('clicked', self.view_resources['window'].return_home)
        button_table.attach(left_button, 1, 2, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=16)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def get_vignette(self):
        # find ddx_list label_info
        ddx_list = self.exam_resources['text_dict'].cases.get(525, [])
        indices = [i for i, x in enumerate(ddx_list)]

        relevant = [ddx_list[j] for j in indices if ddx_list[j][0]['ddx_name'] == self.exam_resources['ddx_cases'][0]]

        rand_index = random.randint(0, len(relevant[0]) - 1)
        random_rel = relevant[0][rand_index]

        label_text = random_rel['vignette']
        ailment_key = random_rel['ailment']

        return label_text, ailment_key, random_rel

    def build_exam_view(self):

        if self.exam_resources['ddx_cases'] and len(self.exam_resources['ddx_cases']) > 0:
            self.exam_resources['untouched_ddx'].extend(self.exam_resources['ddx_cases'])
            random.shuffle(self.exam_resources['ddx_cases'], random.random)
            self.exam_resources['ddx_flag'] = True
            self.exam_resources['ddx_den'] = len(self.exam_resources['ddx_cases'])
            self.exam_resources['text_dict'] = casetext.CaseText()

        else:
            self.exam_resources['ddx_flag'] = False

        # find abnormality items
        if len(self.exam_resources['case_list']) > 0:
            self.exam_resources['untouched'].extend(self.exam_resources['case_list'])
            self.exam_resources['ab_flag'] = True
            random.shuffle(self.exam_resources['case_list'], random.random)
            self.exam_resources['ab_den'] = len(self.exam_resources['case_list'])

        else:
            self.exam_resources['ab_flag'] = False

        if self.exam_resources['baseline_flag']:
            page1 = self.view_resources['notebook'].get_nth_page(0)
            page2 = self.view_resources['notebook'].get_nth_page(2)
            page3 = self.view_resources['notebook'].get_nth_page(3)
            page = self.view_resources['notebook'].get_nth_page(1)

            page1.hide()
            page2.hide()
            page3.hide()
            page.show()
            if 'notebook' in self.view_resources:
                self.view_resources['notebook'].set_current_page(1)
                self.view_resources['new_case_observer'].alert('none n')

                self.exam_resources['baseline_start'] = time.time()

        else:
            if len(self.exam_resources['case_list']) > 0:
                page1 = self.view_resources['notebook'].get_nth_page(0)
                page2 = self.view_resources['notebook'].get_nth_page(1)
                page3 = self.view_resources['notebook'].get_nth_page(3)
                page = self.view_resources['notebook'].get_nth_page(2)

                page1.hide()
                page2.hide()
                page3.hide()
                page.show()
                if 'notebook' in self.view_resources:
                    self.view_resources['notebook'].set_current_page(2)
                    self.view_resources['new_case_observer'].alert(self.exam_resources['case_list'][0])

                    self.exam_resources['ab_start'] = time.time()

            elif self.exam_resources['ddx_cases'] and len(self.exam_resources['ddx_cases']) > 0:
                # transition to new window
                page1 = self.view_resources['notebook'].get_nth_page(0)
                page2 = self.view_resources['notebook'].get_nth_page(1)
                page3 = self.view_resources['notebook'].get_nth_page(2)
                page = self.view_resources['notebook'].get_nth_page(3)

                page1.hide()
                page2.hide()
                page3.hide()
                page.show()
                if 'notebook' in self.view_resources:
                    self.view_resources['notebook'].set_current_page(3)

                # add case vignette to scroller
                current_text, ail_key, block = self.get_vignette()
                self.view_resources['window'].ddx_exam.case_text_buffer.new_case(current_text)
                self.view_resources['window'].ddx_exam.case_text_scroller_vadjustment.set_value(0)
                self.view_resources['window'].ddx_exam.case_text_scroller.show_all()

                self.view_resources['new_case_observer'].alert(ail_key)

                self.view_resources['new_case_block_observer'].alert(ail_key, block)

                self.exam_resources['ddx_start'] = time.time()

            else:
                sim_message(self.view_resources['window'], info_string=self.string_resources["no_assessment"],
                            secondary_text=self.string_resources["finish_string"])
                self.view_resources['window'].return_home()

    def begin_exam(self, widget):
        # query exam model by one exam title to give AbSim machine commands.
        ep = examParser.ExamParser(flag='one', title=self.exam_resources['exam_title'])
        case_info = ep.get_exam_info(ep.flag, ep.title)
        try:
            self.exam_resources['case_list'], self.exam_resources['case_title_list'],\
                self.exam_resources['baseline_model'], self.exam_resources['baseline_flag'],\
                self.exam_resources['ddx_cases'] = ep.parse_exam_info(case_info)
            self.build_exam_view()
        except TypeError:
            sim_message(self.view_resources['window'], info_string=self.string_resources["select_button"],
                        secondary_text=self.string_resources["select_description"])

    def reset_page(self):
        return


class BaselineTest(Gtk.HBox):
    def __init__(self, exam_resources, view_resources, sr):
        super(BaselineTest, self).__init__(False, 2)

        self.exam_resources = exam_resources
        self.view_resources = view_resources
        self.string_resources = sr

        self.b_vbox = self.build_exam_interface()
        self.b_vbox.show_all()
        self.add(self.b_vbox)

        self.show()

    def save_exam(self, saved_exam_pressurepoints, et):
        from coverageassessment import CoverageAnalyzer
        # i18n - Time string left as-is
        timestr = time.strftime("%Y%m%d-%H%M%S")
        state_percents = CoverageAnalyzer().analyze(saved_exam_pressurepoints)
        self.exam_resources['baseline_model'].save_to_db(self.exam_resources['last'], self.exam_resources['first'],
                                                         self.exam_resources['exam_title'],
                                                         self.exam_resources['password'], state_percents['up'],
                                                         state_percents['slightly_down'], state_percents['down'],
                                                         state_percents['too_hard'], saved_exam_pressurepoints, et,
                                                         timestr, self.exam_resources['section'])

    def ok_selection(self, signal):
        et = time.time() - self.exam_resources['baseline_start']
        saved_exam_pressurepoints = self.view_resources['pressurepoints']
        saved_exam_pressurepoints = copy.deepcopy(saved_exam_pressurepoints)

        self.save_exam(saved_exam_pressurepoints, round(et))

        if len(self.exam_resources['case_list']) > 0:
            page1 = self.view_resources['notebook'].get_nth_page(0)
            page2 = self.view_resources['notebook'].get_nth_page(1)
            page3 = self.view_resources['notebook'].get_nth_page(3)
            page = self.view_resources['notebook'].get_nth_page(2)

            page1.hide()
            page2.hide()
            page3.hide()
            page.show()
            if 'notebook' in self.view_resources:
                self.view_resources['notebook'].set_current_page(2)

            self.view_resources['new_case_observer'].alert(self.exam_resources['case_list'][0])

            self.exam_resources['ab_start'] = time.time()

        elif self.exam_resources['ddx_cases'] and len(self.exam_resources['ddx_cases']) > 0:
            page1 = self.view_resources['notebook'].get_nth_page(0)
            page2 = self.view_resources['notebook'].get_nth_page(1)
            page3 = self.view_resources['notebook'].get_nth_page(2)
            page = self.view_resources['notebook'].get_nth_page(3)

            page1.hide()
            page2.hide()
            page3.hide()
            page.show()
            if 'notebook' in self.view_resources:
                self.view_resources['notebook'].set_current_page(3)

            # add case vignette to scroller
            current_text, ail_key, block = self.view_resources['window'].ddx_exam.get_vignette()
            self.view_resources['window'].ddx_exam.case_text_buffer.new_case(current_text)
            self.view_resources['window'].ddx_exam.case_text_scroller_vadjustment.set_value(0)
            self.view_resources['window'].ddx_exam.case_text_scroller.show_all()

            self.view_resources['new_case_observer'].alert(ail_key)

            self.view_resources['new_case_block_observer'].alert(ail_key, block)

            self.exam_resources['ddx_start'] = time.time()

        else:
            sim_message(self.view_resources['window'], info_string=self.string_resources["finish_title"],
                        secondary_text=self.string_resources["finish_string"])
            self.view_resources['window'].return_home()

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre = construct_markup(label_text, font_size=20)
        label.set_markup(label_pre)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def build_exam_interface(self):
        # have to make a real ui screen instead...
        self.base_label = Gtk.Label()  # font = 20, bold, fgcolor = #1E9D1C
        label_text = self.string_resources["baseline_text"]
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold')
        self.base_label.set_markup(label_pre_mark)

        button_table = Gtk.Table(rows=2, columns=2)
        button_table.set_border_width(10)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(self.string_resources["ok_button"])
        right_button.connect('clicked', self.ok_selection)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        baseline_vbox = Gtk.VBox()
        button_table.show()

        baseline_vbox.pack_start(self.base_label, True, True, 10)
        baseline_vbox.pack_start(button_table, False, False, 0)

        return baseline_vbox

    def reset_page(self):

        return


class CaseExam(Gtk.HBox):
    def __init__(self, exam_resources, view_resources, sr):
        super(CaseExam, self).__init__(False, 2)

        self.exam_resources = exam_resources
        self.view_resources = view_resources
        self.string_resources = sr

        # Build Interface
        cvs = self.build_interface()

        self.test_box = Gtk.VBox()

        self.button_tree = self.add_buttons()

        self.test_box.pack_start(cvs, True, True, 0)
        self.test_box.pack_start(self.button_tree, False, False, 0)
        self.test_box.show_all()

        self.test_box.show_all()
        self.add(self.test_box)
        self.show()

    def report_score(self, score, flag=''):
        if flag == 'first_time':
            self.exam_resources['ab_end'] = time.time() - self.exam_resources['ab_start']
        if len(self.exam_resources['ddx_cases']) > 0:
            page1 = self.view_resources['notebook'].get_nth_page(0)
            page2 = self.view_resources['notebook'].get_nth_page(1)
            page3 = self.view_resources['notebook'].get_nth_page(2)
            page = self.view_resources['notebook'].get_nth_page(3)

            page1.hide()
            page2.hide()
            page3.hide()
            page.show()
            if 'notebook' in self.view_resources:
                self.view_resources['notebook'].set_current_page(3)

            # add case vignette to scroller
            current_text, ail_key, block = self.view_resources['window'].ddx_exam.get_vignette()
            self.view_resources['window'].ddx_exam.case_text_buffer.new_case(current_text)
            self.view_resources['window'].ddx_exam.case_text_scroller_vadjustment.set_value(0)
            self.view_resources['window'].ddx_exam.case_text_scroller.show_all()

            self.view_resources['new_case_observer'].alert(ail_key)

            self.view_resources['new_case_block_observer'].alert(ail_key, block)

            self.exam_resources['ddx_start'] = time.time()

            return

        else:
            exam_data = takenmodel.TakenModel()
            if len(self.exam_resources['ab_answer_list']) > 0 and len(self.exam_resources['ddx_answer_list']) > 0:
                self.exam_resources['ddx_end'] = time.time() - self.exam_resources['ddx_start']
                # self.exam_resources['ab_num'] = self.exam_resources['ab_num'] + self.exam_resources['ddx_num']
                # self.exam_resources['ab_den'] = self.exam_resources['ab_den'] + self.exam_resources['ddx_den']
                ab_score = self.exam_resources['ab_num'] / self.exam_resources['ab_den']
                ddx_score = self.exam_resources['ddx_num'] / self.exam_resources['ddx_den']

            elif len(self.exam_resources['ab_answer_list']) > 0 and len(self.exam_resources['ddx_answer_list']) == 0:
                ab_score = score
                ddx_score = 'null'

            elif len(self.exam_resources['ddx_answer_list']) > 0 and len(self.exam_resources['ab_answer_list']) == 0:
                self.exam_resources['ddx_end'] = time.time() - self.exam_resources['ddx_start']
                ddx_score = score
                ab_score = 'null'
                # self.exam_resources['ab_num'] = self.exam_resources['ddx_num']
                # self.exam_resources['ab_den'] = self.exam_resources['ddx_den']

            # alert score
            ind_list = [self.exam_resources['ab_answer_list'].index(elem) for elem in self.exam_resources['untouched']]
            ans_ind_list = [self.exam_resources['ab_answer_list'][i] for i in ind_list]
            stu_ind_list = [self.exam_resources['student_answer_list'][i] for i in ind_list]
            ab_correct_chosen = ['correct: ' + x + '-' + 'chosen: ' + y for x, y in zip(ans_ind_list, stu_ind_list)]

            ddx_ind_list = [self.exam_resources['ddx_answer_list'].index(elem) for elem in self.exam_resources['untouched_ddx']]
            ans_ddx_ind_list = [self.exam_resources['ddx_answer_list'][i] for i in ddx_ind_list]
            stu_ddx_ind_list = [self.exam_resources['student_ddx_list'][i] for i in ddx_ind_list]
            ddx_correct_chosen = ['correct: ' + x + '-' + 'chosen: ' + y for x, y in zip(ans_ddx_ind_list, stu_ddx_ind_list)]

            # correct_chosen.extend(ddx_correct_chosen)

            sim_message(self.view_resources['window'], info_string=self.string_resources["finish_title"],
                        secondary_text=self.string_resources["finish_string"])
            timestr = time.strftime("%Y%m%d-%H%M%S")

            ab_correct_chosen_string = '+'.join(ab_correct_chosen)
            ddx_correct_chosen_string = '+'.join(ddx_correct_chosen)

            # save score data to db
            exam_data.save_to_db(self.exam_resources['password'], self.exam_resources['exam_title'], ab_score,
                                 ddx_score, ab_correct_chosen_string, ddx_correct_chosen_string,
                                 round(self.exam_resources['ab_end']), round(self.exam_resources['ddx_end']), timestr,
                                 self.exam_resources['section'])

            self.view_resources['window'].return_home()

    def make_selection(self, choice):
        # in here, we should be able to facilitate transition to other exam
        if hasattr(self.cs, "current_case"):
            if len(self.exam_resources['case_list']) > 0:
                self.exam_resources['ab_answer_list'].append(self.exam_resources['case_list'][0])
                # add student answers to their own list
                self.exam_resources['student_answer_list'].append(self.cs.current_case)
                if distance(self.cs.current_case, self.exam_resources['case_list'][0]) < 1:
                    self.exam_resources['ab_num'] += 1

                elif distance(self.cs.current_case, self.exam_resources['case_list'][0]) < 4:
                    self.exam_resources['ab_num'] += .5

                else:
                    self.exam_resources['ab_num'] += 0

                # remove used case
                self.exam_resources['case_list'].pop(0)

                # pass new case if we have one
                try:
                    self.view_resources['new_case_observer'].alert(self.exam_resources['case_list'][0])
                except IndexError:
                    score = self.exam_resources['ab_num'] / self.exam_resources['ab_den']
                    self.report_score(score, flag='first_time')
                    pass

            else:
                sim_message(self.view_resources['window'], info_string=self.string_resources["finish_title"],
                            secondary_text=self.string_resources["finish_string"])
                self.view_resources['window'].return_home()
                # logging.debug('exam finished')
                # sim_message(self, info_string=_(u'Exam Load Failure'),
                # secondary_text=_(u'AbSim received empty exam list.'))
        else:
            sim_message(self.view_resources['window'], info_string=self.string_resources["no_selection"],
                        secondary_text=self.string_resources["no_string"])

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre = construct_markup(label_text, font_size=20)
        label.set_markup(label_pre)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def add_buttons(self):

        button_table = Gtk.Table(rows=2, columns=2)
        button_table.set_border_width(10)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(self.string_resources["make_selection_button"])
        right_button.connect('clicked', self.make_selection)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_interface(self):
        from caseselector import CaseSelector

        self.cs = CaseSelector(self.view_resources['new_case_observer'], flag='test')
        case_view_tree = self.cs.build_ddx_tree()

        case_view_scroller = Gtk.ScrolledWindow()
        case_view_scroller.add(case_view_tree)
        case_view_scroller.set_policy(Gtk.POLICY_NEVER, Gtk.POLICY_AUTOMATIC)

        # get measurements for screen size request
        s_w = Gdk.screen_width()
        s_h = Gdk.screen_height()
        width, height = screen_sizer(s_w, s_h, old_width=800, old_height=400)
        case_view_scroller.set_size_request(width, height)

        return case_view_scroller

    def reset_page(self):
        return


class DdxExam(Gtk.HBox):
    def __init__(self, exam_resources, view_resources, sr):
        super(DdxExam, self).__init__(False, 2)

        self.exam_resources = exam_resources
        self.view_resources = view_resources
        self.string_resources = sr

        self.build_ddx_interface()

        self.test_box = Gtk.VBox()

        self.button_tree = self.add_buttons()

        self.hbox = Gtk.HBox()
        self.hbox.pack_start(self.case_text_scroller, False, False, 10)
        self.hbox.pack_start(self.ddx_view_scroller, True, True, 0)

        self.test_box.pack_start(self.hbox, False, False, 0)
        self.test_box.pack_start(self.button_tree, False, False, 0)

        self.test_box.show_all()

        self.add(self.test_box)

    def get_vignette(self):
        # find ddx_list label_info
        ddx_list = self.exam_resources['text_dict'].cases.get(525, [])
        indices = [i for i, x in enumerate(ddx_list)]

        relevant = [ddx_list[j] for j in indices if ddx_list[j][0]['ddx_name'] == self.exam_resources['ddx_cases'][0]]

        rand_index = random.randint(0, len(relevant[0]) - 1)
        random_rel = relevant[0][rand_index]

        label_text = random_rel['vignette']
        ailment_key = random_rel['ailment']

        return label_text, ailment_key, random_rel

    def make_selection(self, choice):
        # in here, we should be able to facilitate transition to other exam
        if hasattr(self, "current_case"):
            if len(self.exam_resources['ddx_cases']) > 0:

                self.exam_resources['ddx_answer_list'].append(self.exam_resources['ddx_cases'][0])
                # add student answers to their own list
                self.exam_resources['student_ddx_list'].append(self.current_case)

                if distance(self.current_case, self.exam_resources['ddx_cases'][0].split('ddx_')[0]) < 1:
                    self.exam_resources['ddx_num'] += 1

                else:
                    self.exam_resources['ddx_num'] += 0

                self.exam_resources['ddx_cases'].pop(0)

                try:
                    # add case vignette to scroller
                    current_text, ail_key, block = self.get_vignette()
                    self.case_text_buffer.new_case(current_text)
                    self.case_text_scroller_vadjustment.set_value(0)
                    self.case_text_scroller.show_all()

                    self.view_resources['new_case_observer'].alert(ail_key)

                    self.view_resources['new_case_block_observer'].alert(ail_key, block)
                except IndexError:
                    score = self.exam_resources['ddx_num'] / self.exam_resources['ddx_den']
                    self.view_resources['window'].case_exam.report_score(score)

            else:
                sim_message(self.view_resources['window'], info_string=self.string_resources["finish_title"],
                            secondary_text=self.string_resources["finish_string"])
                self.view_resources['window'].return_home()
                # logging.debug('exam finished')
                # sim_message(self, info_string=_(u'Exam Load Failure'),
                # secondary_text=_(u'AbSim received empty exam list.'))
        else:
            sim_message(self.view_resources['window'], info_string=self.string_resources["no_selection"],
                        secondary_text=self.string_resources["no_string"])

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre = construct_markup(label_text, font_size=20)
        label.set_markup(label_pre)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def add_buttons(self):

        button_table = Gtk.Table(rows=2, columns=2)
        button_table.set_border_width(10)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(self.string_resources["make_selection_button"])
        right_button.connect('clicked', self.make_selection)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_case_text_view(self):
        self.case_text_buffer = casetext.CaseTextBuffer()

        # Case text is not editable and wraps between words
        self.case_text_view = Gtk.TextView(buffer=self.case_text_buffer)
        self.case_text_view.set_editable(False)
        self.case_text_view.set_wrap_mode(Gtk.WRAP_WORD)

        # get adjusted width
        screen_width = Gtk.gdk.screen_width()
        screen_height = Gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=500)

        self.case_text_scroller = Gtk.ScrolledWindow()
        self.case_text_scroller.set_property('hscrollbar-policy', Gtk.POLICY_AUTOMATIC)
        self.case_text_scroller.set_property('vscrollbar-policy', Gtk.POLICY_AUTOMATIC)
        self.case_text_scroller.set_size_request(width, height)
        self.case_text_scroller.set_property('border-width', 1)
        self.case_text_scroller.add(self.case_text_view)
        self.case_text_scroller_vadjustment = self.case_text_scroller.get_vadjustment()

    def build_ddx_interface(self):
        self.ddx_view_tree = self.build_ddx_selector()

        self.ddx_view_scroller = Gtk.ScrolledWindow()
        self.ddx_view_scroller.add(self.ddx_view_tree)
        self.ddx_view_scroller.set_policy(Gtk.POLICY_NEVER, Gtk.POLICY_AUTOMATIC)

        # get measurements for screen size request
        s_w = Gdk.screen_width()
        s_h = Gdk.screen_height()
        width, height = screen_sizer(s_w, s_h, old_width=800, old_height=400)
        self.ddx_view_scroller.set_size_request(width, height)

        self.build_case_text_view()

    def build_ddx_selector(self):
        from casetext import CaseText
        # Columns available to rows:
        #   str: name visible in widget
        #   str: text sent in signal
        self.ddx_tree_store = Gtk.TreeStore(str, str)

        store = self.ddx_tree_store
        # Top level

        ddx_names = CaseText().cases.get(525, [])
        ddx_list = []
        for j in ddx_names:
            temp = [i["ddx_name"] for i in j]
            ddx_list.append(temp[0])

        store.append(None, [ddx_list[0], 'Upper Gastrointestinal Etiology'])
        store.append(None, [ddx_list[1], 'Choledocolithiasis'])
        store.append(None, [ddx_list[2], 'Pancreatitis'])
        store.append(None, [ddx_list[3], 'Cholecystitis'])
        store.append(None, [ddx_list[4], 'Mesenteric Infarction'])
        store.append(None, [ddx_list[5], 'Small Bowel Obstruction'])
        store.append(None, [ddx_list[6], 'Appendicitis'])
        store.append(None, [ddx_list[7], 'Diverticulitis'])
        store.append(None, [ddx_list[8], 'Acute Enteritis'])

        self.ddx_tree_view = Gtk.TreeView(self.ddx_tree_store)
        tv = self.ddx_tree_view  # alias

        # Set up font for display
        s_size = Gdk.screen_width() * Gdk.screen_height()
        if s_size < 1327104:
            font_s = font_size(s_size, f_size=14)
        else:
            font_s = 14
        font = Pango.FontDescription('normal ' + str(font_s))
        self.cell = Gtk.CellRendererText()
        self.cell.set_property('font-desc', font)

        tvcolumn = Gtk.TreeViewColumn(self.string_resources["column_header_2"], self.cell)
        tv.append_column(tvcolumn)
        tvcolumn.add_attribute(self.cell, 'text', 0)
        tv.expand_all()
        tv.connect('cursor-changed', self.on_ddx_tree_selected)
        return tv

    def on_ddx_tree_selected(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()

        self.current_case = model.get(iter, 1)[0]

    def reset_page(self):

        return
