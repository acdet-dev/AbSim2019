import logging
from views import menuBar, buildWidgets
from aStringResources import AStringResources

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk

from Levenshtein import distance


class UserType(Gtk.Window, menuBar.MenuBar):
    def __init__(self, usertype='', name='', password=''):
        self.usertype = usertype
        self.name = name
        self.password = password

        Gtk.Window.__init__(self, title="AbSim")
        self.set_icon_from_file('icon.ico')
        self.maximize()

        widget = self.build_bar()

        bw = buildWidgets.BuildWidgets()

        logo = bw.build_logo(img_string='img/acdet-logo.gif')

        if self.usertype == 'student':
            self.string_resources = AStringResources("sim_screen_student").get_by_identifier()

            b_list = [self.string_resources["self_learning_button"], self.string_resources["view_button"]]
            d_list = [self.string_resources["self_description"], self.string_resources["view_description"]]
            f_list = [self.learning, self.assigned_assessment]

        else:
            self.string_resources = AStringResources("sim_screen_faculty").get_by_identifier()

            b_list = [self.string_resources["config_button"], self.string_resources["create_button"]]
            d_list = [self.string_resources["config_description"], self.string_resources["create_description"]]
            f_list = [self.config, self.create_exams]

        button_table = bw.add_buttons(button_list=b_list, description_list=d_list, functions=f_list)

        widget.pack_start(logo, False, False, 0)
        widget.pack_start(button_table, False, False, 0)

        self.add(widget)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

    def config(self, widget):
        from views.admin import Admin
        self.facilitate_transfer(self.usertype, self.name, self.password, new_window=Admin)

    def learning(self, widget):
        from views.menu import MenuWindow
        # Is this still thread-safe?
        # do this for exam?
        Gdk.threads_enter()
        self.facilitate_transfer(new_window=MenuWindow)
        Gdk.threads_leave()

    def get_info(self, student_id):
        from models import studentmodel

        self.student_model = studentmodel.StudentModel()
        # self.allRows = self.faculty_model.get_all(faculty_pw)
        self.student = self.student_model.get_by_student_id(student_id)

    def assigned_assessment(self, widget):
        from simLogin import get_user_pw
        from messages import sim_message
        from views.viewAssignments import ViewAssignments

        credentials = get_user_pw(self, self.string_resources["request_id"], self.string_resources["login_window"],
                                  flag='initial')
        if credentials:
            self.get_info(credentials)

            if self.student:

                try:
                    # distance(value, str(book['volumeInfo']['title']).lower()) <= 3]
                    if distance(credentials, self.student[3]) < 1:
                        logging.debug('Beginning Exam')
                        self.facilitate_transfer(self.usertype, self.student[0], self.student[1], self.student[2],
                                                 credentials, new_window=ViewAssignments)
                    else:
                        logging.debug('Not beginning exam. Login failure.')
                        sim_message(self, info_string=self.string_resources["login_fail"],
                                    secondary_text=self.string_resources["fail_description"])
                except TypeError as e:
                    logging.debug('No student found. Passing to login failure message.')
                    pass
            else:
                logging.debug('No student in record.')
                sim_message(self, info_string=self.string_resources["login_fail"],
                            secondary_text=self.string_resources["fail_description"])
                pass

        else:
            sim_message(self, info_string=self.string_resources["login_fail"],
                        secondary_text=self.string_resources["fail_description"])

    def create_exams(self, widget):
        from views.simFaculty import SimFaculty
        self.facilitate_transfer(self.usertype, self.name, self.password, new_window=SimFaculty)

    def facilitate_transfer(self, *args, new_window):
        from views.handleTransitions import HandleTransitions
        ht = HandleTransitions(self)

        ht.setup_transfer()
        new_window(*args)
        ht.finish_transfer()
