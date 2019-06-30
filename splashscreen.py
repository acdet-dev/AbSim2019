#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, GLib, GObject, Gdk

from i18ntrans2 import _


class SplashScreen(Gtk.Window):
    def __init__(self):
        Gtk.Window.__init__(self)
        self.set_title(_(u"AbSim"))
        self.set_icon_from_file('icon.ico')
        self.set_default_size(640, 480)

        splash_label = Gtk.Label()
        splash_label.set_markup("<span font='20'>" + _(u"AbSim is loading...") + "</span>\n<span font='12'>"
                                + _(u"(this might take 30 seconds)") + "</span>")

        hbox = Gtk.Box()
        hbox.pack_start(splash_label, True, True, 0)
        # hbox.pack_start(self.spinner)

        self.add(hbox)

        self.show_all()
