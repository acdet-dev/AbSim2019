﻿#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import threading
import logging
import sys
import array
import glob
import serial
import serial.tools.list_ports
import observer
import time
import queue as Queue
from gi.repository import GObject
GObject.threads_init()


class Sensors(threading.Thread):
    """Polls the serial port for updates"""
    def __init__(self, state_watcher, command_queue, port=None):
        threading.Thread.__init__(self)
        self.daemon = True
        self.command_queue = command_queue
        self.trashed_frames = 0

        self.new_data = observer.Observer()

        self.commands = {
            'clear': '0',
            'RUQn': '1',
            'RLQn': '2',
            'LUQn': '3',
            'LLQn': '4',
            'hepatomegaly': '5',
            'splenomegaly': '6',
            'enlarged_bladder': '7',
            'UGIn': '8',

            'RUQp': 'A',
            'RLQp': 'B',
            'LUQp': 'C',
            'LLQp': 'D',
            'UGIp': 'E',
            'bladder_pushback': 'F',
        }

        self.cols = 12
        self.rows = 12
        self._stop = threading.Event()

        self.state_watcher = state_watcher
        self.connect_signals()

        if port is not None:
            self.port = port
            self.connect()

        else:
            i = 0
            while i < 4:
                self.reconnect()
                if self.port is not None:
                    logging.debug('sensor connected after ' + str(i) + ' times.')
                    i = 7
                else:
                    i = i + 1
                    time.sleep(1)
            if self.port is not None:
                pass
            else:
                logging.debug('failed to reconnect pressure pad. Stopping device thread')
                self.stop()

    def connect_signals(self):
        self.state_watcher.connect('all_devices_idle', self.idle)
        # self.state_watcher.connect('any_device_busy', self.restart)

    def connect(self):
        try:
            time.sleep(1)
            self.port.flush()
            self.port.write('B\n'.encode('ascii'))
            self.state_watcher.sensor_pad_connected()
        except serial.serialutil.SerialException:
            logging.debug('could not connect sensor pad')

    def idle(self, event, widget):
        try:
            time.sleep(.5)
            self.port.reset_input_buffer()
        except (serial.serialutil.SerialException, AttributeError):
            pass

    def run(self):
        while not self.stopped():
            if hasattr(self, 'port') and self.port is not None:
                try:
                    self.read_from_port()
                except Exception as e:
                    logging.debug(e)
                    logging.debug('sensor port failing to read on try read command; setting to none')
                    # self.port.close()
                    fail_read_counter = 0
                    while fail_read_counter < 4:
                        try:
                            self.read_from_port()
                            fail_read_counter = 5
                            read_success = True
                        except Exception as e:
                            logging.debug(e)
                            logging.debug('sensor port failing to read on fail block ' + str(fail_read_counter) +
                                          ' times')
                            fail_read_counter += 1
                    if not read_success:
                        self.port = None
                self.command = 0
                try:
                    self.command = self.command_queue.get(True, 0.01)
                except Queue.Empty:
                    pass
                if self.command:
                    self.send_command(self.command)
            else:
                logging.debug('Sensor reconnect loop hit.')
                self.reconnect()
                if hasattr(self, 'port') and self.port is not None:
                    self.state_watcher.sensor_pad_connected()
                else:
                    self.state_watcher.sensor_pad_disconnected()
                    time.sleep(2)
                    self.stop()

        if hasattr(self, 'port') and self.port is not None:
            logging.debug('closing sensor pad port on run loop end.')
            self.port.close()
            self.state_watcher.sensor_pad_disconnected()

    def serial_home_stop(self):
        logging.debug('serial home_stop called!')
        self.stop()

    def stop(self):
        self._stop.set()

    def stopped(self):
        return self._stop.isSet()

    def read_from_port(self):
        data_buffer = array.array('B')
        self.find_frame_beginning()
        # Frame begin bytes are there, so collect the frame.
        timer = time.time()
        data_buffer.fromstring(self.port.read(size=144))
        gottime = time.time()
        if gottime - timer > 4:
            logging.debug("Timed out trying to read data.")
        if self.frame_ending_is_there():
            self.process_data(data_buffer)
        else:
            self.trashed_frames += 1
            logging.debug("Frame ending is missing. Trashed frame count: " + str(self.trashed_frames))

    def find_frame_beginning(self):
        edge_finder = array.array('B')
        in_byte = None
        trail_byte = None
        looped = 0
        while 1:
            # First, search for the two bytes signifying the beginning of the frame.
            edge_finder.fromstring(self.port.read(size=1))
            if len(edge_finder):
                in_byte = edge_finder.pop()
                # If you keep finding 0xAA, keep looking until the next one is 0x55
                while in_byte is 0xAA:
                    edge_finder.fromstring(self.port.read(size=1))
                    if len(edge_finder):
                        trail_byte = edge_finder.pop()
                        if trail_byte is 0x55:
                            return True
                        if trail_byte is 0xAA:
                            # in_byte is already 0xAA, so take the inner loop
                            pass
                        else:
                            # break inner loop
                            in_byte = None
                    else:
                        logging.debug("Timed out trying to find pressure pad frame beginning.")
                        self.state_watcher.sensor_pad_disconnected()
                        self.stop()
                    looped = looped + 1
            else:
                logging.debug("Timed out trying to find pressure pad frame beginning.")
                self.state_watcher.sensor_pad_disconnected()
                self.stop()

            if looped > 288:
                logging.debug("Looping way too much to find frame beginning. Problem.")
                self.state_watcher.sensor_pad_disconnected()
                self.stop()

    def frame_ending_is_there(self):
        edge_finder = array.array('B')
        edge_finder.fromstring(self.port.read(size=2))
        if len(edge_finder) is 2 and edge_finder[0] is 0xF0 and edge_finder[1] is 0x0F:
            return True
        else:
            return False

    def send_command(self, command):
        self.port.write(self.commands[command])

    def process_data(self, data):
        logging.debug(data)
        self.state_watcher.new_pressure_data(data)

    def reconnect(self):
        pressure_pad_connection = look_for_device('P')
        if pressure_pad_connection:
            self.port = pressure_pad_connection
            self.connect()
        else:
            self.port = None


