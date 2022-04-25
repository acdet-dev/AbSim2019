import logging
import os
import sqlite3
import _pickle as pickle

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2020'


class BaselineModel:
    def __init__(self, db_filename=app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename

    def connect(self):
        return sqlite3.connect(self.db_filename)

    def create_table(self, conn, create_table_sql):
        try:
            c = conn.cursor()
            c.execute(create_table_sql)
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            pass
            logging.debug('Could not create baseline data table.')

    def delete_by_exam_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = "DELETE FROM baseline WHERE exam_name=?"

        try:
            c.execute(stmt, (key,))
            db_conn.commit()
        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Could not delete baseline data table row.')
            db_conn.rollback()

        c.close()
        db_conn.close()

    def save_to_db(self, last_name, first_name, exam_name, student_id, not_up, up, down, hard, coverage, et, time_in,
                   section):
        db_conn = self.connect()
        db_conn.text_factory = str
        c = db_conn.cursor()

        sql_create_exam_table = """CREATE TABLE IF NOT EXISTS baseline (
        last_name text NOT NULL,
        first_name text NOT NULL,
        exam_name text NOT NULL,
        student_id text NOT NULL,
        not_up text NOT NULL,
        up text NOT NULL,
        down text NOT NULL,
        hard text NOT NULL,
        coverage text NOT NULL,
        et text NOT NULL,
        time_in text NOT NULL,
        section text NOT NULL);"""

        self.create_table(db_conn, sql_create_exam_table)

        stmt = '''
            INSERT INTO baseline
            (last_name, first_name, exam_name, student_id, not_up, up, down, hard, coverage, et, time_in, section)
            VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
        '''
        with open(app_data_path + 'prot2', 'wb') as pfile:
            pickle.dump(coverage, pfile, protocol=None)
            # try
        with open(app_data_path + 'prot2', 'rb') as pfile:
            pickled_coverage = pfile.read()
            c.execute(stmt, (last_name, first_name, exam_name, student_id, not_up, up, down, hard,
                             sqlite3.Binary(pickled_coverage), et, time_in, section))

            try:
                db_conn.commit()
                logging.debug('db updated')
            except (sqlite3.InterfaceError, sqlite3.OperationalError):
                logging.debug('Could not save assessment for ' + student_id + ' at ' + time_in)
                db_conn.rollback()

            c.close()
            db_conn.close()

    def get_all(self):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT last_name, first_name, exam_name, student_id, not_up, up, down, hard, coverage, et, time_in, section
            FROM baseline
        '''
        try:
            c.execute(stmt)
            tuple_list = c.fetchall()
            exam_list = [list(elem) for elem in tuple_list]

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            # i18n - logging.debug statement
            logging.debug('Could not get all assessments')
            exam_list = []

        c.close()
        db_conn.close()

        return exam_list

    def get_by_exam_student_id(self, exam_id, student_id):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT last_name, first_name, exam_name, student_id, not_up, up, down, hard, coverage, et, time_in, section
            FROM baseline
            WHERE exam_name=? AND student_id=?
        '''

        try:
            c.execute(stmt, (exam_id, student_id,))
            row = c.fetchone()
            # logging.debug(row)
            exam = [elem for elem in row]
            exam[8] = pickle.loads(row[8])
        except (IndexError, sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug("could not get by exam name and student id")
            exam = []

        c.close()
        db_conn.close()

        return exam

    def get_by_exam_id(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()
        stmt = '''
            SELECT last_name, first_name, exam_name, student_id, not_up, up, down, hard, coverage, et, time_in, section
            FROM baseline
            WHERE exam_name=?
        '''
        try:
            c.execute(stmt, (key,))
            tuple_list = c.fetchall()
            exam_list = [list(elem) for elem in tuple_list]

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            # i18n - logging.debug statement
            logging.debug('Could not get all assessments')
            exam_list = []

        c.close()
        db_conn.close()

        return exam_list

    def get_by_exam_section_id(self, key1, key2):
        db_conn = self.connect()
        c = db_conn.cursor()
        stmt = '''
            SELECT last_name, first_name, exam_name, student_id, not_up, up, down, hard, coverage, et, time_in, section
            FROM baseline
            WHERE section=? AND exam_name=?
        '''
        exam_list = []
        for key in key1:
            try:
                c.execute(stmt, (key, key2))
                tuple_list = c.fetchall()
                exam_list.extend([list(elem) for elem in tuple_list])

            except (sqlite3.InterfaceError, sqlite3.OperationalError):
                # i18n - logging.debug statement
                logging.debug('Could not get all assessments')

        c.close()
        db_conn.close()

        return exam_list

    def get_by_score_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT last_name, first_name, exam_name, student_id, not_up, up, down, hard, coverage, et, time_in, section
            FROM baseline
            WHERE student_id=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()
            baseline = [list(elem) for elem in row]
            logging.debug('Got assessment by score_id!')

        except (sqlite3.InterfaceError, sqlite3.OperationalError):
            logging.debug('Could not get assessment by score_id.')
            baseline = []

        c.close()
        db_conn.close()

        return baseline
