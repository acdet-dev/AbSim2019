import logging
from i18ntrans2 import _
import time
from sim import UserType
import splashscreen
import dbmigrator
from menu import MenuBar
from simLabels import construct_markup
from simLogin import get_user_pw
from messages import sim_message
import facultyinfomodel

from Levenshtein import distance
import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib


class DefineUser(Gtk.Window, MenuBar):
    def __init__(self):

        # Initiate Logging

        logging.debug('Welcome to AbSim!')

        # Opening window for AbSim that allows faculty to create a profile and login.
        Gtk.Window.__init__(self, title="AbSim")
        self.set_icon_from_file("icon.ico")
        self.maximize()

        # Using inherited build_bar method from MenuBar to add menu bar to window
        box = self.build_bar()

        # Let user know that menubar has been created and translations have gone smoothly
        logging.debug('i18n successful. Menu bar successfully created')

        widget = self.build_logo(box)

        self.add_buttons(widget)

    def build_logo(self, widget):
        # Add logo to menu box widget
        logo = Gtk.Image()

        logo.set_from_file('img/acdet-logo.gif')

        widget.pack_start(logo, False, False, 0)

        return widget

    def add_buttons(self, widget):
        # add Student and Faculty Buttons
        use_label = Gtk.Label()
        # TRANSLATORS Be careful to keep 'size' and 'font' tags.
        # TRANSLATORS However, you can change the size of text with these by a small amount
        # TRANSLATORS to adjust for fitting text on screen.
        label_text = _(u"Welcome to Absim!")
        label_pre_mark = construct_markup(label_text, font_size=24)
        use_label.set_markup(label_pre_mark)
        widget.pack_start(use_label, False, False, 0)

        button_table = Gtk.Table(rows=4, columns=2)
        button_table.set_border_width(50)
        button_table.set_col_spacings(30)
        button_table.set_row_spacings(30)
        widget.pack_start(button_table, False, False, 10)

        faculty_button = self.build_button(_(u"Faculty"))
        faculty_button.connect('clicked', self.add_faculty)
        button_table.attach(faculty_button, 0, 1, 1, 2, xoptions=False, yoptions=False)

        faculty_explanation = Gtk.Label()
        label_text = _(u"Click here to configure AbSim and create assessments")
        label_pre_mark = construct_markup(label_text, font_size=20)
        faculty_explanation.set_markup(label_pre_mark)
        button_table.attach(faculty_explanation, 1, 2, 1, 2)

        student_button = self.build_button(_(u"Student"))
        student_button.connect('clicked', self.student)
        button_table.attach(student_button, 0, 1, 2, 3, xoptions=False, yoptions=False)

        student_explanation = Gtk.Label()
        label_text = _(u"Demonstrate proficiency in abdominal palpation through practice and assessments")
        label_pre_mark = construct_markup(label_text, font_size=20)
        student_explanation.set_markup(label_pre_mark)
        button_table.attach(student_explanation, 1, 3, 1, 6)

        self.add(widget)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        lt = label_text
        lt_pre_mark = construct_markup(lt, font_size=20)
        label.set_markup(lt_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

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

    def setup_transfer(self):
        self.splash_screen = splashscreen.SplashScreen()
        self.splash_screen.show_all()
        while Gtk.events_pending():
            Gtk.main_iteration()

    def finish_transfer(self):
        self.splash_screen.hide()
        self.close_menu()

    def add_faculty(self, widget):
        flag = self.check_info()
        if flag == 'no':

            initial_key = get_user_pw(self, _(u"Please enter the AbSim's initial key to add faculty login"),
                                               _(u"AbSim Initial Key"), flag='initial')
            if initial_key == '227462':
                credentials = get_user_pw(self, _(u"Please enter a user name and password"), _(u"Add Faculty"),
                                          flag='add')

                if credentials:
                    faculty_id = credentials[0].encode('utf-8')
                    faculty_pw = credentials[1].encode('utf-8')
                    self.save_info(faculty_id.strip(), faculty_pw.strip())

                    sim_message(self, info_string=_(u"Faculty Added Successfully"),
                                        secondary_text=_(u"Click Faculty to Login."))

                else:
                    sim_message(self, info_string=_(u"Faculty NOT Added"),
                                secondary_text=_(u"Please Re-Enter the Initial Key."))

            else:
                sim_message(self, info_string=_(u"Faculty NOT Added"),
                                      secondary_text=_(u"Please Re-Enter the Initial Key."))
        else:
            credentials = get_user_pw(self, _(u"Please enter your user name and password"), _(u"Faculty Login"))
            try:
                self.get_info(credentials[1])

                if self.faculty:
                    try:
                        # distance(value, str(book['volumeInfo']['title']).lower()) <= 3]

                        if distance(credentials[0], self.faculty[0].decode()) < 1 and distance(credentials[1],
                                                                                     self.faculty[1].decode()) < 1:
                            self.setup_transfer()
                            UserType('faculty', credentials[0], credentials[1])
                            self.finish_transfer()
                        else:
                            sim_message(self, info_string=_(u"Login Failed"),
                                                  secondary_text=_(u"Username and Password do not match our records."))
                            pass
                    except TypeError as e:
                        pass
                else:
                    sim_message(self, info_string=_(u"Login Failed"),
                                          secondary_text=_(u"Username and Password do not match our records."))
                    pass
            except TypeError:
                sim_message(self, info_string=_(u"Login Failed"),
                            secondary_text=_(u"No info provided or Cancel clicked."))
                logging.debug('No info provided or Cancel received. No info to grab.')
                pass

    def student(self, widget):
        self.setup_transfer()
        UserType('student')
        self.finish_transfer()

    def close_menu(self):
        self.handler_block(self.destroy_signal_handler)
        self.destroy()


if __name__ == '__main__':
    splash_screen = splashscreen.SplashScreen()
    splash_screen.show_all()

    while Gtk.events_pending():
        Gtk.main_iteration()

    # Perform DB migration to make sure we have the newest version
    dbmigrator.DBMigrator()

    win = DefineUser()
    splash_screen.hide()
    Gtk.main()