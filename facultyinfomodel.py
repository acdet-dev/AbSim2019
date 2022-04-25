import os
import sqlite3
import logging

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2020_Zh_Cn'


class FacultyInfoModel:
    def __init__(self, db_filename=app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename

    def connect(self):
        logging.debug('Establishing connection to database file.')
        return sqlite3.connect(self.db_filename)
    
    def create_table(self, conn, create_table_sql):
        try:
            c = conn.cursor()
            c.execute(create_table_sql)
            logging.debug('Table created for database file.')
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('could not create table for database.')
            pass

    def save_to_db(self, faculty_id, faculty_pw, time_in):
        db_conn = self.connect()
        db_conn.text_factory = str
        c = db_conn.cursor()

        sql_create_faculty_table = """CREATE TABLE IF NOT EXISTS faculty_info (
        faculty_id text NOT NULL,
        faculty_pw text NOT NULL);"""

        self.create_table(db_conn, sql_create_faculty_table)

        stmt = '''
            INSERT INTO faculty_info
            (faculty_id, faculty_pw)
            VALUES (?, ?)
        '''
        c.execute(stmt, (faculty_id, faculty_pw))
        try:
            db_conn.commit()
            logging.debug(self.db_filename + ' updated')
        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('AbSim Could not save assessment')
            db_conn.rollback()
        c.close()
        db_conn.close()
        
    def get_all(self):
        db_conn = self.connect()
        c = db_conn.cursor()
        
        stmt = '''
            SELECT faculty_id, faculty_pw
            FROM faculty_info
        '''
        try:
            c.execute(stmt)
            tuple_list = c.fetchall()
            exam_list = [list(elem) for elem in tuple_list]

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            # i18n - print statement
            logging.debug('AbSim could not get all table entries.')
            exam_list = []

        c.close()
        db_conn.close()
        
        return exam_list

    def check_tables(self):
        db_conn = self.connect()
        c = db_conn.cursor()

        table = 'faculty_info'
        _SQL = '''
            SELECT name
            FROM sqlite_master
            WHERE type='table';
        '''
        c.execute(_SQL)
        results = c.fetchall()

        c.close()
        db_conn.close()

        results_list = [item[0] for item in results]

        if table in results_list:
            flag = 'yes'
        else:
            flag = 'no'

        return flag

    def get_by_faculty_pw(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()
        
        stmt = '''
            SELECT faculty_id, faculty_pw
            FROM faculty_info
            WHERE faculty_pw=?
        '''
        try:
            c.execute(stmt, (key.encode(),))
            row = c.fetchall()
            faculty = [list(elem) for elem in row]
            faculty_info = faculty[0]
        
        except (IndexError, sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('AbSim could not get database entry:')
            logging.debug(e)
            faculty_info = ''

        c.close()
        db_conn.close()

        return faculty_info

    def drop_table(self):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            DROP TABLE faculty_info
        '''
        try:
            c.execute(stmt)
            # i18n - print statement
            logging.debug('AbSim could not get all table entries.')

            # commit delete
            db_conn.commit()
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug("could not delete faculty info")
            logging.debug(e)
            db_conn.rollback()

        c.close()
        db_conn.close()
