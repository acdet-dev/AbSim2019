import buildWidgets
import menuBar
from aStringResources import AStringResources

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk


class UserType(Gtk.Window, menuBar.MenuBar):
    def __init__(self, usertype='', name='', password=''):
        self.usertype = usertype
        self.name = name
        self.password = password

        Gtk.Window.__init__(self, title="AbSim")
        self.set_icon_from_file('img/icon.ico')
        self.maximize()

        widget = self.build_bar()

        self.bw = buildWidgets.BuildWidgets()

        logo = self.bw.build_logo(img_string='img/acdet-logo.gif')

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

        button_table = self.bw.add_buttons(button_list=b_list, description_list=d_list, functions=f_list)

        widget.pack_start(logo, False, False, 0)
        widget.pack_start(button_table, False, False, 0)

        self.add(widget)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

    def config(self, widget):
        from admin import Admin
        self.facilitate_transfer(self.usertype, self.name, self.password, new_window=Admin)

    def learning(self, widget):
        from menu import MenuWindow
        # Is this still thread-safe?
        # do this for exam?
        Gdk.threads_enter()
        self.facilitate_transfer(new_window=MenuWindow)
        Gdk.threads_leave()

    def assigned_assessment(self, widget):
        from sectionTree import SectionTree
        from messages import sim_message, sim_class_message
        from viewAssignments import ViewAssignments
        
        # get section numbers to choose from
        st = SectionTree(self.bw, [], one_flag=True)
        bt = st.get_sections()

        st.sec_name = []

        if bt:

            s = sim_class_message(self,
                                  bt,
                                  st.sec_name,
                                  info_string=self.string_resources["choose_title"],
                                  secondary_text=self.string_resources["choose_description"])

            if s:
                self.facilitate_transfer(self.usertype, s[0], new_window=ViewAssignments)
            else:
                sim_message(self, info_string=self.string_resources["info_string"],
                            secondary_text=self.string_resources["secondary"])

        else:
            sim_message(self, info_string=self.string_resources["no_students_error"],
                        secondary_text=self.string_resources["please_add"])

    def create_exams(self, widget):
        from simFaculty import SimFaculty
        self.facilitate_transfer(self.usertype, self.name, self.password, new_window=SimFaculty)

    def facilitate_transfer(self, *args, new_window):
        from handleTransitions import HandleTransitions
        ht = HandleTransitions(self)

        ht.setup_transfer()
        new_window(*args)
        ht.finish_transfer()
