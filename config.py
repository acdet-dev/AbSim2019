#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

"""
Gets and sets default settings
"""
import logging
import json
import os


class Config:
    def __init__(self, filename='config.json'):

        self.filename = filename

        self.app_data = os.getenv('LOCALAPPDATA')

        self.app_data_path = self.app_data + '\\AbSim2020'

        self.read_config()
        self.defaults = None

    def read_config(self):
        try:
            f = open(self.app_data_path + '\\' + self.filename, 'r')
            logging.debug('reading app_data' + self.filename)

        except:
            logging.debug("Can't open file for reading: " + self.filename)
            logging.debug("Trying from sim rather than app_data")

            try:
                f = open(self.filename, 'r')
                logging.debug('reading sim' + self.filename)
            except:
                logging.debug("Can't open file for reading: " + self.filename)
                self.defaults = dict()

        if f:
            self.defaults = dict(json.load(f))
            f.close()

        return self.defaults

    def write_config(self, values_to_save):
        try:
            write_fh = open(self.app_data_path + '\\' + self.filename, 'w+')
            json.dump(values_to_save, write_fh)
            logging.debug('writing app_data')
            logging.debug('writing values to ' + self.filename)
            write_fh.close()

        except (FileNotFoundError, PermissionError):
            logging.debug("Can't open file for writing: " + self.filename)

    def get_default(self, name):
        logging.debug('getting default locale values')
        return self.defaults.get(name, None)

    def set_default(self, key=False, value=False):
        if 'key' in locals() and 'value' in locals():
            self.defaults[key] = value
            logging.debug('setting default locale values')
