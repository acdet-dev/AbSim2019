#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import serial
import threading
import random
import time
import config
import logging
import serialport

from gi.repository import GObject
GObject.threads_init()


class CNC(threading.Thread):
    """Sends commands to the CNC controller, in this case a TinyG"""

    def __init__(self, command_queue, state_watcher, port=None, assess=False):
        threading.Thread.__init__(self)
        #set up class
        self.config = config.Config('cnc_adjustments.json')

        self.daemon = True
        self.command_queue = command_queue
        self.state_watcher = state_watcher
        self.assess = assess
        # X 0-240
        # Y 0-270
        self.gcodes = {
            'check_status': '?\n',
            'home': '$H\n',
            'feed_hold': '!\n',
            'soft_reset': '\x18\n',
            'kill_alarm_lock': '$X\n',
        }

        #cnc defaults
        self.base_locations = self.config.read_config()

        '''
        {
            'none':{'x': 3,   'y': 3},
            'appendix':{'x': 34,  'y': 220},
            'bladder':{'x': 100, 'y': 250},
            'colon':{'x': 178, 'y': 214},
            'enlarged_bladder':{'x': 100, 'y': 270},
            'gallbladder':{'x': 65,  'y': 80},
            'hepatomegaly':{'x': 25,  'y': 60},
            'ugi':{'x': 114, 'y': 30},
            'ovary_left':{'x': 140, 'y': 230},
            'ovary_right':{'x': 90,  'y': 230},
            'pancreas':{'x': 114, 'y': 50},
            'splenomegaly':{'x': 200, 'y': 85}
        }
        '''

        self.adjustment_commands = ['x+', 'x-', 'y+', 'y-']

        self.x_adjustment = 0
        self.y_adjustment = 0

        self._stop = threading.Event()
        self.delay = False

        if port is not None:
            self.port = port
            logging.debug('cnc has port')
            self.connect()
        else:
            logging.debug('no port on startup')

    def disconnect(self):
        try:
            logging.debug('disconnecting from ports')
            self.port.close()
            self.state_watcher.cnc_disconnected()
        except (OSError, serial.SerialException):
            logging.debug('no ports to close or delete?')

    def run(self):
        i = 1
        while not self.stopped():
            if hasattr(self, 'port') and self.port is not None:
                command = self.check_for_command()
                self.handle_command(command)
                time.sleep(1)
            else:
                while i < 4:
                    logging.debug('reconnect loop hit cnc.')
                    self.reconnect()
                    i = i + 1
                    time.sleep(1)
                logging.debug('failed to reconnect')
                self.state_watcher.cnc_disconnected()
                self.state_watcher.cnc_is_idle()
                self.stop()

    def check_for_command(self):
        command = 0
        try:
            command = self.command_queue.get(True, 0.01)
        except Exception:
            pass
        return command

    def handle_command(self, command):
        if hasattr(self, 'port') and self.port is not None:
            if command:
                self.port.flush()
                self.handler(command)
                self.alert_when_idle()
        else:
            logging.debug('cnc handle command failed. Reconnecting.')
            self.reconnect()
            if command:
                self.alert_when_idle()
            if hasattr(self, 'port'):
                self.state_watcher.cnc_connected()
            else:
                self.state_watcher.state_watcher.cnc_disconnected()
                time.sleep(2)

    def handler(self, command_name):
        if command_name in self.adjustment_commands:
            if command_name == 'x+':
                self.x_adjustment = self.x_adjustment + 5
            elif command_name == 'x-':
                self.x_adjustment = self.x_adjustment - 5
            elif command_name == 'y+':
                self.y_adjustment = self.y_adjustment + 5
            elif command_name == 'y-':
                self.y_adjustment = self.y_adjustment - 5
            # sends last location (colon, appendix, etc) and uses x and y adjustments to put ailment within new range
            gcode = self.get_adjusted_location_gcode(self.last_location_sent)
            self.send_command(gcode)
        elif command_name is 'emergency_stop':
            self.emergency_stop()
        elif command_name in self.base_locations:
            gcode = self.get_adjusted_location_gcode(command_name)
            self.last_location_sent = command_name
            self.send_command(gcode)
        elif command_name in self.gcodes:
            self.send_command(self.gcodes[command_name])
        else:
            # i18n - print
            logging.debug("cnc.handler does not recognize command ")

    def emergency_stop(self):
        # i18n - print
        logging.debug('Emergency stop!')
        self.send_command(self.gcodes.get('soft_reset'))
        time.sleep(2)
        self.command_queue.queue.clear()
        self.send_command(self.gcodes.get('kill_alarm_lock'))
        self.send_command(self.gcodes.get('home'))
        self.handler(self.last_location_sent)
        self.alert_when_idle()

    def cnc_home_stop(self):
        logging.debug('home_stop called!')
        self.stop()
        self.last_location_sent = 'none'
        try:
            self.send_command(self.gcodes.get('home'))
            time.sleep(3)
            self.alert_when_idle(True)
        except (OSError, serial.SerialException):
            logging.debug('could not write to port')
            pass

        self.disconnect()
        time.sleep(5)

    def get_adjusted_location_gcode(self, command_name):
        # create dict
        base_location = self.base_locations.get(str(command_name))
        base_loc_list = list()
        base_loc_list.append(base_location)
        base_location = random.choice(base_loc_list)
        x = self.put_within_range(base_location.get('x') + self.x_adjustment, 3, 190)
        y = self.put_within_range(base_location.get('y') + self.y_adjustment, 3, 265)
        gcode = 'G00X' + str(x) + 'Y' + str(y) + '\n'

        # also need to write adjustments to config file
        self.write_adjustment_to_file(command_name, x, y)

        return gcode

    def put_within_range(self, point, min_coord, max_coord):
        if point < min_coord:
            return min_coord
        elif point > max_coord:
            return max_coord
        else:
            return point

    def write_adjustment_to_file(self, command_name, x, y):
        new_adjustments = self.base_locations
        new_adjustments[str(command_name)]['x'] = x
        new_adjustments[str(command_name)]['y'] = y

        self.config.write_config(new_adjustments)

    def stop(self):
        self._stop.set()

    def stopped(self):
        return self._stop.isSet()

    def configure(self):
        # Use send_command to send configuration session commands
        # Home
        self.send_command('$0=10\n')
        self.send_command('$1=255\n')
        self.send_command('$2=0\n')
        self.send_command('$3=0\n')
        self.send_command('$4=1\n')
        self.send_command('$5=0\n')
        self.send_command('$6=0\n')
        self.send_command('$10=3\n')
        self.send_command('$11=0.020\n')
        self.send_command('$12=0.002\n')
        self.send_command('$13=0\n')
        self.send_command('$20=0\n')
        self.send_command('$21=0\n')
        self.send_command('$22=1\n')
        self.send_command('$23=3\n')
        self.send_command('$24=100.000\n')
        self.send_command('$25=1250.000\n')
        self.send_command('$26=250\n')
        self.send_command('$27=1.000\n')
        self.send_command('$100=100.000\n')
        self.send_command('$101=100.000\n')
        self.send_command('$102=250.000\n')
        self.send_command('$110=1250.000\n')
        self.send_command('$111=1250.000\n')
        self.send_command('$112=500.000\n')
        self.send_command('$120=25.000\n')
        self.send_command('$121=25.000\n')
        self.send_command('$122=10.000\n')
        self.send_command('$130=245.000\n')
        self.send_command('$131=270.000\n')
        self.send_command('$132=200.000\n')

    def alert_when_idle(self, startup=False):
        idle = False
        while not idle:
            if hasattr(self, 'port') and self.port is not None:
                if not startup:
                    command = self.check_for_command()
                    self.handle_command(command)
                    time.sleep(0.5)

                try:
                    self.port.reset_input_buffer()
                    self.port.write(('?\n').encode())
                    in_line1 = self.port.readline()
                    idle = bool('Idle' in in_line1.decode('utf-8'))
                except Exception:
                    logging.debug('help')
                    pass
            time.sleep(1)

        self.state_watcher.cnc_is_idle()

    def send_command(self, command):
        # Send command over self.port
        self.port.write(str.encode(command))
        self.state_watcher.cnc_is_busy()

    def connection_is_alive(self):
        try:
            self.port.flushInput()
            self.port.write((self.gcodes['check_status']).encode())
            time.sleep(1)
            in_line1 = self.port.readline()
            return ('MPos').encode() in in_line1
        except serial.serialutil.SerialException as e:
            return False

    def reconnect(self):
        logging.debug('attempting to reconnect cnc.')
        if hasattr(self, 'port') and self.port is not None:
            self.port.close()
        self.port = None
        cnc_connection = serialport.look_for_device('G')
        if cnc_connection:
            logging.debug("reconnected to cnc")
            self.port = cnc_connection
            self.connect()

    def connect(self):
        try:
            self.port.flush()
            self.configure()
            time.sleep(1)
            self.send_command(self.gcodes.get('home'))
            time.sleep(3)
            self.alert_when_idle(True)
            if self.assess:
                time.sleep(5)
        except Exception:
            logging.debug("Couldn't connect to cnc.")

