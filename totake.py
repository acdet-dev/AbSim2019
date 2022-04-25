import logging
import os

import sqlite3

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2020_Zh_Cn'


class ToTake:
    def __init__(self, db_filename=app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename

    def connect(self):
        return sqlite3.connect(self.db_filename)

    def create_table(self, conn, create_table_sql):
        try:
            c = conn.cursor()
            c.execute(create_table_sql)
        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            pass
            logging.debug('AbSim could not create to take exams database table.')

    def save_to_db(self, assessment_title, section_string):
        db_conn = self.connect()
        db_conn.text_factory = str
        c = db_conn.cursor()

        sql_create_assess_table = """CREATE TABLE IF NOT EXISTS to_take (
        assessment_title text NOT NULL,
        section_string text NOT NULL);"""

        self.create_table(db_conn, sql_create_assess_table)

        stmt = '''
            INSERT INTO to_take
            (assessment_title, section_string)
            VALUES (?, ?)
        '''
        c.execute(stmt, (assessment_title, section_string))
        try:
            db_conn.commit()
            logging.debug('taken exams db updated')
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('Could not save assess info')
            db_conn.rollback()
        c.close()
        db_conn.close()

    def delete_rows(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()
        droptablestatement = "DELETE FROM to_take WHERE section_string=?"

        try:
            c.execute(droptablestatement, (key,))
            db_conn.commit()
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('Failed to delete taken exam info.')
            db_conn.rollback()

        c.close()
        db_conn.close()

    def delete_by_exam_id(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()
        droptablestatement = "DELETE FROM to_take WHERE assessment_title=?"

        try:
            c.execute(droptablestatement, (key,))
            db_conn.commit()
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug(e)
            db_conn.rollback()

        c.close()
        db_conn.close()

    def get_all(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT assessment_title, section_string
            FROM to_take
        '''
        try:
            c.execute(stmt)
            tuple_list = c.fetchall()
            assessed_list = [list(elem) for elem in tuple_list]

        except (sqlite3.OperationalError, sqlite3.InterfaceError) as e:
            # i18n - print statement
            logging.debug('Could not get all assessments')
            assessed_list = []

        c.close()
        db_conn.close()

        return assessed_list

    def get_by_section_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT assessment_title
            FROM to_take
            WHERE section_string=?
        '''
        # trying to match with datatype not string!
        try:
            c.execute(stmt, (key,))
            row = c.fetchall()
            assessed = [list(elem) for elem in row]
            logging.debug('Got assessment by score_id!')
        except sqlite3.OperationalError as e:
            logging.debug(e)
            assessed = []

        c.close()
        db_conn.close()
        return assessed

    def get_by_exam_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT section_string
            FROM to_take
            WHERE assessment_title=?
        '''
        try:
            c.execute(stmt, (key,))
            row = c.fetchall()
            assigned = [list(elem)[0] for elem in row]
        except (sqlite3.OperationalError, sqlite3.InterfaceError) as e:
            logging.debug(e)
            assigned = []

        c.close()
        db_conn.close()
        return assigned

    def get_by_section_exam_id(self, key1, key2):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT assessment_title
            FROM to_take
            WHERE section_string=? AND assessment_title=?
        '''
        # trying to match with datatype not string!
        try:
            c.execute(stmt, (key1, key2))
            row = c.fetchall()
            assessed = [list(elem) for elem in row]
            logging.debug('Got assessment by score_id!')
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug(e)
            assessed = []

        c.close()
        db_conn.close()
        return assessed
