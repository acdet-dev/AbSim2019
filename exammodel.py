import logging
import os
import sqlite3

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2019'


class ExamModel:
    def __init__(self, db_filename=app_data_path + '\\faculty_info.db'):
        self.db_filename = db_filename

    def connect(self):
        return sqlite3.connect(self.db_filename)

    def create_table(self, conn, create_table_sql):
        try:
            c = conn.cursor()
            c.execute(create_table_sql)
        except Exception as e:
            pass
            logging.debug('Could not create exam data table.')

    def delete_by_exam_id(self, key):

        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = "DELETE FROM exam WHERE exam_name=?"

        try:
            c.execute(stmt, (key.encode(),))
            db_conn.commit()
        except Exception:
            logging.debug('Could not delete exam data table row.')
            pass
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
                sim_message(win, info_string=_(u'Assessment Saved Successfully!'),
                            secondary_text=_(
                                u'Students may now take your assessment.'))
            except:
                logging.debug('Could not save assessment for exam')
                sim_message(win, info_string=_(u'Assessment Save Failure!'),
                            secondary_text=_(
                                u'Could not save assessment.'))
                db_conn.rollback()
            db_conn.close()

        else:
            sim_message(win, info_string=_(u'Assessment Save Failure!'),
                        secondary_text=_(u'Could not save assessment because no assessment title entered.'))

    def get_all(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT exam_name, case_list, title_list
            FROM exam
        '''
        try:
            c.execute(stmt)
        except:
            # i18n - print statement
            logging.debug('Could not get all assessments')

        tuple_list = c.fetchall()
        exam_list = [list(elem) for elem in tuple_list]
        db_conn.close()

        return exam_list

    # add loop to check for password and id in list of entries

    def get_by_exam_id(self, key):
        db_conn = self.connect()
        c = db_conn.cursor()

        stmt = '''
            SELECT case_list, title_list
            FROM exam
            WHERE exam_name=?
        '''
        try:
            # trying to match with datatype not string!
            c.execute(stmt, (key.encode(),))
            row = c.fetchall()
            faculty = [list(elem) for elem in row]
            case_info = faculty[0][0]
            title_info = faculty[0][1]
            db_conn.close()
            return case_info, title_info

        except Exception as e:
            logging.debug('Could not get exams by exam_name')
            pass