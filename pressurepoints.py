#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import logging
"""
PressurePoints models the pressure on the pad
"""
from gi import pygtkcompat
pygtkcompat.enable()
pygtkcompat.enable_gtk(version='3.0')
import gtk
import time
import config
from simLabels import construct_markup
from i18ntrans2 import _


class PressureList:
    def __init__(self, new_case_observer):
        self.NUM_PRESSURE_POINTS = 144
        self.pressure_thresholds = PressureThresholds()
        self.tare_values = TareValues(self.NUM_PRESSURE_POINTS)
        initial_tare_values = self.tare_values.get_tare_values()
        self.pressure_list = [PressurePoint(i, self.pressure_thresholds, initial_tare_values[i])
                              for i in range(self.NUM_PRESSURE_POINTS)]

        new_case_observer.connect(self.on_new_case)

    def state_has_changed(self, new_depths):
        self.dirty = False
        pressure_list = self.pressure_list
        set_state_dirty_callback = self.set_state_dirty
        for i in range(self.NUM_PRESSURE_POINTS):
            pressure_list[i].set_depth(new_depths[i], set_state_dirty_callback)
        return self.dirty

    def set_state_dirty(self):
        self.dirty = True

    def get_pressure_list(self):
        return self.pressure_list
        
    def tare(self):
        saved_tare_values = []
        for i in range(self.NUM_PRESSURE_POINTS):
            saved_tare_values.append(self.pressure_list[i].set_tare())
        self.tare_values.save_tare_values(saved_tare_values)

    def reset_max_depth(self):
        for i in range(self.NUM_PRESSURE_POINTS):
            self.pressure_list[i].reset_max_depth()

    def on_new_case(self, new_case):
        self.reset_max_depth()


class TareValues():
    def __init__(self, num_pressure_points):
        self.num_pressure_points = num_pressure_points



        filename = 'tare.json'
        self.config = config.Config(filename=filename)
        config_from_file = self.config.read_config()
        
        self._DEFAULT_TARE = 0
        
        self.tare_values = []
        
        # Order matters.
        # Short circuiting to protect against tare_values not being there
        if ('tare_values' in config_from_file
                 and self.tare_values_are_valid(config_from_file.get('tare_values'))):
            logging.debug('Using tare values from ' + filename)
            self.tare_values = config_from_file.get('tare_values')
        else:
            logging.debug(filename + ' does not contain the required values. Using defaults.')
            self.tare_values = [self._DEFAULT_TARE] * self.num_pressure_points

    def get_tare_values(self):
        return self.tare_values
            
    def save_tare_values(self, given_tare_list):
        if self.tare_values_are_valid(given_tare_list):
            self.tare_values = given_tare_list
            tare_dict = {'tare_values': self.tare_values}
            self.config.write_config(tare_dict)
        else:
            logging.debug("Could not save tare values. Values invalid.")
            
    def tare_values_are_valid(self, given_tare_list):
        min_value = 0
        max_value = 255
        
        if self.num_pressure_points != len(given_tare_list):
            return False
        for tare_value in given_tare_list:
            if tare_value < min_value:
                return False
            if tare_value > max_value:
                return False
        return True


class PressureThresholds:
    def __init__(self):
        filename = 'sensitivity.json'
        self.config = config.Config(filename=filename)
        config_from_file = self.config.read_config()

        # need to fix this to not have each init start processes...
        # this will help with making threads reactive to changes.

        # Set defaults
        self._DEFAULT_SLIGHTLY_DOWN = 5
        self._DEFAULT_DOWN = 15
        self._DEFAULT_TOO_HARD = 55
        
        if self.dict_contains_required_values(config_from_file):
            logging.debug('Using sensitivity settings from ' + filename)
            self.slightly_down = config_from_file.get('slightly_down')
            self.down = config_from_file.get('down')
            self.too_hard = config_from_file.get('too_hard')
        else:
            logging.debug(filename + ' does not contain the required values. Using defaults.')
            self.slightly_down = self._DEFAULT_SLIGHTLY_DOWN
            self.down = self._DEFAULT_DOWN
            self.too_hard = self._DEFAULT_TOO_HARD
            
    def dict_contains_required_values(self, config):
        if 'slightly_down' in config:
            config_slightly_down = config.get('slightly_down')
            if config_slightly_down < 0 or config_slightly_down > 255:
                return False
        else:
            return False
        
        if 'down' in config:
            config_down = config.get('down')
            if config_down < config_slightly_down or config_down > 255:
                return False
        
        if 'too_hard' in config:
            config_too_hard = config.get('too_hard')
            if config_too_hard < config_down or config_too_hard > 255:
                return False
                
        return True
        
    def get_thresholds(self):
        return (self.slightly_down, self.down, self.too_hard)
        
    def set_thresholds(self, new_sd, new_d, new_th):
        self.slightly_down = new_sd
        self.down = new_d
        self.too_hard = new_th
        
    def save_thresholds_as_default(self, widget):
        defaults_dict = {
            'slightly_down': self.slightly_down,
            'down': self.down,
            'too_hard': self.too_hard,
        }
        
        self.config.write_config(defaults_dict)
        

