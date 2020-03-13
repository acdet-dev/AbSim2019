import logging
import os

import sqlite3

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2020'


class StudentModel:
    def __init__(self, db_filename=app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename

    def connect(self):
        return sqlite3.connect(self.db_filename)

    def create_table(self, conn, create_table_sql):
        try:
            c = conn.cursor()
            c.execute(create_table_sql)
            logging.debug('Table created for database file.')
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('could not create table for database file')
            pass

    def save_to_db(self, section, user_last, user_first, student_id, timestr):
        db_conn = self.connect()
        db_conn.text_factory = str
        c = db_conn.cursor()

        sql_create_student_table = """CREATE TABLE IF NOT EXISTS student (
        section text NOT NULL,
        user_last text NOT NULL,
        user_first text NOT NULL,
        student_id text NOT NULL);"""

        self.create_table(db_conn, sql_create_student_table)

        stmt = '''
            INSERT INTO student
            (section, user_last, user_first, student_id)
            VALUES (?, ?, ?, ?)
        '''

        try:
            c.execute(stmt, (section, user_last, user_first, student_id))
            db_conn.commit()
            logging.debug('db updated')
        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Could not save student_info for ' + user_last)
            db_conn.rollback()
        c.close()
        db_conn.close()

    def get_all(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT section, user_last, user_first, student_id
            FROM student
        '''
        try:
            c.execute(stmt)
            tuple_list = c.fetchall()
            student_list = [list(elem) for elem in tuple_list]

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            # i18n - print statement
            logging.debug('Could not get all assessments')
            student_list = []

        c.close()
        db_conn.close()

        return student_list

    def update_by_section_id(self, var1, var2):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            UPDATE student
            SET section=?
            WHERE section=?
        '''

        try:
            c.execute(stmt, (var1, var2))
            db_conn.commit()

        except (IndexError, sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug(e)
            db_conn.rollback()

        c.close()
        db_conn.close()

    def get_by_student_id(self, key1, key2):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT section, user_last, user_first, student_id
            FROM student
            WHERE student_id=? and section=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key1, key2))
            row = c.fetchall()

            student = [list(elem) for elem in row]

            section = student[0][0]
            user_last = student[0][1]
            user_first = student[0][2]
            student_id = student[0][3]

        except (IndexError, sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('could not get student by id entered.')
            logging.debug(e)
            section = ''
            user_last = ''
            user_first = ''
            student_id = ''

        c.close()
        db_conn.close()

        return section, user_last, user_first, student_id

    def get_by_section(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT student_id
            FROM student
            WHERE section=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()

            student = [list(elem) for elem in row]

        except sqlite3.InterfaceError as e:
            logging.debug(e)
            student = []

        c.close()
        db_conn.close()

        return student

    def get_all_by_section(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT user_last, user_first, student_id
            FROM student
            WHERE section=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()

            student = [list(elem) for elem in row]

        except sqlite3.InterfaceError as e:
            logging.debug(e)
            student = []

        c.close()
        db_conn.close()

        return student

    def delete_by_section(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = "DELETE FROM student WHERE section=?"

        try:
            c.execute(stmt, (key,))
            db_conn.commit()
        except sqlite3.InterfaceError:
            logging.debug('Could not delete student data table row.')
            db_conn.rollback()

        c.close()
        db_conn.close()

    def delete_by_student_id(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()
        stmt = "DELETE FROM student WHERE student_id=?"

        try:
            c.execute(stmt, (key,))
            db_conn.commit()
        except sqlite3.InterfaceError:
            logging.debug('Could not delete student data table row.')
            db_conn.rollback()

        c.close()
        db_conn.close()
