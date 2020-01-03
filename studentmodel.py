import logging
import os

import sqlite3

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2019'


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
        except Exception as e:
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
        except:
            logging.debug('Could not save student_info for ' + user_last)
            db_conn.rollback()
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
        except:
            # i18n - print statement
            logging.debug('Could not get all assessments')

        tuple_list = c.fetchall()
        student_list = [list(elem) for elem in tuple_list]
        db_conn.close()

        return student_list

    # add loop to check for password and id in list of entries

    def get_by_student_id(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT section, user_last, user_first, student_id
            FROM student
            WHERE student_id=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()

            student = [list(elem) for elem in row]

            section = student[0][0]
            user_last = student[0][1]
            user_first = student[0][2]
            student_id = student[0][3]

            db_conn.close()
            return section, user_last, user_first, student_id

        except Exception as e:
            logging.debug('could not get student by id entered.')
            pass

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
            db_conn.close()
            return student

        except sqlite3.InterfaceError as e:
            logging.debug(e)
            pass
