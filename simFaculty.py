import buildWidgets
import menuBar
from aStringResources import AStringResources

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class SimFaculty(Gtk.Window, menuBar.MenuBar):
    def __init__(self, usertype='', name='', password=''):
        self.usertype = usertype
        self.name = name
        self.password = password
        self.string_resources = AStringResources("sim_screen_faculty_2", back_flag=True).get_by_identifier()

        Gtk.Window.__init__(self, title="AbSim")
        self.set_icon_from_file('img/icon.ico')
        self.maximize()

        widget = self.build_bar()

        bw = buildWidgets.BuildWidgets()

        logo = bw.build_logo(img_string='img/acdet-logo.gif')

        b_list = [self.string_resources["add_students_button"], self.string_resources["create_button"],
                  self.string_resources["view_button"], self.string_resources["back_button"]]
        d_list = [self.string_resources["add_students_description"], self.string_resources["create_description"],
                  self.string_resources["view_description"], self.string_resources["back_description"]]
        f_list = [self.add_class, self.create_exams, self.view_performance, self.go_back]
        button_table = bw.add_buttons(button_list=b_list, description_list=d_list, functions=f_list)

        widget.pack_start(logo, False, False, 0)
        widget.pack_start(button_table, False, False, 0)

        self.add(widget)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

    def add_class(self, widget):
        from managestudents import ManageStudents
        self.facilitate_transfer(new_window=ManageStudents)

    def create_exams(self, widget):
        from testCreation import TestCreation
        self.facilitate_transfer(new_window=TestCreation)

    def view_performance(self, widget):
        from viewPerformance import ViewPerformance
        self.facilitate_transfer(new_window=ViewPerformance)

    def go_back(self, widget):
        from sim import UserType
        self.facilitate_transfer(new_window=UserType)

    def facilitate_transfer(self, new_window):
        from handleTransitions import HandleTransitions
        ht = HandleTransitions(self)

        ht.setup_transfer()
        new_window(self.usertype, self.name, self.password)
        ht.finish_transfer()
