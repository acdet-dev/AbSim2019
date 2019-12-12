#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

"""
Migrates database versions to the newest versions, or creates the db if none exists.
"""
import sqlite3
import logging
import os

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2019'

class DBMigrator:
    def __init__(self, db_filename = app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename
        self.db_conn = sqlite3.connect(self.db_filename)

        
        self.next_migration_functions = [
            self.migrate_to_1,
        ]
        self.migrate_to_newest()
        self.db_conn.commit()
        self.db_conn.close()
        
    def get_version(self):
        c = self.db_conn.cursor()
        c.execute('''PRAGMA user_version;''')
        return c.fetchone()[0]
        
    def migrate_to_1(self):
        c = self.db_conn.cursor()
        if self.db_filename == app_data_path + '\\faculty_info.db':
            c.execute('''
                CREATE TABLE mock_table
                (
                    faculty_id TEXT,
                    faculty_pw TEXT,
                    time_in TEXT
                )
            '''
            )
            c.execute('''PRAGMA user_version = 1;''')            
        
    def migrate_to_newest(self):
        # Every migration function needs to increment user_version last.
        # This way we can use the side effect to hit the next migration.
        newest_version = len(self.next_migration_functions)

        version = self.get_version()
        while version != newest_version:
            try:
                self.next_migration_functions[version]()
                logging.debug("Could not migrate to version " + str(version))
            except:
                logging.debug("Could not migrate to version " + str(version))
                raise
            version = self.get_version()
        logging.debug(self.db_filename + ' is up to date.')
