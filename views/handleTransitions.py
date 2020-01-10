import splashscreen
import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class HandleTransitions:
    def __init__(self, old_window):
        """ A class to handle screen transitions"""
        self.old_window = old_window
        self.splash_screen = splashscreen.SplashScreen()

    def setup_transfer(self):
        self.splash_screen.show_all()
        while Gtk.events_pending():
            Gtk.main_iteration()

    def finish_transfer(self):
        self.splash_screen.hide()
        self.close_menu()

    def close_menu(self):
        self.old_window.handler_block(self.old_window.destroy_signal_handler)
        self.old_window.destroy()