def list_serial_ports():
    """Lists serial ports

    :raises EnvironmentError:
        On unsupported or unknown platforms
    :returns:
        A list of available serial ports
    """
    ports = build_platform_port_list()

    result = {}
    for port in ports:
        logging.info(str(port))
        try:
            s_connection = serial.Serial(port.device, 38400, timeout=1, write_timeout=0)
            s_connection.read(size=100)
            s_connection.write(b'r')
            initial_read = bytearray(s_connection.read(size=6))
            logging.info(initial_read)
            s_connection.close()

            if "B".encode('ascii') in initial_read:
                bladder = serial.Serial(port.device, 38400, timeout=1)
                logging.info("Connected to bladder")
                bladder.read(size=100)
                result['B'] = bladder
            elif "G".encode('ascii') in initial_read:
                grbl = serial.Serial(port.device, 38400, timeout=1)
                logging.info("Connected to grbl")
                grbl.read(size=100)
                result['G'] = grbl
            elif "P".encode('ascii') in initial_read:
                sensor = serial.Serial(port.device, 38400, timeout=1)
                logging.info("Connected to sensor")
                sensor.read(size=100)
                result['S'] = sensor
            elif "T".encode('ascii') in initial_read:
                tensioner = serial.Serial(port.device, 38400, timeout=1)
                logging.info("Connected to tensioner")
                tensioner.read(size=100)
                result['T'] = tensioner
            elif "A".encode('ascii') in initial_read:
                bellows = serial.Serial(port.device, 38400, timeout=1)
                logging.info("Connected to bellows")
                bellows.read(size=100)
                result['A'] = bellows

        except (serial.SerialException, OSError) as e:
            logging.debug(e)
            logging.debug(e)

    return result


def look_for_device(device_id):
    # Accepts one-letter strings of G, B, P, or T.
    ports = build_platform_port_list()
    patterns = {
        'G': 'G',
        'P': 'P',
        'B': 'B',
        'T': 'T',
    }
    pattern = patterns[device_id]

    for port in ports:
        logging.info(str(port))
        try:
            s_connection = serial.Serial(port.device, 38400, timeout=1, write_timeout=0)
            initial_read = bytearray(s_connection.read(size=100))
            logging.info(initial_read)
            s_connection.close()

            if pattern.encode('ascii') in initial_read:
                s_conn = serial.Serial(port.device, 38400, timeout=1)
                s_conn.read(size=100)
                logging.info("connected to device " + str(port) + " within reconnect")
                return s_conn
            else:
                s_connection.close()

        except (OSError, serial.SerialException) as e:
            logging.debug(e)
            logging.info("Not connecting to device " + str(port) + " on reconnect")


def build_platform_port_list():
    if sys.platform.startswith('win'):
        ports = serial.tools.list_ports.comports()

    elif sys.platform.startswith('linux') or sys.platform.startswith('cygwin'):
        # this is to exclude your current terminal "/dev/tty"
        ports = glob.glob('/dev/tty[A-Za-z]*')

    elif sys.platform.startswith('darwin'):
        ports = glob.glob('/dev/tty.*')

    else:
        ports = None

    return ports
