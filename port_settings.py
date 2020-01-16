#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from multiprocessing import Queue
import logging
import serialport
import cnc
import cases
import serialbladder
import tensioner
import time


class PortSettings:
    def __init__(self, parent, state_watcher, touch_alerter, assess=False):
        self.parent = parent
        self.state_watcher = state_watcher
        self.touch_alerter = touch_alerter
        self.cases = cases.Cases()
        self.assess = assess
        # Queues are thread-safe to talk to arduino daemon threads
        self.command_queue = Queue()
        self.cnc_queue = Queue()
        self.bladder_command_queue = Queue()
        self.tensioner_command_queue = Queue()

        self.find_ports()

        if self.list_of_ports:
            try:
                self.initialize_devices(self.list_of_ports)
            except Exception:
                logging.debug('could not initialize: trying to reconnect')
                self.start_pressure_pad_thread()
                self.start_cnc_thread()
                self.connect_bladder()
                self.connect_tensioner()
        else:
            logging.debug("not connecting; no ports returned")

    def find_ports(self):
        time.sleep(3)
        self.list_of_ports = serialport.list_serial_ports()

    def initialize_devices(self, list_of_ports):
        if 'P' in list_of_ports.keys():
            self.sensor_port = list_of_ports['P']

        if 'G' in list_of_ports.keys():
            self.cnc_port = list_of_ports['G']

        if 'B' in list_of_ports.keys():
            self.bladder_port = list_of_ports['B']

        if 'T' in list_of_ports.keys():
            self.tensioner_port = list_of_ports['T']

        self.start_pressure_pad_thread()
        logging.debug('pressure pad started')

        self.start_cnc_thread()
        logging.debug('cnc started')

        self.connect_bladder()
        logging.debug('bladder connected')

        self.connect_tensioner()
        logging.debug('tensioner connected')

    def start_pressure_pad_thread(self):
        if hasattr(self, 'sensor_port'):
            self.state_watcher.sensor_pad_connected()
            self.sensors_thread = serialport.Sensors(self.state_watcher, self.command_queue, self.sensor_port)
            logging.debug('sending pad sensor port')
        else:
            self.state_watcher.sensor_pad_disconnected()
            self.sensors_thread = serialport.Sensors(self.state_watcher, self.command_queue)
            logging.debug('not sending pad sensor port')
        self.sensors_thread.start()
        
    def start_cnc_thread(self):
        if hasattr(self, 'cnc_port'):
            self.state_watcher.cnc_connected()
            self.cnc_thread = cnc.CNC(self.cnc_queue, self.state_watcher, self.cnc_port, self.assess)
        else:
            self.state_watcher.cnc_disconnected()
            self.cnc_thread = cnc.CNC(self.cnc_queue, self.state_watcher, self.assess)
        self.cnc_thread.start()
        self.touch_alerter.connect('emergency_stop', self.send_cnc_emergency_stop)
        
    def connect_bladder(self):
        if hasattr(self, 'bladder_port'):
            self.bladder_thread = serialbladder.SerialBladder(
                self.state_watcher, self.bladder_command_queue, self.bladder_port)
            self.bladder_thread.start()
            
    def connect_tensioner(self):
        if hasattr(self, 'tensioner_port'):
            self.tensioner_thread = tensioner.Tensioner(
                self.tensioner_command_queue, self.state_watcher, self.tensioner_port)
        else:
            self.tensioner_thread = tensioner.Tensioner(self.tensioner_command_queue, self.state_watcher)
        self.tensioner_thread.start()
        self.state_watcher.connect('all_devices_idle', self.stop_tensioner)
        
    def stop_tensioner(self, arg1, arg2):
        if hasattr(self, 'tensioner_thread'):
            self.tensioner_command_queue.put('disable_adjustment')
    
    def new_case_selected(self, case):
        commands = self.cases.get_case_commands(case)
        if hasattr(self, 'tensioner_thread'):
            self.tensioner_command_queue.put('enable_adjustment')
        else:
            self.state_watcher.tensioner_is_idle()
        if hasattr(self, 'bladder_thread'):
            for b in commands['bladder_commands']:
                self.bladder_command_queue.put(b)
        else:
            logging.debug('bladder thread not found; not sending command.')

        if hasattr(self, 'cnc_thread'):
            for c in commands['cnc_commands']:
                self.cnc_queue.put(c)
        else:
            logging.debug('cnc_thrad not found. Not sending command')
            self.state_watcher.cnc_is_idle()
            
    def send_tensioner_command(self, event, command):
        self.tensioner_command_queue.put(command)
            
    def send_cnc_command(self, command):
        if hasattr(self, 'cnc_thread'):
            self.cnc_queue.put(command)
            
    def send_cnc_emergency_stop(self, signal):
        self.cnc_queue.put('emergency_stop')
            
    def send_pushback_command(self):
        self.bladder_command_queue.put('pushback')
       
    def home_cnc(self):
        self.cnc_queue.put('home')

    def stop_devices(self):
        # fix this block
        if self.state_watcher.bladder_is_connected:
            self.bladder_thread.bladder_home_stop()
            logging.debug('stopping bladder')
        if self.state_watcher.tensioner_is_connected:
            self.tensioner_thread.tensioner_home_stop()
            logging.debug('stopping tensioner')
        if self.state_watcher.cnc_is_connected:
            self.cnc_thread.cnc_home_stop()
            logging.debug('stopping cnc')
        if self.state_watcher.sensor_pad_is_connected:
            self.sensors_thread.serial_home_stop()
            logging.debug('stopping sensor')
