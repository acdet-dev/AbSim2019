import logging
import ailments
import pressurepoints
import guarding
import statewatcher
import observer
import port_settings
import config
import depthtrainer
import coveragetrainer
import abnormalitydetection
import ddxpractice
import coverageassessment
import splashscreen
import dbmigrator
import sounds
import selfpractice
import donottouch
import simLabels
import i18ntrans2
import os

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSimBeta'


class MenuBar():

    def read_menu_xml(self):
        menu_xml = app_data_path + '\\outMenu.xml'
        f1 = open(menu_xml, 'r')
        menu_xml_string = f1.read()
        f1.close()
        return menu_xml_string

    def read_menu_xml_list(self, options):
        logging.debug('Attempting to write all locale options to menu bar xml.')
        menu_xml = 'abMenu.xml'
        out_menu_xml = app_data_path + '\\outMenu.xml'
        try:
            f1 = open(menu_xml, 'r')
            menu_xml_list = f1.readlines()
        except FileNotFoundError:
            logging.debug('No menu xml file found.')

        ##add menu options to new menu bar xml file
        opt_len = len(options)

        i = 0
        choice_list = []
        num_list = ['one', 'two', 'three', 'four', 'five', 'six', 'seven']

        while i < opt_len - 1:
            try:
                menu_xml_list.insert(i + 8, "      <menuitem action=" + "'" + num_list[i] + "'" + "/>\n\t")
                choice_list.append(num_list[i])
                i = i + 1
            except IndexError:
                logging.debug('An error occurred when adding locale menu options.')
                pass

        f2 = open(out_menu_xml, 'w+')
        for line in menu_xml_list:
            f2.write(line)

        f1.close()
        f2.close()

        return choice_list

    def _popup_message(self, msg):
        md = Gtk.MessageDialog(self, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.OK, msg)
        md.run()
        md.destroy()

    def build_bar(self):
        action_group = Gtk.ActionGroup("my_actions")
        self.add_ab_menu_actions(action_group)
        self.add_choices_menu_actions(action_group)
        uimanager = self.create_ui_manager()
        uimanager.insert_action_group(action_group)
        menubar = uimanager.get_widget("/MenuBar")
        box = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
        box.pack_start(menubar, False, False, 0)
        return box

    def add_ab_menu_actions(self, action_group):
        action_group.add_actions([
            ("AbMenu", None, _(u"AbSim")),
            ("AbQuit", Gtk.STOCK_QUIT, None, None, None, self.on_menu_ab_quit),
            ("abHome", None, _(u"Home"), None, None, self.on_home_click)
        ])

    def add_choices_menu_actions(self, action_group):
        action_group.add_action(Gtk.Action("ChoicesMenu", _(u"Locales"), None,
                                           None))

        ##Log i18n status
        logging.debug('Attempting to get i18n locale options.')

        self.locale_options = i18ntrans2.get_locale_options()

        # initiate locale_read for next iteration
        locale_config = config.Config("locale.json")
        locale_config.read_config()
        locale_override = locale_config.get_default('override')

        options = []
        try:
            for label, target in self.locale_options:
                options.append(label)
        except IndexError:
            logging.debug('No locale options found.')
            pass

        self.choice_list = self.read_menu_xml_list(options)

        choices = len(self.choice_list)

        i = 0
        self.lang_dict = dict()
        while i < choices:
            try:
                self.lang_dict[self.choice_list[i]] = options[i]
                action_group.add_actions([
                    (self.choice_list[i], None, options[i], None, None, self.on_menu_choices_changed)
                ])

                i = i + 1
            except IndexError:
                logging.debug('Could not add locale menu options to menu bar')
                pass

    def create_ui_manager(self):
        uimanager = Gtk.UIManager()

        UI_INFO = self.read_menu_xml()

        uimanager.add_ui_from_string(UI_INFO)

        # Add the accelerator group to the toplevel window
        accelgroup = uimanager.get_accel_group()
        self.add_accel_group(accelgroup)
        return uimanager

    def on_menu_ab_quit(self, widget):
        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        try:
            self.sounds.stop_sound_player()
            self.port_settings.stop_devices()
        except AttributeError:
            logging.debug('attributes necessary for stopping devices not made yet')

        splash_screen.hide()
        Gtk.main_quit()

    def on_home_click(self, widget):
        import defineUser

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

    def on_menu_choices_changed(self, lang_dict):
        key = str(lang_dict.get_name())

        for elem in self.locale_options:
            if self.lang_dict[key] in elem:
                lbl = elem[1]
        i18ntrans2.set_locale_handler(loc="".join(self.lang_dict[key].split()), lbl=lbl, popup=self._popup_message)


