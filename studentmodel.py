import logging
import os

import sqlite3

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSimBeta'


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

    def save_to_db(self, user_name, student_id, time_in):
        db_conn = self.connect()
        db_conn.text_factory = str
        c = db_conn.cursor()

        sql_create_student_table = """CREATE TABLE IF NOT EXISTS student (
        user_name text NOT NULL,
        student_id text NOT NULL);"""

        self.create_table(db_conn, sql_create_student_table)

        stmt = '''
            INSERT INTO student
            (user_name, student_id)
            VALUES (?, ?)
        '''
        c.execute(stmt, (user_name, student_id))
        try:
            db_conn.commit()
            logging.debug('db updated')
        except:
            logging.debug('Could not save student_info for ' + user_name)
            db_conn.rollback()
        db_conn.close()

    def get_all(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT user_name, student_id
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

    ##add loop to check for password and id in list of entries

    def get_by_student_id(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT user_name, student_id
            FROM student
            WHERE student_id=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()

            student = [list(elem) for elem in row]

            user_name = student[0][0]
            student_id = student[0][1]

            db_conn.close()
            return user_name, student_id

        except Exception as e:
            logging.debug('could not get student by id entered.')
            pass