class SensitivitySettings(gtk.VBox):
    def __init__(self, pressure_list):
        gtk.VBox.__init__(self)
        
        self.pressure_list = pressure_list
        pressure_thresholds = pressure_list.pressure_thresholds
        self.pressure_thresholds = pressure_thresholds
        
        self.tare_button = gtk.Button(label=_(u"Tare / Zero Sensors"))
        self.tare_button.connect('pressed', self.tare_button_pressed)
        self.tare_button_alignment = gtk.Alignment(xalign=0.5)
        self.tare_button_alignment.add(self.tare_button)
        
        self.save_settings_button = gtk.Button(label=_(u"Save Sensitivity Settings"))
        self.save_settings_button.connect('pressed', self.pressure_thresholds.save_thresholds_as_default)
        self.save_settings_alignment = gtk.Alignment(xalign=0.5)
        self.save_settings_alignment.add(self.save_settings_button)
        
        (slightly_down, down, too_hard) = pressure_thresholds.get_thresholds()
        
        self.too_light_label = gtk.Label()
        self.too_light_label.set_markup("<span foreground='gray' font_weight='bold'>" + _(u"Light Palpation") +
                                        "</span>")
        self.too_light_hscale = gtk.HScale()
        self.too_light_hscale.set_digits(0)
        self.too_light_hscale.set_range(0, 255)
        self.too_light_hscale.set_value(slightly_down)
        self.too_light_hscale.set_property('round_digits', 3)
        
        self.down_label = gtk.Label()
        self.down_label.set_markup("<span foreground='blue' font_weight='bold'>" + _(u"Deep Palpation") + "</span>")
        self.down_hscale = gtk.HScale()
        self.down_hscale.set_digits(0)
        self.down_hscale.set_range(0, 255)
        self.down_hscale.set_value(down)
        self.down_hscale.set_property('round_digits', 3)
        
        self.too_hard_label = gtk.Label()
        self.too_hard_label.set_markup("<span foreground='red' font_weight='bold'>" + _(u"Too hard") + "</span>")
        self.too_hard_hscale = gtk.HScale()
        self.too_hard_hscale.set_digits(0)
        self.too_hard_hscale.set_range(0, 255)
        self.too_hard_hscale.set_value(too_hard)
        self.too_hard_hscale.set_property('round-digits', 3)
        
        self.too_light_hscale.connect('change-value', self.too_light_threshold_moved)
        self.down_hscale.connect('change-value', self.down_threshold_moved)
        self.too_hard_hscale.connect('change-value', self.too_hard_threshold_moved)

        label = gtk.Label()
        label_text = "<b>" + _(u"Sensitivity Configuration Interface") + "</b>" + "\n\n" + \
                     _(u"Set pressure pad sensitivity thresholds:") + "\n\n" + _(u"(e.g. ") + \
                     "<span foreground='gray' font_weight='bold'>" + _(u"light ") + "</span>" + _(u"from 5 - 14") + \
                     "<span foreground='blue' font_weight='bold'>" + "\n" + _(u"deep ") + "</span>" + \
                     _(u"from 15 - 54") + "<span foreground='red' font_weight='bold'>" + "\n" + _(u"too hard ") + \
                     "</span>" + _(u"> 55).") + "\n\n" + \
                     _(u'Click "Save Sensitivity Settings" to save your choices.') + \
                     _(u"You may view the effects of your changes on the image to the right.") + "\n\n" + \
                     _(u'If you notice "ghost" registers of pressure, click "Tare / Zero Sensors".')
        label_pre_mark = construct_markup(label_text, font_size=14)
        label.set_markup(label_pre_mark)
        label.set_line_wrap(True)
        # label.set_alignment(0, 0)
        label.set_max_width_chars(50)

        self.vbox = gtk.VBox(False, 5)
        button_hbox = gtk.HBox(False, 5)
        button_hbox.pack_start(self.save_settings_alignment, False, False, 10)
        button_hbox.pack_start(self.tare_button_alignment, False, False, 10)
        self.pack_start(label, False, False, 20)
        self.pack_start(child=self.too_light_label, expand=False, fill=False, padding=0)
        self.pack_start(child=self.too_light_hscale, expand=False, fill=False, padding=0)
        self.pack_start(child=self.down_label, expand=False, fill=False, padding=0)
        self.pack_start(child=self.down_hscale, expand=False, fill=False, padding=0)
        self.pack_start(child=self.too_hard_label, expand=False, fill=False, padding=0)
        self.pack_start(child=self.too_hard_hscale, expand=False, fill=False, padding=0)
        self.pack_start(child=button_hbox, expand=False, fill=False, padding=20)
        
        self.show_all()
        
    def too_light_threshold_moved(self, range, scroll, value):
        if value > 255:
            value = 255
        if value < 0:
            value = 0
        self.too_light_hscale.set_value(value)
        if value > self.down_hscale.get_value():
            self.down_hscale.set_value(value)
        if value > self.too_hard_hscale.get_value():
            self.too_hard_hscale.set_value(value)
        self.pressure_thresholds.set_thresholds(self.too_light_hscale.get_value(), self.down_hscale.get_value(), self.too_hard_hscale.get_value())
            
    def down_threshold_moved(self, range, scroll, value):
        if value > 255:
            value = 255
        if value < 0:
            value = 0
        self.down_hscale.set_value(value)
        if value < self.too_light_hscale.get_value():
            self.too_light_hscale.set_value(value)
        if value > self.too_hard_hscale.get_value():
            self.too_hard_hscale.set_value(value)
        self.pressure_thresholds.set_thresholds(self.too_light_hscale.get_value(), self.down_hscale.get_value(), self.too_hard_hscale.get_value())
        
    def too_hard_threshold_moved(self, range, scroll, value):
        if value > 255:
            value = 255
        if value < 0:
            value = 0
        self.too_hard_hscale.set_value(value)
        if value < self.down_hscale.get_value():
            self.down_hscale.set_value(value)
        if value < self.too_light_hscale.get_value():
            self.too_light_hscale.set_value(value)
        self.pressure_thresholds.set_thresholds(self.too_light_hscale.get_value(), self.down_hscale.get_value(), self.too_hard_hscale.get_value())
        
    def tare_button_pressed(self, widget):
        self.pressure_list.tare()


