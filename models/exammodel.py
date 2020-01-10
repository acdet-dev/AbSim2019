import logging
import os
import sqlite3
from resources.aStringResources import AStringResources

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2019'


class ExamModel:
    def __init__(self, db_filename=app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename
        self.string_resources = AStringResources("exam_model").get_by_identifier()

    def connect(self):
        return sqlite3.connect(self.db_filename)

    def create_table(self, conn, create_table_sql):
        try:
            c = conn.cursor()
            c.execute(create_table_sql)
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('Could not create exam data table.')
            logging.debug(e)

    def delete_by_exam_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = "DELETE FROM exam WHERE exam_name=?"

        try:
            c.execute(stmt, (key,))
            db_conn.commit()
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('Could not delete exam data table row.')
            logging.debug(e)
            db_conn.rollback()

        c.close()
        db_conn.close()

    def save_to_db(self, win, exam_name, case_list, title_list, time_in):
        from messages import sim_message
        if exam_name != ''.encode('utf-8'):
            db_conn = self.connect()
            db_conn.text_factory = str
            c = db_conn.cursor()

            sql_create_exam_table = """CREATE TABLE IF NOT EXISTS exam (
            exam_name text NOT NULL,
            case_list text NOT NULL,
            title_list text NOT NULL);"""

            self.create_table(db_conn, sql_create_exam_table)

            stmt = '''
                INSERT INTO exam
                (exam_name, case_list, title_list)
                VALUES (?, ?, ?)
            '''
            try:
                c.execute(stmt, (exam_name, case_list, title_list))
                db_conn.commit()
                logging.debug('exam db updated')
                sim_message(win, info_string=self.string_resources["success"],
                            secondary_text=self.string_resources["success_explanation"])
            except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
                logging.debug(e)
                sim_message(win, info_string=self.string_resources["failure"],
                            secondary_text=self.string_resources["failure_explanation_1"])
                db_conn.rollback()
            c.close()
            db_conn.close()

        else:
            sim_message(win, info_string=self.string_resources["failure"],
                        secondary_text=self.string_resources["failure_explanation_2"])

    def get_all(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT exam_name, case_list, title_list
            FROM exam
        '''
        try:
            c.execute(stmt)
        except (sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            # i18n - print statement
            logging.debug('Could not get all assessments')
            logging.debug(e)

        tuple_list = c.fetchall()
        exam_list = [list(elem) for elem in tuple_list]
        c.close()
        db_conn.close()

        return exam_list

    def get_by_exam_id(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT exam_name, case_list, title_list
            FROM exam
            WHERE exam_name=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key,))
            row = c.fetchall()
            faculty = [list(elem) for elem in row]
            title = faculty[0][0]
            case_info = faculty[0][1]
            title_info = faculty[0][2]

        except (IndexError, sqlite3.InterfaceError, sqlite3.OperationalError) as e:
            logging.debug('Could not get exams by exam_name')
            logging.debug(e)
            title = ''
            case_info = ''
            title_info = ''

        c.close()
        db_conn.close()

        return title, case_info, title_info
