import logging
import os

import sqlite3

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2019'


class TakenModel:
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
            logging.debug('AbSim could not create taken exams database table.')

    def save_to_db(self, student_id, exam_title, ab_score, ddx_score, ab_answers, ddx_answers, ab_et, ddx_et, timein,
                   section):
        db_conn = self.connect()
        db_conn.text_factory = str
        c = db_conn.cursor()

        sql_create_assessed_table = """CREATE TABLE IF NOT EXISTS assessed (
        student_id text NOT NULL,
        exam_title text NOT NULL,
        ab_score text NOT NULL,
        ddx_score text NOT NULL,
        ab_answers text NOT NULL,
        ddx_answers text NOT NULL,
        ab_et text NOT NULL,
        ddx_et text NOT NULL,
        timein text NOT NULL,
        section text NOT NULL);"""

        self.create_table(db_conn, sql_create_assessed_table)

        stmt = '''
            INSERT INTO assessed
            (student_id, exam_title, ab_score, ddx_score, ab_answers, ddx_answers, ab_et, ddx_et, timein, section)
            VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
        '''
        c.execute(stmt, (student_id, exam_title, ab_score, ddx_score, ab_answers, ddx_answers, ab_et, ddx_et, timein,
                         section))
        try:
            db_conn.commit()
            logging.debug('taken exams db updated')
        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Could not save assessment for ' + student_id + ' at ')
            db_conn.rollback()

        c.close()
        db_conn.close()

    def delete_rows(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()
        droptablestatement = "DELETE FROM assessed WHERE exam_title=?"

        try:
            c.execute(droptablestatement, (key,))
            db_conn.commit()
        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Failed to delete taken exam info.')
            db_conn.rollback()

        c.close()
        db_conn.close()

    def get_all(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT student_id, exam_title, ab_score, ddx_score, ab_answers, ddx_answers, ab_et, ddx_et, timein, section
            FROM assessed
        '''
        try:
            c.execute(stmt)
            tuple_list = c.fetchall()
            assessed_list = [list(elem) for elem in tuple_list]
            return assessed_list

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            # i18n - print statement
            logging.debug('Could not get all assessments')
            return None

        c.close()
        db_conn.close()

    def get_by_score_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT student_id, exam_title, ab_score, ddx_score, ab_answers, ddx_answers, ab_et, ddx_et, timein, section
            FROM assessed
            WHERE student_id=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()
            assessed = [list(elem) for elem in row]
            logging.debug('Got assessment by score_id!')

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Could not get assessment by score_id.')
            assessed = []

        c.close()
        db_conn.close()

        return assessed

    def get_by_exam_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT student_id, exam_title, ab_score, ddx_score, ab_answers, ddx_answers, ab_et, ddx_et, timein, section
            FROM assessed
            WHERE exam_title=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()
            assessed = [list(elem) for elem in row]
            logging.debug('Got assessment by score_id!')

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Could not get assessment by score_id.')
            assessed = []

        c.close()
        db_conn.close()

        return assessed

    def get_by_exam_section_id(self, key1, key2):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT student_id, exam_title, ab_score, ddx_score, ab_answers, ddx_answers, ab_et, ddx_et, timein, section
            FROM assessed
            WHERE section=? AND exam_title=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key1, key2))
            row = c.fetchall()
            assessed = [list(elem) for elem in row]
            logging.debug('Got assessment by score_id!')

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Could not get assessment by score_id.')
            assessed = []

        c.close()
        db_conn.close()

        return assessed
