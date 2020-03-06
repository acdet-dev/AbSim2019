#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, GObject
import logging
from aStringResources import AStringResources


class DoNotTouchWarning(Gtk.Window):
    def __init__(self, state_watcher):
        Gtk.Window.__init__(self)
        self.state_watcher = state_watcher
        self.string_resources = AStringResources("dont_touch").get_by_identifier()
        self.connect_signals()
        self.set_title('AbSim')
        self.set_icon_from_file('img/icon.ico')

        self.set_modal(True)
        self.set_deletable(False)
        self.set_default_size(640, 480)

        hbox = Gtk.HBox()
        touch_label = Gtk.Label()
        touch_label.set_markup("<span font='16'>" + self.string_resources["warning"] +
                               "</span>\n<span font='20' foreground='red'>" + self.string_resources["warning_2"] +
                               "</span>")
        self.spinner = Gtk.Spinner()
        self.spinner.start()

        hbox.pack_start(touch_label)
        hbox.pack_start(self.spinner)

        self.add(hbox)

    def connect_signals(self):
        self.state_watcher.connect('all_devices_idle', self.idle)
        self.state_watcher.connect('any_device_busy', self.restart)

    def idle(self, event, widget):
        logging.info("going idle")
        logging.debug("all_devices_idle signal received. Closing do_not_touch.")
        GObject.idle_add(self.spinner.stop)
        GObject.idle_add(self.hide)

    def restart(self, new_case='none n', arg1=''):
        logging.info("restarting")
        GObject.idle_add(self.spinner.start)
        GObject.idle_add(self.show_all)


class TensionerDoNotTouchWarning(DoNotTouchWarning):
    def __init__(self, state_watcher):
        super(TensionerDoNotTouchWarning, self).__init__(state_watcher)

    def connect_signals(self):
        logging.info("trying without tensioner")
        # self.state_watcher.connect('tensioner_is_idle', self.idle)
        # self.state_watcher.connect('tensioner_is_busy', self.restart)


class TouchAlerter(GObject.GObject):
    '''Emits emergency_stop when presses are detected while CNC is moving.'''
    __gsignals__ = {
        'emergency_stop': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
    }

    def __init__(self, state_watcher, pressure_points):
        GObject.GObject.__init__(self)
        self.state_watcher = state_watcher
        self.pressure_points = pressure_points
        self.protection_enabled = False

        self.state_watcher.connect('all_devices_idle', self.disable_protection)
        self.state_watcher.connect('new_data_frame', self.new_pressure_data_frame)

    def enable_protection(self, arg1):
        self.protection_enabled = True

    def disable_protection(self, arg1, arg2):
        self.protection_enabled = False

    def new_pressure_data_frame(self, string):
        if self.protection_enabled:
            pressure_list = self.pressure_points.get_pressure_list()

            if self.currently_touched(pressure_list):
                self.emit('emergency_stop')

    def currently_touched(self, pressure_list):
        blue_count = sum(point.get_state() in ('down', 'too_hard') for point in pressure_list)
        if blue_count > 2:
            logging.info("blue count: {}".format(blue_count))
        return blue_count > 2
