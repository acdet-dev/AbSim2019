from aStringResources import AStringResources
import logging
import time
from sim import UserType
from menuBar import MenuBar
from buildWidgets import BuildWidgets
from simLogin import get_user_pw
from messages import sim_message, sim_login_message
import facultyinfomodel

from Levenshtein import distance
import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class DefineUser(Gtk.Window, MenuBar):
    def __init__(self):

        # Initiate Logging

        logging.debug('Welcome to AbSim!')

        # initialize string resources
        self.string_resources = AStringResources("initial").get_by_identifier()
        self.login_resources = AStringResources("faculty_login").get_by_identifier()

        # Opening window for AbSim that allows faculty to create a profile and login.
        Gtk.Window.__init__(self, title="AbSim")
        self.set_icon_from_file("icon.ico")
        self.maximize()

        # Using inherited build_bar method from MenuBar to add menu bar to window
        widget = self.build_bar()

        # Let user know that menubar has been created and translations have gone smoothly
        logging.debug('i18n successful. Menu bar successfully created')

        # initialize widget building class
        bw = BuildWidgets()
        logo = bw.build_logo(img_string='img/acdet-logo.gif')

        label = bw.build_label(label_text=self.string_resources["welcome_text"])

        b_list = [self.string_resources["student_button"], self.string_resources["faculty_button"]]
        d_list = [self.string_resources["student_description"], self.string_resources["faculty_description"]]
        f_list = [self.student, self.add_faculty]
        button_table = bw.add_buttons(button_list=b_list, description_list=d_list, functions=f_list)

        widget.pack_start(logo, False, False, 0)
        widget.pack_start(label, False, False, 10)
        widget.pack_start(button_table, False, False, 0)

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        self.add(widget)
        self.show_all()

    def check_info(self):
        self.faculty_info = facultyinfomodel.FacultyInfoModel()

        flag = self.faculty_info.check_tables()
        return flag

    def get_info(self, faculty_pw):
        self.faculty_model = facultyinfomodel.FacultyInfoModel()
        self.faculty = self.faculty_model.get_by_faculty_pw(faculty_pw)

    def save_info(self, faculty_id, faculty_pw):
        # i18n - Time string left as-is
        timestr = time.strftime("%Y%m%d-%H%M%S")
        self.faculty_model = facultyinfomodel.FacultyInfoModel()

        self.faculty_model.save_to_db(faculty_id, faculty_pw, timestr)

    def add_faculty(self, widget):
        flag = self.check_info()
        if flag == 'no':

            initial_key = get_user_pw(self, self.login_resources["initial_key"],
                                               self.login_resources["initial_window_title"], flag='initial')
            if initial_key == '227462':
                credentials = get_user_pw(self, self.login_resources["enter_faculty_info"],
                                          self.login_resources["add_faculty_window_title"],
                                          flag='add')

                if credentials:
                    faculty_id = credentials[0].encode('utf-8')
                    faculty_pw = credentials[1].encode('utf-8')
                    self.save_info(faculty_id.strip(), faculty_pw.strip())

                    sim_message(self, info_string=self.login_resources["add_success_notification"],
                                secondary_text=self.login_resources["login_cleared"])

                    self.facilitate_transfer(user_type="faculty")

                else:
                    sim_message(self, info_string=self.login_resources["add_fail_notification"],
                                secondary_text=self.login_resources["restart_process"])

            else:
                sim_message(self, info_string=self.login_resources["add_fail_notification"],
                            secondary_text=self.login_resources["restart_process"])
        else:
            reset_string = ''

            credentials = get_user_pw(self, self.login_resources["login_instructions"],
                                      self.login_resources["login_dialog_title"])

            try:
                self.get_info(credentials[1])

                if self.faculty:
                    try:
                        if distance(credentials[0], self.faculty[0].decode()) < 1 \
                                and distance(credentials[1], self.faculty[1].decode()) < 1:
                            self.facilitate_transfer(user_type="faculty")
                        else:
                            reset_string = sim_login_message(self,
                                                             info_string=self.login_resources["login_fail_note"],
                                                             secondary_text=self.login_resources["login_failed_1"])
                            pass
                    except TypeError as e:
                        pass
                else:
                    reset_string = sim_login_message(self, info_string=self.login_resources["login_fail_note"],
                                                     secondary_text=self.login_resources["login_failed_1"])
                    pass
            except TypeError:
                reset_string = sim_login_message(self, info_string=self.login_resources["login_fail_note"],
                                                 secondary_text=self.login_resources["login_failed_2"])
                logging.debug('No info provided or Cancel received. No info to grab.')
                pass
            if reset_string == 'reset':
                initial_key = get_user_pw(self, self.login_resources["reset_instructions"],
                                          self.login_resources["initial_window_title"], flag='initial')
                if initial_key == '227462':
                    self.faculty_model.drop_table()
                    sim_message(self, info_string=self.login_resources["data_deletion_notification"],
                                secondary_text=self.login_resources["data_deletion_instructions"])

    def student(self, widget):
        self.facilitate_transfer("student")

    def facilitate_transfer(self, user_type=""):
        from handleTransitions import HandleTransitions

        ht = HandleTransitions(self)

        ht.setup_transfer()
        UserType(user_type)
        ht.finish_transfer()
