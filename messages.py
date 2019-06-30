import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib



def sim_message(parent, info_string, secondary_text):
    dialog = Gtk.MessageDialog(parent, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.OK, info_string)
    dialog.format_secondary_text(secondary_text)
    dialog.run()
    dialog.destroy()