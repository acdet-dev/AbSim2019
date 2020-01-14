import dbmigrator
from defineUser import DefineUser
import splashscreen

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


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