class PressurePoint:
    def __init__(self, index, pressure_thresholds, tare_value):
        self._raw_depth = 0
        self._depth = 0
        self._state = 'up'
        self._tare = tare_value
        self._index = index



        self._max_depth = 0
        
        self.pressure_thresholds = pressure_thresholds
        
        # Set constant values for ailment depths.
        self._SLIGHTLY_DOWN = 10
        self._DOWN = 30
        self._TOO_HARD = 100

        self.rebound = False
        # Rebound time is the maximum time between blue and white to be short enough for rebound
        self._REBOUND_TIME = 0.05
        self.last_time_below_blue = 0
        
    def get_depth(self):
        return self._depth
    
    def set_depth(self, new_depth, dirty_callback):
        # print "hit set_depth"
        self._raw_depth = new_depth
        self._depth = new_depth - self._tare
        if self._max_depth < new_depth:
            self._max_depth = self._depth
        new_state = self._calculate_state(self._depth)
        if (new_state != self.get_state()):
            self.check_for_rebound(self.get_state(), new_state)
            self._state = new_state
            dirty_callback()

    def check_for_rebound(self, old_state, new_state):
        self.rebound = False
        if new_state in ['down', 'too_hard']:
            pass
        if old_state in ['down', 'too_hard']:
            if new_state is 'up':
                self.rebound = True
            if new_state is 'slightly_down':
                self.last_time_below_blue = time.time()
        elif old_state is 'slightly_down':
            time_diff = time.time() - self.last_time_below_blue
            if time_diff < self._REBOUND_TIME:
                self.rebound = True
        
    def _calculate_state(self, new_depth):
        # get_thresholds returns a 3-tuple
        (slightly_down, down, too_hard) = self.pressure_thresholds.get_thresholds()
        
        if new_depth >= down:
            if new_depth >= too_hard:
                return 'too_hard'
            else:
                return 'down'
        else:
            if new_depth >= slightly_down:
                return 'slightly_down'
            else:
                return 'up'
                
    def get_state(self):
        return str(self._state)
        
    def get_max_state(self):
        return str(self._calculate_state(self._max_depth))
        
    def reset_max_depth(self):
        self._max_depth = self._depth
        
    def set_tare(self):
        self._tare = self._raw_depth
        self.reset_max_depth()
        return self._tare