# Testing (Added by Terry Hancock for testing i18n upgrades)
#
#class DUMMY_CNC(CNC):
#    """
#    Dummy CNC acts like CNC object, but without actually communicating to any peripheral.
#    It should cause the system to act as if the device is connected, but is just sitting
#    there doing nothing. Beware that this could cause "silent failures". It's only to be
#    enabled when we are in "TEST MODE".
#    """
#    def __init__(self, command_queue, state_watcher, port=None):
#        threading.Thread.__init__(self)
#        self.daemon = True
#        self.command_queue = command_queue
#        self.state_watcher = state_watcher
#        self.last_location_sent = 'none'
#        self.base_locations = {'none':             [{'x': 3,   'y': 3}]}
#        
#        self._stop = threading.Event()
#        
#        print "Starting Dummy CNC thread - AbSim is in TEST MODE."
#        
#        if port:
#            self.port = port
#            self.connect()
#            
#    def configure(self):
#        pass
#            
#    def handler(self, command_name):
#        print "Handler Called, but AbSim is in TEST MODE."
#        self.state_watcher.cnc_is_busy()
#
#    def connect(self):
#        print "Received Connect, but AbSim is in TEST MODE."
#        self.alert_when_idle()
#    
#    def reconnect(self):
#        self.connect()
#        
#    def send_command(self, command):
#        self.state_watcher.cnc_is_busy()
#        
#    def alert_when_idle(self):
#        self.state_watcher.cnc_is_idle()
#        
#    def handle_command(self, command):
#        self.handler(command)
#        self.alert_when_idle()
#
#if config.TEST_MODE[0] == True:
#    print "Replacing CNC with Dummy CNC for testing!"
#    CNC = DUMMY_CNC
#