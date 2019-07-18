#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

"""
Watches both ailments and palpation points for changes, and alerts for new drawings.

This is to keep the drawing routines from drawing background too often.
"""

from gi.repository import GObject
import threading

import logging


class StateWatcher (GObject.GObject):
    __gproperties__ = {
        'state': (
            GObject.TYPE_STRING,
            'ailment or pressure alert',
            'ailment or pressure alert',
            'down',
            GObject.PARAM_READABLE
        )
    }

    __gsignals__ = {
        'state-change': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            (GObject.TYPE_STRING,) #takes in now string.
        ),
        'any_device_busy': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            (GObject.TYPE_STRING,)
        ),
        'all_devices_idle': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            (GObject.TYPE_STRING,)
        ),
        'sensor_pad_disconnected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'sensor_pad_connected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'cnc_disconnected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'cnc_connected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'bladder_disconnected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'bladder_connected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'tensioner_disconnected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'tensioner_connected': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
        'new_data_frame': (
            GObject.SIGNAL_RUN_FIRST,
            GObject.TYPE_NONE,
            ()
        ),
    }

    def __init__(self, ailments, pressurepad):
        GObject.GObject.__init__(self)

        self.ailments = ailments
        self.pressurepad = pressurepad
        self.sensor_pad_is_connected = False
        self.cnc_is_connected = False
        self.tensioner_is_connected = False
        self.bladder_is_connected = False

    def cnc_is_idle(self):
        self.cnc_device_is_idle = True
        self.alert_if_all_devices_are_idle()

    def cnc_is_busy(self):
        self.cnc_device_is_idle = False
        self.emit('any_device_busy', 'now')

    def new_pressure_data(self, sensor_data):
        pressure_changed = self.pressurepad.state_has_changed(sensor_data)
        if pressure_changed:
            self.emit('state-change', 'change')
        self.emit('new_data_frame')

    def sensor_pad_disconnected(self):
        self.sensor_pad_is_connected = False
        
        self.emit('sensor_pad_disconnected')

    def sensor_pad_connected(self):
        self.sensor_pad_is_connected = True
        
        self.emit('sensor_pad_connected')

    def cnc_disconnected(self):
        if self.cnc_is_connected:
            self.cnc_is_connected = False
            
            self.emit('cnc_disconnected')
        else:
            self.cnc_is_connected = False
            
            self.emit('cnc_disconnected')

    def cnc_connected(self):
        if self.cnc_is_connected is False:
            self.cnc_is_connected = True
            
            self.emit('cnc_connected')

    def bladder_is_idle(self):
        self.bladder_device_is_idle = True
        
        #self.alert_if_all_devices_are_idle()

    def bladder_is_busy(self):
        self.bladder_device_is_idle = False
        self.emit('bladder_busy', 'now')

    def bladder_disconnected(self):
        if self.bladder_is_connected:
            self.bladder_is_connected = False
            #self.emit('bladder_disconnected')
        else:
            self.bladder_is_connected = False
            #self.emit('bladder_disconnected')

    def bladder_connected(self):
        if self.bladder_is_connected is False:
            self.bladder_is_connected = True
            self.emit('bladder_connected')

    def tensioner_disconnected(self):
        if self.tensioner_is_connected:
            self.tensioner_is_connected = False
            
            self.emit('tensioner_disconnected')

    def tensioner_connected(self):
        if self.tensioner_is_connected is False:
            self.tensioner_is_connected = True
            self.tensioner_device_is_idle = True
            
            self.emit('tensioner_connected')

    def tensioner_is_idle(self):
        try:
            if not self.tensioner_device_is_idle:
                self.tensioner_device_is_idle = True

                self.alert_if_all_devices_are_idle()
        except AttributeError:
            self.tensioner_device_is_idle = True
            self.alert_if_all_devices_are_idle()

    def tensioner_is_busy(self):
        self.tensioner_device_is_idle = False
        
        self.emit('any_device_busy', 'now')

    def alert_if_all_devices_are_idle(self):
        need_tensioner_idle = self.tensioner_is_connected
        need_cnc_idle = self.cnc_is_connected

        if need_tensioner_idle:
            tensioner_ready = self.tensioner_device_is_idle
        else:
            tensioner_ready = True

        if need_cnc_idle:
            cnc_ready = self.cnc_device_is_idle
        else:
            cnc_ready = True

        if tensioner_ready and cnc_ready:
            t = threading.Timer(5.0, self.emit, ['all_devices_idle', 'now'])
            t.start()