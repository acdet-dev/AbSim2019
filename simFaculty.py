import viewPerformance
from simLabels import construct_markup
import splashscreen
import testCreator
import managestudents
import menu
from aStringResources import AStringResources

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib


class SimFaculty(Gtk.Window, menu.MenuBar):
    def __init__(self, usertype='', name='', password=''):
        self.usertype = usertype
        self.name = name
        self.password = password
        self.string_resources = AStringResources("sim_screen_faculty_2").get_by_identifier()

        Gtk.Window.__init__(self, title="AbSim")
        self.set_icon_from_file('icon.ico')
        self.maximize()

        box = self.build_bar()

        widget = self.build_logo(box)

        self.add_buttons(widget)

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

    def build_logo(self, widget):
        logo = Gtk.Image()
        logo.set_from_file('img/acdet-logo.gif')

        widget.pack_start(logo, False, False, 0)

        return widget

    def add_buttons(self, widget):

        button_table = Gtk.Table(rows=3, columns=2)
        button_table.set_border_width(50)
        button_table.set_col_spacings(30)
        button_table.set_row_spacings(30)
        widget.pack_start(button_table, False, False, 10)

        class_button = self.build_button(self.string_resources["add_students_button"])
        class_button.connect('clicked', self.add_class)
        button_table.attach(class_button, 0, 1, 1, 2, xoptions=False, yoptions=False)

        class_explanation = Gtk.Label()
        label_text = self.string_resources["add_students_description"]
        label_pre_mark = construct_markup(label_text, font_size=20)
        class_explanation.set_markup(label_pre_mark)
        button_table.attach(class_explanation, 1, 2, 1, 2)

        create_button = self.build_button(self.string_resources["create_button"])
        create_button.connect('clicked', self.create_exams)
        button_table.attach(create_button, 0, 1, 2, 3, xoptions=False, yoptions=False)

        create_explanation = Gtk.Label()
        label_text = self.string_resources["create_description"]
        label_pre_mark = construct_markup(label_text, font_size=20)
        create_explanation.set_markup(label_pre_mark)
        button_table.attach(create_explanation, 1, 2, 2, 3)

        score_button = self.build_button(self.string_resources["view_button"])
        score_button.connect('clicked', self.view_performance)
        button_table.attach(score_button, 0, 1, 3, 4, xoptions=False, yoptions=False)

        score_explanation = Gtk.Label()
        label_text = self.string_resources["view_description"]
        label_pre_mark = construct_markup(label_text, font_size=20)
        score_explanation.set_markup(label_pre_mark)
        button_table.attach(score_explanation, 1, 2, 3, 4)

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

    def add_class(self, widget):
        self.setup_transfer()
        managestudents.ManageStudents(self.name, self.password)
        self.finish_transfer()

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