class MenuWindow(Gtk.Window, MenuBar):

    def __init__(self):

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
        }

        # build window
        Gtk.Window.__init__(self, title=_(u'AbSim'))
        self.set_icon_from_file('icon.ico')
        self.maximize()

        box = self.build_bar()

        self.disconnection_warning = simLabels.DisconnectWarning()

        # Build main notebook. Each tab represents an instructional phase.
        self.notebook.set_tab_pos(Gtk.POS_LEFT)
        self.notebook.connect('switch-page', self.reset_active_page)

        # Pre-assessment
        self.pre_assessment = coverageassessment.CoveragePreAssessment(self.view_resources)
        self.pre_assessment.set_property('border-width', 15)
        pre_assessment_label = simLabels.MilestoneNameLabel(_(u"Baseline Assessment"))
        self.notebook.append_page(self.pre_assessment, pre_assessment_label)

        # Milestone 1
        self.depth_trainer = depthtrainer.DepthTrainer(self.view_resources)
        self.depth_trainer.set_property('border-width', 15)
        milestone_1_label = simLabels.MilestoneNameLabel(_(u"Milestone 1:") + "\n" + _(u"Depth of Palpation"))
        self.notebook.append_page(self.depth_trainer, milestone_1_label)

        # Milestone 2
        self.coverage_trainer = coveragetrainer.CoverageTrainer(self.view_resources)
        self.coverage_trainer.set_property('border-width', 15)
        milestone_2_label = simLabels.MilestoneNameLabel(_(u"Milestone 2:") + "\n" + _(u"Surface Area Coverage"))
        self.notebook.append_page(self.coverage_trainer, milestone_2_label)

        # Post-assessment
        self.post_assessment = coverageassessment.CoveragePostAssessment(self.pre_assessment, self.view_resources)
        self.post_assessment.set_property('border-width', 15)
        post_assessment_label = simLabels.MilestoneNameLabel(_(u"Comparative Assessment"))
        self.notebook.append_page(self.post_assessment, post_assessment_label)

        # Milestone 3
        self.abnormality_detection = abnormalitydetection.AbnormalityDetection(self.view_resources)
        self.abnormality_detection.set_property('border-width', 15)
        milestone_3_label = simLabels.MilestoneNameLabel(_(u"Milestone 3:") + "\n" + _(u"Abnormality Detection"))
        self.notebook.append_page(self.abnormality_detection, milestone_3_label)

        # Milestone 4
        self.self_practice = selfpractice.SelfPractice(self.view_resources)
        self.self_practice.set_property('border-width', 15)
        milestone_4_label = simLabels.MilestoneNameLabel(_(u"Milestone 4:") + "\n"
                                                         + _(u"Self-Assessment with") + "\n" + _(u"Random Ailments"))
        self.notebook.append_page(self.self_practice, milestone_4_label)

        # Milestone 5
        self.ddx_practice = ddxpractice.DDXPractice(self.view_resources)
        self.ddx_practice.set_property('border-width', 15)
        milestone_5_label = simLabels.MilestoneNameLabel(_(u"Milestone 5:") + "\n" + _(u"Diagnosis Integration") + "\n"
                                                         + _(u"with Hx/PE"))
        self.notebook.append_page(self.ddx_practice, milestone_5_label)

        self.notebook.show()
        self.depth_trainer.show_all()
        self.coverage_trainer.show_all()

        vbox = Gtk.VBox(False, 2)
        vbox.pack_start(box, False, False, 0)
        vbox.pack_start(self.disconnection_warning, False, False, 0)
        vbox.pack_start(self.notebook, True, True, 0)
        self.add(vbox)

        box.show_all()

        self.show()
        vbox.show()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        self.do_not_touch = donottouch.DoNotTouchWarning(self.state_watcher)
        self.attach_new_case_observer(self.do_not_touch.restart)
        self.attach_new_case_observer(self.guarding.new_case_selected)
        self.attach_new_case_observer(self.touch_alerter.enable_protection)
        self.attach_new_case_observer(self.sounds.new_generic_case)

        self.new_case_block.connect(self.sounds.new_generic_case)

        self.state_watcher.connect('sensor_pad_disconnected', self.show_disconnection_warning)
        self.state_watcher.connect('sensor_pad_connected', self.hide_disconnection_warning)

        # Always do this one last.
        # This means the case will be readable on the main window,
        # but people will still know not to strip the belts.
        if hasattr(self.port_settings, 'cnc_port'):
            logging.debug('cnc has port')
            # self.port_settings.home_cnc()
        else:
            logging.debug('cnc port not found')
            self.show_disconnection_warning(self.state_watcher)

        self.attach_new_case_observer(self.port_settings.new_case_selected)

        self.new_selected_case.alert('none n')
        self.notebook.set_current_page(0)

    def attach_new_case_observer(self, callback):
        if self.state_watcher.sensor_pad_is_connected == True:
            self.new_selected_case.connect(callback)

    def reset_active_page(self, notebook, useless_param, page_num):
        # When the user clicks a page, reset it to its default.
        # useless_param is useless in PyGtk, but Gtk passes it anyway.
        page = notebook.get_nth_page(page_num)
        page.reset_page()

    def show_do_not_touch_modal(self, widget):
        Gtk.threads_enter()
        # gobject.idle_add(self.do_not_touch.restart)
        GLib.idle_add(self.do_not_touch.restart)
        Gtk.threads_leave()

    def show_disconnection_warning(self, signal_source):
        GLib.idle_add(self.disconnection_warning.show_all)

    def hide_disconnection_warning(self, signal_source):
        GLib.idle_add(self.disconnection_warning.hide)