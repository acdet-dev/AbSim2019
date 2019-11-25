import logging
from i18ntrans2 import _
import admin
import viewAssignments
from simLabels import construct_markup
import splashscreen
import filechooser
import viewPerformance
import menu
import testCreator

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib

from Levenshtein import distance

class UserType(Gtk.Window, menu.MenuBar):
    def __init__(self, usertype='', name='', password=''):
        self.usertype = usertype
        self.name = name
        self.password = password

        Gtk.Window.__init__(self, title="AbSim")
        self.set_icon_from_file('icon.ico')
        self.maximize()

        box = self.build_bar()

        widget = self.build_logo(box)

        if self.usertype == 'student':
            self.add_buttons(widget)
        else:
            self.add_f_buttons(widget)

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

    def build_logo(self, widget):
        logo = Gtk.Image()
        logo.set_from_file('img/acdet-logo.gif')

        widget.pack_start(logo, False, False, 0)

        return widget

    def add_f_buttons(self, widget):
        use_label = Gtk.Label()
                              # TRANSLATORS Be careful to keep 'size' and 'font' tags.
                              # TRANSLATORS However, you can change the size of text with these by a small amount
                              # TRANSLATORS to adjust for fitting text on screen.
        label_text = _(u'Welcome to AbSim!')
        label_pre_mark = construct_markup(label_text, font_size=24)
        use_label.set_markup(label_pre_mark)
        widget.pack_start(use_label, False, False, 0)

        button_table = Gtk.Table(rows=4, columns=2)
        button_table.set_border_width(50)
        button_table.set_col_spacings(30)
        button_table.set_row_spacings(30)
        widget.pack_start(button_table, False, False, 10)       

        config_button = self.build_button(_(u"Configure AbSim"))
        config_button.connect('clicked', self.config)
        button_table.attach(config_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        config_explanation = Gtk.Label()
        label_text = _(u"Customize Sensor Pad Pressure Settings")
        label_pre_mark = construct_markup(label_text, font_size=20)
        config_explanation.set_markup(label_pre_mark)
        button_table.attach(config_explanation, 1, 2, 0, 1)

        class_button = self.build_button(_(u"Add Students"))
        class_button.connect('clicked', self.add_class)
        button_table.attach(class_button, 0, 1, 1, 2, xoptions=False, yoptions=False)

        class_explanation = Gtk.Label()
        label_text = _(u"Provide AbSim Student Information")
        label_pre_mark = construct_markup(label_text, font_size=20)
        class_explanation.set_markup(label_pre_mark)
        button_table.attach(class_explanation, 1, 2, 1, 2)

        create_button = self.build_button(_(u"Create Exams"))
        create_button.connect('clicked', self.create_exams)
        button_table.attach(create_button, 0, 1, 2, 3, xoptions=False, yoptions=False)

        create_explanation = Gtk.Label()
        label_text = _(u"Construct and Assign Custom Exams")
        label_pre_mark = construct_markup(label_text, font_size=20)
        create_explanation.set_markup(label_pre_mark)
        button_table.attach(create_explanation, 1, 2, 3, 4)

        score_button = self.build_button(_(u"View Student Performance"))
        score_button.connect('clicked', self.view_performance)
        button_table.attach(score_button, 0, 1, 3, 4, xoptions=False, yoptions=False)

        score_explanation = Gtk.Label()
        label_text = _(u"View Student Scores on Assigned Exams")
        label_pre_mark = construct_markup(label_text, font_size=20)
        score_explanation.set_markup(label_pre_mark)
        button_table.attach(score_explanation, 1, 2, 2, 3)

        self.add(widget)
        self.show_all()
        #box.show_all()

    def add_buttons(self, widget):
        use_label = Gtk.Label()
                              # TRANSLATORS Be careful to keep 'size' and 'font' tags.
                              # TRANSLATORS However, you can change the size of text with these by a small amount
                              # TRANSLATORS to adjust for fitting text on screen.
        label_text = _(u"Welcome to AbSim!")
        label_pre_mark = construct_markup(label_text, font_size=24)
        use_label.set_markup(label_pre_mark)
        widget.pack_start(use_label, False, False, 0)

        button_table = Gtk.Table(rows=4, columns=2)
        button_table.set_border_width(50)
        button_table.set_col_spacings(30)
        button_table.set_row_spacings(30)
        widget.pack_start(button_table, False, False, 10)

        instruction_button = self.build_button(_(u"Self-directed Learning"))
        instruction_button.connect('clicked', self.learning)
        button_table.attach(instruction_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        instruction_explanation = Gtk.Label()
        label_text = _(u"Learn and Practice Abdominal Palpation")
        label_pre_mark = construct_markup(label_text, font_size=20)
        instruction_explanation.set_markup(label_pre_mark)
        button_table.attach(instruction_explanation, 1, 2, 0, 1)

        assigned_assessment_button = self.build_button(_(u"View Assignments"))
        assigned_assessment_button.connect('clicked', self.assigned_assessment)
        button_table.attach(assigned_assessment_button, 0, 1, 1, 2, xoptions=False, yoptions=False)

        assigned_assessment_explanation = Gtk.Label()
        label_text = _(u"Take Exams and Receive Feedback")
        label_pre_mark = construct_markup(label_text, font_size=20)
        assigned_assessment_explanation.set_markup(label_pre_mark)
        button_table.attach(assigned_assessment_explanation, 1, 2, 1, 2)

        self.add(widget)
        self.show_all()
        #box.show_all()

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        lt = label_text
        label_pre_mark = construct_markup(lt, font_size=20)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def setup_transfer(self):
        self.splash_screen = splashscreen.SplashScreen()
        self.splash_screen.show_all()
        while Gtk.events_pending():
            Gtk.main_iteration()

    def finish_transfer(self):
        self.splash_screen.hide()
        self.close_menu()

    def finish_file_transfer(self):
        self.splash_screen.hide()

    def config(self, widget):
        self.setup_transfer()
        admin.Admin(self.name, self.password)
        self.finish_transfer()

    def learning(self, widget):
        # Is this still thread-safe?
        # do this for exam?
        Gdk.threads_enter()
        self.setup_transfer()
        menu.MenuWindow()
        self.finish_transfer()
        Gdk.threads_leave()

    def get_info(self, student_id):
        import studentmodel

        self.student_model = studentmodel.StudentModel()
        # self.allRows = self.faculty_model.get_all(faculty_pw)
        self.student = self.student_model.get_by_student_id(student_id)

    def assigned_assessment(self, widget):
        from simLogin import get_user_pw
        from messages import sim_message

        credentials = get_user_pw(self, _(u"Please enter your ID"), _(u"Student Login"), flag='initial')
        if credentials:
            self.get_info(credentials)

            if self.student:

                try:
                    # distance(value, str(book['volumeInfo']['title']).lower()) <= 3]
                    if distance(credentials, self.student[2]) < 1:
                        logging.debug('Beginning Exam')
                        self.setup_transfer()
                        viewAssignments.ViewAssignments(self.student[0], self.student[1], credentials)
                        self.finish_transfer()
                    else:
                        logging.debug('Not beginning exam. Login failure.')
                        sim_message(self, info_string=_(u"Login Failed"),
                                              secondary_text=_(u"Username and Password do not match our records."))
                        pass
                except TypeError as e:
                    logging.debug('No student found. Passing to login failure message.')
                    pass
            else:
                logging.debug('No student in record.')
                sim_message(self, info_string=_(u"Login Failed"),
                                      secondary_text=_(u"Username and Password do not match our records."))
                pass

        else:
            sim_message(self, info_string=_(u'Login Failed!'),
                                secondary_text=_(u'Username and Password do not match our records.'))

    def add_class(self, widget):
        self.setup_transfer()
        filechooser.FileChooserWindow()
        self.finish_file_transfer()

    def create_exams(self, widget):
        self.setup_transfer()
        testCreator.TestCreator(self.name, self.password)
        self.finish_transfer()

    def view_performance(self, widget):
        self.setup_transfer()
        viewPerformance.ViewPerformance(self.name, self.password)
        self.finish_transfer()

    def close_menu(self):
        self.handler_block(self.destroy_signal_handler)
        self.destroy()