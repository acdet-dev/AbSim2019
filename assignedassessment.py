import random
import time
import ailments
import pressurepoints
import guarding
import statewatcher
import casetext
import copy
import observer
import port_settings
from messages import sim_message
import simLabels
import sounds
import donottouch
import takenmodel
import logging
from i18ntrans2 import _
from Levenshtein import distance
from simLabels import construct_markup, font_size, screen_sizer

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, GLib, GObject, Gdk, Pango


class AssignedAssessment(Gtk.Window):

    # take case_list as input for object call
    def __init__(self, case_list, user_name, user_id, exam_title):

        # Build all objects that communicate
        if len(case_list) > 1:
            self.case_list = case_list[0].split('+')
            self.title_list = case_list[1].split('+')

        else:
            self.case_list = case_list[0]
            self.title_list = case_list[1]

        self.user_name = user_name
        self.user_id = user_id
        self.exam_title = exam_title
        self.answer_list = []
        self.ddx_answer_list = []

        if 'Baseline' in self.title_list:
            self.case_list.pop(0)
            self.title_list.pop(0)
            import baselinemodel
            self.baselinemodel = baselinemodel.BaselineModel()
            self.baselineFlag = True

        else:
            self.baselineFlag = False

        # find ddx items
        ddx_indices = [i for i, x in enumerate(self.title_list) if 'ddx_' in x]
        try:
            self.ddx_cases = [self.case_list[j] for j in ddx_indices]
            random.shuffle(self.ddx_cases, random.random)
            for k in self.ddx_cases:
                self.case_list.remove(k)
        except IndexError:
            logging.debug('no ddx exams given')

        if self.ddx_cases and len(self.ddx_cases) > 0:
            self.ddx_flag = True
            self.ddx_num = 0
            self.ddx_score = 0
            self.ddx_den = len(self.ddx_cases)
            self.text_dict = casetext.CaseText()

        else:
            self.ddx_flag = False

        if len(self.case_list) > 0:
            self.ab_flag = True
            random.shuffle(self.case_list, random.random)
            self.den = len(self.case_list)
            self.num = 0
            self.score = 0

        else:
            self.ab_flag = False

        self.new_selected_case = observer.Observer()
        self.ailments = ailments.Ailments()
        self.pressurepoints = pressurepoints.PressureList(self.new_selected_case)
        self.guarding = guarding.Guarding()
        self.state_watcher = statewatcher.StateWatcher(self.ailments, self.pressurepoints)
        self.touch_alerter = donottouch.TouchAlerter(self.state_watcher, self.pressurepoints)
        self.current_case = 'none n'
        self.port_settings = port_settings.PortSettings(self, self.state_watcher, self.touch_alerter, assess=True)

        self.new_case_block = observer.Observer()
        self.sounds = sounds.Sounds(self.state_watcher, self.pressurepoints, self.ailments, self.touch_alerter)

        self.view_resources = {
            'ailments': self.ailments,
            'pressurepoints': self.pressurepoints,
            'guarding': self.guarding,
            'state_watcher': self.state_watcher,
            'new_case_observer': self.new_selected_case,
            'new_case_block_observer': self.new_case_block,
        }

        # make window
        Gtk.Window.__init__(self)
        self.set_title(_(u"AbSim Test Taker"))
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # Disconnection Error message
        self.disconnection_warning = simLabels.DisconnectWarning()

        self.new_case_observer = self.view_resources['new_case_observer']

        # Build Interface
        self.build_interface()
        if self.ddx_flag:
            self.build_ddx_interface()

        if self.baselineFlag:
            self.base_box = self.build_exam_interface()
        # make boxes and packing statements
        self.test_box = Gtk.VBox()

        self.button_tree = self.add_buttons()
        self.test_box.pack_start(self.disconnection_warning, False, False, 0)

        if self.baselineFlag and self.ddx_flag:
            self.hbox = Gtk.HBox()
            self.hbox.pack_start(self.case_text_scroller, False, False, 10)
            self.hbox.pack_start(self.ddx_view_scroller, True, True, 0)
            self.test_box.pack_start(self.case_view_scroller, True, True, 0)
            self.test_box.pack_start(self.hbox, False, False, 0)
            self.test_box.pack_start(self.base_box, False, False, 0)
            self.test_box.pack_start(self.button_tree, False, False, 0)
        elif self.baselineFlag:
            self.test_box.pack_start(self.case_view_scroller, True, True, 0)
            self.test_box.pack_start(self.base_box, False, False, 0)
            self.test_box.pack_start(self.button_tree, False, False, 0)
        elif self.ddx_flag:
            self.hbox = Gtk.HBox()
            self.hbox.pack_start(self.case_text_scroller, False, False, 10)
            self.hbox.pack_start(self.ddx_view_scroller, True, True, 0)
            self.test_box.pack_start(self.case_view_scroller, True, True, 0)
            self.test_box.pack_start(self.hbox, False, False, 0)
            self.test_box.pack_start(self.button_tree, False, False, 0)
        else:
            self.test_box.pack_start(self.case_view_scroller, True, True, 0)
            self.test_box.pack_start(self.button_tree, False, False, 0)

        self.test_box.show_all()

        if self.ddx_flag:
            self.case_text_scroller.hide()
            self.ddx_view_scroller.hide()

        if self.baselineFlag:
            self.base_box.hide()

        self.add(self.test_box)
        self.show()

        #destroy signal for window
        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        #connect signals
        self.do_not_touch = donottouch.DoNotTouchWarning(self.state_watcher)
        self.attach_new_case_observer(self.do_not_touch.restart)
        self.attach_new_case_observer(self.guarding.new_case_selected)
        self.attach_new_case_observer(self.touch_alerter.enable_protection)
        self.attach_new_case_observer(self.sounds.new_generic_case)
        self.new_case_block.connect(self.sounds.new_generic_case)

        self.state_watcher.connect('sensor_pad_disconnected', self.show_disconnection_warning)
        self.state_watcher.connect('sensor_pad_connected', self.hide_disconnection_warning)

        #Always do this one last
        # This means the case will be readable on the main window
        # but people will still know not to strip the belts.
        if hasattr(self.port_settings, 'cnc_port'):
            logging.debug('cnc has port')
            self.hide_disconnection_warning(signal_source='hi')

        else:
            logging.debug('cnc port not found')
            self.show_disconnection_warning(self.state_watcher)

        self.attach_new_case_observer(self.port_settings.new_case_selected)

        if self.baselineFlag:
            self.baselineFlag = False
            self.case_view_scroller.hide()
            self.button_tree.hide()
            self.base_box.show()
            self.new_selected_case.alert('none n')

        else:
            if len(self.case_list) > 0:
                self.ab_flag = False
                self.new_selected_case.alert(self.case_list[0])

            elif self.ddx_cases and len(self.ddx_cases) > 0:
                # transition to new window
                self.ddx_flag = False
                self.case_view_scroller.hide()
                self.ddx_view_scroller.show()

                # add case vignette to scroller
                current_text, ail_key = self.get_vignette()
                self.case_text_buffer.new_case(current_text)
                self.case_text_scroller_vadjustment.set_value(0)
                self.case_text_scroller.show_all()

                self.new_selected_case.alert(ail_key)

            else:
                sim_message(self, info_string=_(u'Exam Not Found.'),
                            secondary_text=_(u'You may take another exam if you have '
                                             u'more to take.'))
                self.return_home()

    def attach_new_case_observer(self, callback):
        if self.state_watcher.sensor_pad_is_connected == True:
            self.new_selected_case.connect(callback)
        else:
            logging.debug('not true')
        
    def show_do_not_touch_modal(self, widget):
        #Gtk.threads_enter()
        #GObject.idle_add(self.do_not_touch.restart)
        GLib.idle_add(self.do_not_touch.restart)
        #Gtk.threads_leave()

    def show_disconnection_warning(self, signal_source):
        GLib.idle_add(self.disconnection_warning.show_all)

    def hide_disconnection_warning(self, signal_source):
        GLib.idle_add(self.disconnection_warning.hide)        

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

        right_button = self.build_button(_(u"Make Selection"))
        right_button.connect('clicked', self.make_selection)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def return_home(self):
        import viewAssignments, dbmigrator, splashscreen

        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        # Perform DB migration to make sure we have the newest version
        dbmigrator.DBMigrator()

        try:
            self.sounds.stop_sound_player()
            self.port_settings.stop_devices()
            logging.debug('stopping devices')

        except:
            logging.debug('no ports to close')

        viewAssignments.ViewAssignments(self.user_name, self.user_id)
        splash_screen.hide()
        self.destroy()
        Gtk.main()

    def save_exam(self, saved_exam_pressurepoints):
        from coverageassessment import CoverageAnalyzer
        # i18n - Time string left as-is
        timestr = time.strftime("%Y%m%d-%H%M%S")
        state_percents = CoverageAnalyzer().analyze(saved_exam_pressurepoints)
        self.baselinemodel.save_to_db(self.exam_title, self.user_id, state_percents['up'],
                                      state_percents['slightly_down'], state_percents['down'],
                                      state_percents['too_hard'], saved_exam_pressurepoints, timestr)

    def ok_selection(self, signal):
        saved_exam_pressurepoints = self.view_resources['pressurepoints']
        saved_exam_pressurepoints = copy.deepcopy(saved_exam_pressurepoints)

        self.save_exam(saved_exam_pressurepoints)
        if len(self.case_list) > 0:
            self.ab_flag = False
            self.base_box.hide()
            self.case_view_scroller.show()
            self.button_tree.show()

            self.new_case_observer.alert(self.case_list[0])
        elif self.ddx_cases and len(self.ddx_cases) > 0:
            self.ddx_flag = False
            self.base_box.hide()
            #self.case_view_scroller.hide()
            self.ddx_view_scroller.show()
            self.button_tree.show()

            # add case vignette to scroller
            current_text, ail_key = self.get_vignette()
            self.case_text_buffer.new_case(current_text)
            self.case_text_scroller_vadjustment.set_value(0)
            self.case_text_scroller.show_all()

            self.new_case_observer.alert(ail_key)

        else:
            sim_message(self, info_string=_(u'Exam Finished.'),
                        secondary_text=_(u'You may take another exam if you have '
                                         u'more to take.'))
            self.return_home()

    def build_exam_interface(self):
        # have to make a real ui screen instead...
        self.base_label = Gtk.Label()  # font = 20, bold, fgcolor = #1E9D1C
        label_text = _(u"Perform a baseline exam and click 'OK' when finished.")
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold')
        self.base_label.set_markup(label_pre_mark)

        button_table = Gtk.Table(rows=2, columns=2)
        button_table.set_border_width(10)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(_(u"Ok"))
        right_button.connect('clicked', self.ok_selection)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        baseline_vbox = Gtk.VBox()

        baseline_vbox.pack_start(self.base_label, True, True, 10)
        baseline_vbox.pack_start(button_table, False, False, 0)

        return baseline_vbox

    def report_score(self, score):

        if not self.ab_flag and self.ddx_flag:
            self.ddx_flag = False
            self.case_view_scroller.hide()
            self.ddx_view_scroller.show()

            # add case vignette to scroller
            current_text, ail_key = self.get_vignette()
            self.case_text_buffer.new_case(current_text)
            self.case_text_scroller_vadjustment.set_value(0)
            self.case_text_scroller.show_all()

            self.new_case_observer.alert(ail_key)

            return

        else:
            exam_data = takenmodel.TakenModel()
            if len(self.answer_list) > 0 and len(self.ddx_answer_list) > 0:
                self.num = self.num + self.ddx_num
                self.den = self.den + self.ddx_den
                score = self.num/self.den

            elif len(self.answer_list) > 0 and len(self.ddx_answer_list) == 0:
                score = score

            elif len(self.ddx_answer_list) > 0 and len(self.answer_list) == 0:
                score = score
                self.num = self.ddx_num
                self.den = self.ddx_den

            # alert score
            sim_message(self, info_string=_(u'Exam Completed.'),
                        secondary_text=_(u'You may take another exam if you have more to take.'))
            timestr = time.strftime("%Y%m%d-%H%M%S")

            # save score data to db
            exam_data.save_to_db(self.user_id, self.exam_title, score, self.num, self.den, timestr)

            self.return_home()

    def make_selection(self, choice):
        ## in here, we should be able to facilitate transition to other exam
        if len(self.case_list) > 0:

            if distance(self.current_case, self.case_list[0]) < 1:
                self.answer_list.append(self.case_list[0])
                self.case_list.pop(0)
                self.num += 1
                try:
                    self.new_case_observer.alert(self.case_list[0])
                except IndexError:
                    # if len(self.ddx_cases) > 0:
                    score = self.num/self.den
                    self.report_score(score)
                    pass
            elif distance(self.current_case, self.case_list[0]) < 4:
                self.answer_list.append(self.case_list[0])
                self.case_list.pop(0)
                self.num += .5

                try:
                    self.new_case_observer.alert(self.case_list[0])
                except IndexError:

                    score = self.num/self.den
                    self.report_score(score)
                    pass
            else:
                self.answer_list.append(self.case_list[0])
                self.case_list.pop(0)
                try:
                    self.new_case_observer.alert(self.case_list[0])
                except IndexError:
                    score = self.num/self.den
                    self.report_score(score)
                    pass
        else:
            if len(self.ddx_cases) > 0:
                if distance(self.current_case, self.ddx_cases[0].split('ddx_')[0]) < 1:
                    self.ddx_answer_list.append(self.ddx_cases[0])
                    self.ddx_cases.pop(0)
                    self.ddx_num += 1
                    try:
                        # add case vignette to scroller
                        current_text, ail_key = self.get_vignette()
                        self.case_text_buffer.new_case(current_text)
                        self.case_text_scroller_vadjustment.set_value(0)
                        self.case_text_scroller.show_all()

                        self.new_case_observer.alert(ail_key)
                    except IndexError:
                        score = self.ddx_num/self.ddx_den
                        self.report_score(score)

                else:
                    self.ddx_answer_list.append(self.ddx_cases[0])
                    self.ddx_cases.pop(0)
                    try:
                        # add case vignette to scroller
                        current_text, ail_key = self.get_vignette()
                        self.case_text_buffer.new_case(current_text)
                        self.case_text_scroller_vadjustment.set_value(0)
                        self.case_text_scroller.show_all()

                        self.new_case_observer.alert(ail_key)
                    except IndexError:
                        score = self.ddx_num/self.ddx_den
                        self.report_score(score)
            else:
                sim_message(self, info_string=_(u'Exam Finished.'),
                            secondary_text=_(u'You may take another exam if you have '
                                             u'more to take.'))
                self.return_home()
            #logging.debug('exam finished')
            #sim_message(self, info_string=_(u'Exam Load Failure'), secondary_text=_(u'AbSim received empty exam list.'))

    def reset_page(self):
        iter_root = self.case_selector_tree.get_model().get_iter_first()
        tree_selection = self.case_selector_tree.get_selection()
        tree_selection.unselect_all()
        tree_selection.select_iter(iter_root)
        self.view_resources['new_case_observer'].alert('none n')

    def get_vignette(self):
        # find ddx_list label_info
        ddx_list = self.text_dict.cases.get(525, [])
        indices = [i for i, x in enumerate(ddx_list)]

        relevant = [ddx_list[j] for j in indices if ddx_list[j][0]['ddx_name'] == self.ddx_cases[0]]

        rand_index = random.randint(0, len(relevant[0]) - 1)
        self.random_rel = relevant[0][rand_index]

        label_text = self.random_rel['vignette']
        ailment_key = self.random_rel['ailment']

        return label_text, ailment_key

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

        #get measurements for screen size request
        s_w = Gdk.screen_width()
        s_h = Gdk.screen_height()
        width, height = screen_sizer(s_w, s_h, old_width=800, old_height=400)
        self.ddx_view_scroller.set_size_request(width, height)

        self.build_case_text_view()

    def build_interface(self):
        self.case_view_tree = self.build_case_selector()

        self.case_view_scroller = Gtk.ScrolledWindow()
        self.case_view_scroller.add(self.case_view_tree)
        self.case_view_scroller.set_policy(Gtk.POLICY_NEVER, Gtk.POLICY_AUTOMATIC)

        # get measurements for screen size request
        s_w = Gdk.screen_width()
        s_h = Gdk.screen_height()
        width, height = screen_sizer(s_w, s_h, old_width=800, old_height=400)
        self.case_view_scroller.set_size_request(width, height)

    def build_ddx_selector(self):
        # Columns available to rows:
        #   str: name visible in widget
        #   str: text sent in signal
        self.ddx_tree_store = Gtk.TreeStore(str, str)

        store = self.ddx_tree_store
        # Top level

        store.append(None, [_(u"Upper Gastrointestinal Etiology"), 'Upper Gastrointestinal Etiology'])
        store.append(None, [_(u"Pancreatitis"), 'Pancreatitis'])
        store.append(None, [_(u"Cholecystitis"), 'Cholecystitis'])
        store.append(None, [_(u"Mesenteric Infarction"), 'Mesenteric Infarction'])
        store.append(None, [_(u"Small Bowel Obstruction"), 'Small Bowel Obstruction'])
        store.append(None, [_(u"Appendicitis"), 'Appendicitis'])
        store.append(None, [_(u"Diverticulitis"), 'Diverticulitis'])
        store.append(None, [_(u"Acute Enteritis"), 'Acute Enteritis'])

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

        tvcolumn = Gtk.TreeViewColumn(_(u"Ailment"), self.cell)
        tv.append_column(tvcolumn)
        tvcolumn.add_attribute(self.cell, 'text', 0)
        tv.expand_all()
        tv.connect('cursor-changed', self.on_ddx_tree_selected)
        return tv

    def on_ddx_tree_selected(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()

        self.current_case = model.get(iter, 1)[0]

    def build_case_selector(self):
        # Columns available to rows:
        #   str: name visible in widget
        #   str: text sent in signal
        self.ddx_tree_store = Gtk.TreeStore(str, str)
        
        store = self.ddx_tree_store
        # Top level
        store.append(None, [_(u"No Abnormalities"), 'none n'])
        store.append(None, [u"", 'none n'])
        
        store.append(None, [_(u"Appendix Tenderness"), 'appendix t'])
        store.append(None, ["\t" + _(u"With Guarding"), 'appendix g'])
        store.append(None, ["\t" + _(u"With Rebound Tenderness"), 'appendix r'])
        store.append(None, ["\t" + _(u"With Guarding and Rebound Tenderness"), 'appendix gr'])
        # store.append(appendix, [_(u"With Guarding and Pushback"), 'appendix gp'])
        
        store.append(None, [_(u"Colon, Left Lower Tenderness"), 'colon t'])
        store.append(None, ["\t" + _(u"With Guarding"), 'colon g'])
        # store.append(colon, [_(u"With Guarding and Pushback"), 'colon gp'])
        
        store.append(None, [_(u"Gallbladder Tenderness"), 'gallbladder t'])
        store.append(None, ["\t" + _(u"With Guarding"), 'gallbladder g'])
        # store.append(gallbladder, [_(u"With Guarding and Pushback"), 'gallbladder gp'])
        
        store.append(None, [_(u"Gastric Tenderness"), 'ugi t'])
        # store.append(ugi, [_(u"With Pushback"), 'ugi p'])
        
        store.append(None, [_(u"Ovary, Left Tenderness"), 'ovary_left t'])
        store.append(None, ["\t" + _(u"With Guarding"), 'ovary_left g'])
        # store.append(ovary_left, [_(u"With Guarding and Pushback"), 'ovary_left gp'])
        
        store.append(None, [_(u"Ovary, Right Tenderness"), 'ovary_right t'])
        store.append(None, ["\t" + _(u"With Guarding"), 'ovary_right g'])
        # store.append(ovary_right, [_(u"With Guarding and Pushback"), 'ovary_right gp'])
        
        store.append(None, [_(u"Pancreas Tenderness"), 'pancreas t'])
        # pancreas_gp = store.append(pancreas, [_(u"With Pushback"), 'pancreas gp'])
        
        store.append(None, [_(u"Urinary Bladder Tenderness"), 'bladder t'])
        # store.append(bladder, [_(u"With Pushback"), 'bladder p'])
        
        store.append(None, [u"", 'none n'])
        
        store.append(None, [_(u"Hepatomegaly"), 'hepatomegaly n'])
        store.append(None, [_(u"Splenomegaly"), 'splenomegaly n'])
        store.append(None, [_(u"Enlarged Urinary Bladder"), 'enlarged_bladder n'])
        
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
        
        tvcolumn = Gtk.TreeViewColumn(_(u"Ailment"), self.cell)
        tv.append_column(tvcolumn)
        tvcolumn.add_attribute(self.cell, 'text', 0)
        tv.expand_all()
        tv.connect('cursor-changed', self.on_tree_selected)
        return tv
    

    def on_tree_selected(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()

        self.current_case = model.get(iter, 1)[0]