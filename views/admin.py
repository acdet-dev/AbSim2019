#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import logging
import ailments
import pressurepoints
import guarding
import statewatcher
import observer
import port_settings
from views import menu
import simLabels
from simLabels import construct_markup, screen_sizer
import abnormalitydetection
import sounds
import donottouch
from resources.aStringResources import AStringResources

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib


class Admin(Gtk.Window, menu.MenuBar):
    """Admin window. Controls administration of the sim."""
    def __init__(self, name, password):
        # Build all the objects that talk to each other
        self.name = name
        self.password = password
        self.new_selected_case = observer.Observer()
        self.ailments = ailments.Ailments()
        self.pressurepoints = pressurepoints.PressureList(self.new_selected_case)
        self.guarding = guarding.Guarding()
        self.state_watcher = statewatcher.StateWatcher(self.ailments, self.pressurepoints)
        self.touch_alerter = donottouch.TouchAlerter(self.state_watcher, self.pressurepoints)
        self.current_case = 'none n'
        self.port_settings = port_settings.PortSettings(self, self.state_watcher, self.touch_alerter)
        self.string_resources = AStringResources("config_screen").get_by_identifier()
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
            'port_settings': self.port_settings,
            'name': self.name,
            'password': self.password,
            'sounds': self.sounds,
            'window': self,
        }

        #make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        #make menubar
        box = self.build_bar()

        # Disconnection error message
        self.disconnection_warning = simLabels.DisconnectWarning()

        # Build main notebook. Each tab represents an instructional phase.
        self.notebook.set_tab_pos(Gtk.POS_LEFT)
        self.notebook.connect("switch-page", self.reset_active_page)

        # Pressure Sensitivity Adjustment
        sensitivity_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_first_line"] + "\n" +
                                                         self.string_resources["notebook_second_line"])
        settings_box = SensitivityInterface(self.view_resources)
        settings_box.show()
        self.notebook.append_page(settings_box, sensitivity_label)
        self.notebook.show()

        #make boxes for packing and adding to window
        vbox = Gtk.VBox(False, 2)
        vbox.pack_start(box, False, False, 0)
        vbox.pack_start(self.disconnection_warning, False, False, 0)
        vbox.pack_start(self.notebook, True, True, 0)
        self.add(vbox)

        self.show()
        vbox.show()
        #box.show_all()

        self.destroy_signal_handler = self.connect("destroy", Gtk.main_quit)
        self.do_not_touch = donottouch.DoNotTouchWarning(self.state_watcher)
        self.attach_new_case_observer(self.do_not_touch.restart)
        self.attach_new_case_observer(self.guarding.new_case_selected)
        self.attach_new_case_observer(self.touch_alerter.enable_protection)

        self.new_case_block.connect(self.sounds.new_generic_case)

        self.state_watcher.connect('sensor_pad_disconnected', self.show_disconnection_warning)
        self.state_watcher.connect('sensor_pad_connected', self.hide_disconnection_warning)

        # Always do this one last.
        # This means the case will be readable on the main window,
        # but people will still know not to strip the belts.
        if hasattr(self.port_settings, 'cnc_port'):
            logging.debug('cnc has port')
            #self.port_settings.home_cnc()

        else:
            logging.debug('cnc port not found')
            self.show_disconnection_warning(self.state_watcher)

        self.attach_new_case_observer(self.port_settings.new_case_selected)

        self.new_selected_case.alert('none n')
        self.notebook.set_current_page(0)

    def change_user_type(self, widget):
        self.handler_block(self.destroy_signal_handler)
        self.destroy()

    def attach_new_case_observer(self, callback):
        if self.state_watcher.sensor_pad_is_connected:
            self.new_selected_case.connect(callback)

    def reset_active_page(self, notebook, useless_param, page_num):
        # When the user clicks a page, reset it to its default.
        # useless_param is useless in PyGtk, but Gtk passes it anyway.
        page = notebook.get_nth_page(page_num)
        page.reset_page()

    def show_do_not_touch_modal(self, widget):
        #Gtk.threads_enter()
        if hasattr(self, 'do_not_touch'):
            pass
        else:
            self.do_not_touch = donottouch.DoNotTouchWarning(self.state_watcher)

        #gobject.idle_add(self.do_not_touch.restart)
        GLib.idle_add(self.do_not_touch.restart)
        #Gtk.threads_leave()

    def show_disconnection_warning(self, signal_source):
        #gobject.idle_add(self.disconnection_warning.show_all)
        GLib.idle_add(self.disconnection_warning.show_all)
    def hide_disconnection_warning(self, signal_source):
        #gobject.idle_add(self.disconnection_warning.hide)
        GLib.idle_add(self.disconnection_warning.hide)


