import os
import i18ntrans2
import splashscreen
import config
from aStringResources import AStringResources
import logging

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

app_data_path = os.getenv('LOCALAPPDATA') + '\\AbSim2020'
string_resources = AStringResources("menu_bar").get_by_identifier()


class MenuBar:

    def read_menu_xml(self):
        menu_xml = app_data_path + '\\outMenu.xml'
        f1 = open(menu_xml, 'r')
        menu_xml_string = f1.read()
        f1.close()
        return menu_xml_string

    def read_menu_xml_list(self, options):
        logging.debug('Attempting to write all locale options to menu bar xml.')
        menu_xml = 'abMenu.xml'
        out_menu_xml = app_data_path + '\\outMenu.xml'
        try:
            f1 = open(menu_xml, 'r')
            menu_xml_list = f1.readlines()
        except FileNotFoundError:
            logging.debug('No menu xml file found.')

        # add menu options to new menu bar xml file
        opt_len = len(options)

        i = 0
        choice_list = []
        num_list = ['one', 'two', 'three', 'four', 'five', 'six', 'seven']

        while i < opt_len - 1:
            try:
                menu_xml_list.insert(i + 8, "      <menuitem action=" + "'" + num_list[i] + "'" + "/>\n\t")
                choice_list.append(num_list[i])
                i = i + 1
            except (IndexError, UnboundLocalError):
                logging.debug('An error occurred when adding locale menu options.')
                break

        f2 = open(out_menu_xml, 'w+')
        try:
            for line in menu_xml_list:
                f2.write(line)

            f1.close()
            f2.close()
        except UnboundLocalError:
            logging.debug("No menu list created")

        return choice_list

    def _popup_message(self, msg):
        md = Gtk.MessageDialog(self, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.OK, msg)
        md.run()
        md.destroy()

    def build_bar(self):
        action_group = Gtk.ActionGroup("my_actions")
        self.add_ab_menu_actions(action_group)
        self.add_choices_menu_actions(action_group)
        uimanager = self.create_ui_manager()
        uimanager.insert_action_group(action_group)
        menubar = uimanager.get_widget("/MenuBar")
        box = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
        try:
            box.pack_start(menubar, False, False, 0)
        except TypeError:
            logging.debug("not packing menu because error occurred")
        return box

    def add_ab_menu_actions(self, action_group):
        action_group.add_actions([
            ("AbMenu", None, "AbSim"),
            ("AbQuit", Gtk.STOCK_QUIT, None, None, None, self.on_menu_ab_quit),
            ("abHome", None, string_resources["home"], None, None, self.on_home_click)
        ])

    def add_choices_menu_actions(self, action_group):
        action_group.add_action(Gtk.Action("ChoicesMenu", string_resources["locales"], None,
                                           None))

        # Log i18n status
        logging.debug('Attempting to get i18n locale options.')

        self.locale_options = i18ntrans2.get_locale_options()

        # initiate locale_read for next iteration
        locale_config = config.Config("locale.json")
        locale_config.read_config()
        locale_override = locale_config.get_default('override')

        options = []
        try:
            for label, target in self.locale_options:
                options.append(label)
        except IndexError:
            logging.debug('No locale options found.')
            pass

        self.choice_list = self.read_menu_xml_list(options)

        choices = len(self.choice_list)

        i = 0
        self.lang_dict = dict()
        while i < choices:
            try:
                self.lang_dict[self.choice_list[i]] = options[i]
                action_group.add_actions([
                    (self.choice_list[i], None, options[i], None, None, self.on_menu_choices_changed)
                ])

                i = i + 1
            except IndexError:
                logging.debug('Could not add locale menu options to menu bar')
                pass

    def create_ui_manager(self):
        uimanager = Gtk.UIManager()

        UI_INFO = self.read_menu_xml()

        uimanager.add_ui_from_string(UI_INFO)

        # Add the accelerator group to the toplevel window
        accelgroup = uimanager.get_accel_group()
        self.add_accel_group(accelgroup)
        return uimanager

    def on_menu_ab_quit(self, widget):
        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        try:
            self.sounds.stop_sound_player()
            self.port_settings.stop_devices()
        except AttributeError:
            logging.debug('attributes necessary for stopping devices not made yet')

        splash_screen.hide()
        Gtk.main_quit()

    def on_home_click(self, widget):
        import defineUser

        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        try:
            self.sounds.stop_sound_player()
            self.port_settings.stop_devices()
        except AttributeError:
            logging.debug('attributes necessary for stopping devices not made yet')

        defineUser.DefineUser()
        splash_screen.hide()
        self.destroy()
        Gtk.main()

    def on_menu_choices_changed(self, lang_dict):
        key = str(lang_dict.get_name())

        for elem in self.locale_options:
            if self.lang_dict[key] in elem:
                lbl = elem[1]
        i18ntrans2.set_locale_handler(loc="".join(self.lang_dict[key].split()), lbl=lbl, popup=self._popup_message)
