import logging
import ailments
import pressurepoints
import guarding
import statewatcher
import observer
import port_settings
import depthtrainer
import coveragetrainer
import abnormalitydetection
import ddxpractice
import coverageassessment
import sounds
import selfpractice
import donottouch
import simLabels
from aStringResources import AStringResources
from views import menuBar

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, GLib


class MenuWindow(Gtk.Window, menuBar.MenuBar):

    def __init__(self):

        # Build all the objects that talk to each other
        self.string_resources = AStringResources("menu").get_by_identifier()
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
        Gtk.Window.__init__(self, title="AbSim")
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
        pre_assessment_label = simLabels.MilestoneNameLabel(self.string_resources["menu_tab_1"])
        self.notebook.append_page(self.pre_assessment, pre_assessment_label)

        # Milestone 1
        self.depth_trainer = depthtrainer.DepthTrainer(self.view_resources)
        self.depth_trainer.set_property('border-width', 15)
        milestone_1_label = simLabels.MilestoneNameLabel(self.string_resources["menu_tab_2a"] + "\n" +
                                                         self.string_resources["menu_tab_2b"])
        self.notebook.append_page(self.depth_trainer, milestone_1_label)

        # Milestone 2
        self.coverage_trainer = coveragetrainer.CoverageTrainer(self.view_resources)
        self.coverage_trainer.set_property('border-width', 15)
        milestone_2_label = simLabels.MilestoneNameLabel(self.string_resources["menu_tab_3a"] + "\n" +
                                                         self.string_resources["menu_tab_3b"])
        self.notebook.append_page(self.coverage_trainer, milestone_2_label)

        # Post-assessment
        self.post_assessment = coverageassessment.CoveragePostAssessment(self.pre_assessment, self.view_resources)
        self.post_assessment.set_property('border-width', 15)
        post_assessment_label = simLabels.MilestoneNameLabel(self.string_resources["menu_tab_4"])
        self.notebook.append_page(self.post_assessment, post_assessment_label)

        # Milestone 3
        self.abnormality_detection = abnormalitydetection.AbnormalityDetection(self.view_resources)
        self.abnormality_detection.set_property('border-width', 15)
        milestone_3_label = simLabels.MilestoneNameLabel(self.string_resources["menu_tab_5a"] + "\n" +
                                                         self.string_resources["menu_tab_5b"])
        self.notebook.append_page(self.abnormality_detection, milestone_3_label)

        # Milestone 4
        self.self_practice = selfpractice.SelfPractice(self.view_resources)
        self.self_practice.set_property('border-width', 15)
        milestone_4_label = simLabels.MilestoneNameLabel(self.string_resources["menu_tab_6a"] + "\n"
                                                         + self.string_resources["menu_tab_6b"] + "\n" +
                                                         self.string_resources["menu_tab_6c"])
        self.notebook.append_page(self.self_practice, milestone_4_label)

        # Milestone 5
        self.ddx_practice = ddxpractice.DDXPractice(self.view_resources)
        self.ddx_practice.set_property('border-width', 15)
        milestone_5_label = simLabels.MilestoneNameLabel(self.string_resources["menu_tab_7a"] + "\n" +
                                                         self.string_resources["menu_tab_7b"] + "\n" +
                                                         self.string_resources["menu_tab_7c"])
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