#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import observer
import serial
import logging
import time
from gi.repository import GObject
GObject.threads_init()
import threading
import queue as Queue
from serialport import look_for_device


class SerialBladder(threading.Thread):
    """Polls the serial port for updates"""
    def __init__(self, state_watcher, command_queue, port=None):
        threading.Thread.__init__(self)
        self.daemon = True
        self.new_data = observer.Observer()
        self.state_watcher = state_watcher
        self.commands = {
            'who_are_you': 'R\n',
            'pushback': 'P\n',
            'clear': '0\n',
            'RUQ': '1\n',
            'RLQ': '2\n',
            'LUQ': '3\n',
            'LLQ': '4\n',
            'hepatomegaly': '5\n',
            'splenomegaly': '6\n',
            'enlarged_bladder': '7\n',
        }

        self.memorable_commands = [
            'RUQ', 'RLQ', 'LUQ', 'LLQ', 'hepatomegaly', 'splenomegaly', 'enlarged_bladder'
        ]

        self.remembered_commands_since_clear = []

        self.command_queue = command_queue
        if port is not None:
            self.port = port
            self.state_watcher.bladder_connected()
        else:
            logging.warning('not finding port on this pass for bladder')
        self.delay = False

    def disconnect(self):
        try:
            time.sleep(1)
            logging.info('deflating and disconnecting bladder')
            self.port.close()
        except(OSError, serial.serialutil.serialException):
            logging.warning('bladder has no ports to close')

    def run(self):
        i = 1
        while not self.delay:
            if hasattr(self, 'port') and self.port is not None:
                command = 0
                try:
                    command = self.command_queue.get(True, 1)
                except Queue.Empty:
                    time.sleep(0.2)
                if command == 0:
                    time.sleep(0.2)
                else:
                    self.send_command(command)
                time.sleep(1)
            else:
                while i < 4:
                    self.reconnect()
                    i = i + 1
                    time.sleep(1)
                self.delay = True

    def send_command(self, command):
        self.update_memorized_commands_since_clear(command)
        try:
            if len(self.remembered_commands_since_clear) > 0:
                self.port.write((self.commands[command]).encode())
            else:
                self.port.write((self.commands[command]).encode())
        except serial.serialutil.SerialException as e:
            if self.connection_is_dead():
                self.reconnect()
            pass

    def update_memorized_commands_since_clear(self, command):
        if command in self.memorable_commands:
            self.remembered_commands_since_clear.append(command)
        elif command == 'clear':
            self.remembered_commands_since_clear = []

    def bladder_home_stop(self):
        self.delay = True
        command = self.commands['clear']
        try:
            self.port.write(command.encode())
            time.sleep(3)
        except (OSError, serial.SerialException):
            logging.warning('could not write to port')
            pass
        self.disconnect()

    def connection_is_dead(self):
        try:
            logging.warning("serialbladder: is connection dead?")
            self.port.flushInput()
            self.port.write(self.commands['who_are_you'])
            in_line1 = self.port.read(size=2)
            return 'B' not in in_line1
        except serial.serialutil.SerialException:
            logging.error("serialbladder::connection_is_dead.")
            return True

    def reconnect(self):
        logging.info('bladder called reconnect.')
        if hasattr(self, 'port') and self.port is not None:
            try:
                logging.debug('bladder closing existing port.')
                self.port.close()
                self.state_watcher.bladder_disconnected()
                connection = look_for_device('B')
                if connection:
                    logging.info("reconnected to serialbladder")
                    self.port = connection
                    for command in self.remembered_commands_since_clear:
                        self.command_queue.put(command)
            except Exception:
                logging.error("serialbladder::reconnect exception: ")
                
        else:
            logging.info('bladder had no port to close on reconnect.')
            try:
                self.port = None
                connection = look_for_device('B')
                if connection:
                    self.port = connection
            except serial.serialutil.SerialException:
                logging.error('reconnection exception for bladder')