class SensitivityInterface(Gtk.HBox):
    def __init__(self, view_resources):
        super(SensitivityInterface, self).__init__()
        self.view_resources = view_resources
        self.sensitivity_settings = pressurepoints.SensitivitySettings(self.view_resources['pressurepoints'])
        # self.cnc_adjuster = CNCAdjustmentInterface(self.view_resources['port_settings'])

        # build home button
        self.button_table = Gtk.Table(rows=1, columns=1, homogeneous=True)
        self.button_table_alignment = Gtk.Alignment(xalign=0.2)

        re_button = self.build_button(self.sensitivity_settings.string_resources["back_button"])
        self.button_table.attach(re_button, 1, 2, 0, 1)
        self.button_table_alignment.add(self.button_table)

        self.settings_vbox = Gtk.VBox()
        self.settings_vbox.pack_start(self.sensitivity_settings, False, False)
        self.settings_vbox.pack_start(Gtk.HSeparator(), False, False, 10)
        # self.settings_vbox.pack_start(self.cnc_adjuster, False, False)
        # self.settings_vbox.pack_start(Gtk.HSeparator(), False, False, 20)
        self.settings_vbox.pack_start(self.button_table_alignment, False, False, 0)

        s_w = Gdk.screen_width()
        s_h = Gdk.screen_height()
        width, height = screen_sizer(s_w, s_h, old_width=450, old_height=200)
        self.settings_vbox.set_size_request(width, height)

        self.abnormality_detection = abnormalitydetection.AbnormalityDetection(view_resources)
        self.abnormality_detection.label.hide()
        self.abnormality_detection.case_selector_scroller.hide()

        self.pack_start(self.settings_vbox, True, False, 10)
        self.pack_start(self.abnormality_detection, True, False, 10)

        self.settings_vbox.show_all()

    def build_button(self, label_text):
        label = Gtk.Label()
        label_pre = construct_markup(label_text, font_size=12)
        label.set_markup(label_pre)
        button = Gtk.Button()
        button.add(label)
        button.connect('clicked', self.return_home)
        return button

    def return_home(self, widget):
        from views.simFaculty import SimFaculty
        import dbmigrator, splashscreen

        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        # Perform DB migration to make sure we have the newest version
        dbmigrator.DBMigrator()

        try:
            self.view_resources['sounds'].stop_sound_player()
            self.view_resources['port_settings'].stop_devices()
        except AttributeError:
            logging.debug('attributes necessary for stopping sounds not made yet')

        SimFaculty('faculty', self.view_resources['name'], self.view_resources['password'])
        splash_screen.hide()
        self.view_resources['window'].destroy()
        Gtk.main()

    def reset_page(self):
        pass
        # self.abnormality_detection.reset_page()


class CNCAdjustmentInterface(Gtk.VBox):
    def __init__(self, port_settings):
        super(CNCAdjustmentInterface, self).__init__()
        self.port_settings = port_settings

        '''
        adjustment_label = Gtk.Label(_(u"Click the arrows to calibrate actuator") + "\n" +
                                     _(u"positioning for all ailments at once."))
        adjustment_label.set_line_wrap(False)
        adjustment_label_alignment = Gtk.Alignment(xalign=0.5)
        adjustment_label_alignment.add(adjustment_label)
        '''

        self.arrow_table = Gtk.Table(rows=3, columns=3, homogeneous=True)
        self.arrow_table_alignment = Gtk.Alignment(xalign=0.5)
        arrow_size = Gtk.ICON_SIZE_LARGE_TOOLBAR

        up_button = self.build_button(Gtk.STOCK_GO_UP, 'y-')
        self.arrow_table.attach(up_button, 1, 2, 0, 1)

        down_button = self.build_button(Gtk.STOCK_GO_DOWN, 'y+')
        self.arrow_table.attach(down_button, 1, 2, 2, 3)

        left_button = self.build_button(Gtk.STOCK_GO_BACK, 'x-')
        self.arrow_table.attach(left_button, 0, 1, 1, 2)

        right_button = self.build_button(Gtk.STOCK_GO_FORWARD, 'x+')
        self.arrow_table.attach(right_button, 2, 3, 1, 2)

        self.arrow_table_alignment.add(self.arrow_table)
        # self.pack_start(adjustment_label_alignment, False, False, 0)
        self.pack_start(self.arrow_table_alignment, False, False, 20)
        self.show_all()

    def build_button(self, stock_id, direction):
        arrow = Gtk.Image()
        arrow.set_from_stock(stock_id, Gtk.ICON_SIZE_LARGE_TOOLBAR)
        button = Gtk.Button()
        button.set_image(arrow)
        button.connect('clicked', self.arrow_handler, direction)
        return button

    def arrow_handler(self, widget, direction):
        self.port_settings.send_cnc_command(direction)
