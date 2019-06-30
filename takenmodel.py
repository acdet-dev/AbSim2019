import logging
import os

import sqlite3

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSimBeta'

class TakenModel:
    def __init__(self, db_filename=app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename

    def connect(self):
        return sqlite3.connect(self.db_filename)

    def create_table(self, conn, create_table_sql):
        try:
            c = conn.cursor()
            c.execute(create_table_sql)
        except Exception:
            pass
            logging.debug('AbSim could not create taken exams database table.')

    def save_to_db(self, student_id, exam_title, score, correct, total, timein):
        db_conn = self.connect()
        db_conn.text_factory = str
        c = db_conn.cursor()

        sql_create_assessed_table = """CREATE TABLE IF NOT EXISTS assessed (
        student_id text NOT NULL,
        exam_title text NOT NULL,
        score text NOT NULL,
        correct text NOT NULL,
        total text NOT NULL,
        timein text NOT NULL);"""

        self.create_table(db_conn, sql_create_assessed_table)

        stmt = '''
            INSERT INTO assessed
            (student_id, exam_title, score, correct, total, timein)
            VALUES (?, ?, ?, ?, ?, ?)
        '''
        c.execute(stmt, (student_id, exam_title, score, correct, total, timein))
        try:
            db_conn.commit()
            logging.debug('taken exams db updated')
        except:
            logging.debug('Could not save assessment for ' + student_id + ' at ')
            db_conn.rollback()
        db_conn.close()

    def delete_rows(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()
        droptablestatement = "DELETE FROM assessed WHERE exam_title=?"

        try:
            c.execute(droptablestatement, (key,))
            db_conn.commit()
        except Exception:
            logging.debug('Failed to delete taken exam info.')
            pass

        db_conn.close()

    def get_all(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT student_id, exam_title, score, correct, total, timein
            FROM assessed
        '''
        try:
            c.execute(stmt)
            tuple_list = c.fetchall()
            assessed_list = [list(elem) for elem in tuple_list]
            db_conn.close()
            return assessed_list

        except Exception:
            # i18n - print statement
            logging.debug('Could not get all assessments')
            assessed_list = []
            db_conn.close()
            return None

    # add loop to check for password and id in list of entries

    def get_by_score_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT student_id, exam_title, score, correct, total, timein
            FROM assessed
            WHERE student_id=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()
            assessed = [list(elem) for elem in row]
            logging.debug('Got assessment by score_id!')
            db_conn.close()
            return assessed

        except Exception:
            logging.debug('Could not get assessment by score_id.')
            pass