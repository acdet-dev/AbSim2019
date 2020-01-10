#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

from aStringResources import AStringResources


class SplashScreen(Gtk.Window):
    def __init__(self):
        Gtk.Window.__init__(self)
        self.set_title("AbSim")
        self.set_icon_from_file('icon.ico')
        self.set_default_size(640, 480)

        self.string_resources = AStringResources("splash_screen").get_by_identifier()

        splash_label = Gtk.Label()
        splash_label.set_markup("<span font='20'>" + self.string_resources["splash_message_1"] +
                                "</span>\n<span font='12'>" + self.string_resources["splash_message_2"] + "</span>")

        hbox = Gtk.Box()
        hbox.pack_start(splash_label, True, True, 0)
        # hbox.pack_start(self.spinner)

        self.add(hbox)

        self.show_all()
