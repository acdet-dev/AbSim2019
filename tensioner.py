#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import threading
import time
import serial
import queue as Queue
from serialport import look_for_device
import logging
from gi.repository import GObject
GObject.threads_init()
import observer


class Tensioner(threading.Thread):
    """Communicates with the tensioner Arduino"""
    def __init__(self, command_queue, state_watcher, port=None):
        threading.Thread.__init__(self)
        self.daemon = True

        self.commands = {
            'save': 'p\n',
            'increase_tension': '.\n',
            'decrease_tension': ',\n',
            'enable_adjustment': 'e\n',
            'disable_adjustment': 'd\n',
            'status': 's\n',
            'who_are_you': 'r\n',
        }

        self.command_queue = command_queue
        self.state_watcher = state_watcher

        if port is not None:
            self.port = port
            self.state_watcher.tensioner_connected() #connects tensioner
            logging.debug('tensioner connected')

        self.delay = False
    
    def disconnect(self):
        try:
            time.sleep(1)
            logging.debug('disconnecting tensioner')
            self.port.close()
            self.state_watcher.tensioner_disconnected()
        except(OSError, serial.serialutil.SerialException):
            logging.debug('tensioner has no ports to close')

    def run(self):
        i = 1
        while not self.delay:
            if hasattr(self, 'port') and self.port is not None:
                command = self.check_for_command()
                if command:
                    self.handle_command(command)
                else:
                    time.sleep(0.3)
                time.sleep(1)
            else:
                logging.debug('leaving first loop of run')
                time.sleep(1)
                while i < 4:
                    self.reconnect()
                    i = i+1
                    time.sleep(1)
                self.state_watcher.tensioner_is_idle()
                self.state_watcher.tensioner_disconnected()

                self.delay = True
                
    def check_for_command(self):
        command = 0
        try:
            command = self.command_queue.get(True, 1)
        except Queue.Empty:
            pass
        except Exception:
            logging.debug("tensioner::check_for_command unexpected exception")
        return command
            
    def handle_command(self, command):
        try:
            if hasattr(self, 'port'):
                if command:
                    self.port.flush()
                    self.handler(command)
                    self.alert_when_idle()
            else:
                if command:
                    self.alert_when_idle()
        except Exception:
            logging.debug('encountered exception in command handling.')
            if not self.connection_is_alive():
                self.reconnect()
                if self.connection_is_alive():
                    self.state_watcher.tensioner_connected()
                    if command:
                        self.handle_command(command)
                else:
                    self.state_watcher.tensioner_disconnected()
                    
    def handler(self, command_name):
        if command_name in self.commands:
            self.send_command(command_name)
        else:
            logging.debug("tensioner.handler does not recognize command.")
                
    def send_command(self, command):
        if hasattr(self, 'port') and self.port is not None:
            try:
                self.port.write((self.commands.get(command)).encode())
                if command in ('enable_adjustment', 'increase_tension', 'decrease_tension'):
                    self.state_watcher.tensioner_is_busy()
                    self.alert_when_idle()
            except Exception:
                logging.debug("tensioner::send_command exception")
                if not self.connection_is_alive():
                    self.reconnect()
                    if self.connection_is_alive():
                        self.state_watcher.tensioner_connected()
                else:
                    self.state_watcher.tensioner_disconnected()
                    time.sleep(2)
            
    def alert_when_idle(self, startup=False):
        idle = False
        while not idle:
            if hasattr(self, 'port') and self.port is not None:
                if not startup:
                    command = self.check_for_command()
                    self.handle_command(command)
                    time.sleep(0.5)
                try:
                    self.port.flushInput()
                    self.send_command('status')
                    time.sleep(0.5)
                    in_line1 = self.port.readline()
                    idle = bool('Idle' in in_line1.decode('utf-8'))
                except Exception as e:
                    logging.debug("tensioner is trying to do things...")
                    logging.debug(e)
                    pass
            time.sleep(1)
        self.state_watcher.tensioner_is_idle()

    def tensioner_home_stop(self):
        self.delay = True
        logging.debug('tensioner home stop called')
        logging.debug('called tensioner home stop')
        command = self.check_for_command()
        self.handle_command(command)
        time.sleep(3)
        self.disconnect()

    def connection_is_alive(self):
        try:
            self.port.flushInput()
            self.port.write((self.commands.get('who_are_you')).encode())
            in_line1 = self.port.readline()
            return 't' in in_line1
        except Exception as e:
            time.sleep(1)
            logging.debug("connection_is_alive exception")
            logging.debug(e)
            return False

    def reconnect(self):
        logging.debug('Tensioner attempting Reconnection.')
        if hasattr(self, 'port') and self.port is not None:
            self.port.close()
            self.port = None
            connection = look_for_device('T')
            if connection:
                self.port = connection
                try:
                    time.sleep(1)
                    self.port.flush()
                    self.state_watcher.tensioner_connected()
                except Exception as e:
                    logging.debug("Couldn't connect to tensioner")
                    logging.debug(e)
