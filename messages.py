import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib


def sim_message(parent, info_string, secondary_text):
    dialog = Gtk.MessageDialog(parent, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.OK, info_string)
    dialog.format_secondary_text(secondary_text)
    dialog.run()
    dialog.destroy()


def sim_reset_dialogue(parent, info_string, secondary_text):
    dialog = Gtk.MessageDialog(parent, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.YES_NO, info_string)
    dialog.format_secondary_text(secondary_text)
    response = dialog.run()
    dialog.destroy()

    if response == Gtk.ResponseType.YES:
        return 'reset'
    else:
        return 'no reset'


def sim_login_message(parent, info_string, secondary_text):
    dialog = Gtk.MessageDialog(parent, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.OK, info_string)
    dialog.format_secondary_text(secondary_text)
    response = dialog.run()
    dialog.destroy()

    if response == Gtk.ResponseType.OK:
        text = sim_reset_dialogue(parent, info_string=_(u'Reset User Info?'), secondary_text=_(u'Would you like to '
                                                                                               u'reset the user info '
                                                                                               u'provided?'))
        return text
    else:
        return None


def sim_class_message(parent, info_string, secondary_text):
    # Returns user input as a string or None
    # If user does not input text it returns None, NOT AN EMPTY STRING.
    dialogWindow = Gtk.MessageDialog(parent,
                                     Gtk.DialogFlags.MODAL | Gtk.DialogFlags.DESTROY_WITH_PARENT,
                                     Gtk.MessageType.QUESTION,
                                     Gtk.ButtonsType.OK_CANCEL,
                                     secondary_text)

    dialogWindow.set_title(info_string)

    dialogBox = dialogWindow.get_content_area()
    userEntry = Gtk.Entry()
    userEntry.set_placeholder_text(_(u'Class Section'))
    userEntry.set_visibility(True)
    userEntry.set_size_request(250, 0)
    dialogBox.pack_end(userEntry, False, False, 0)

    dialogWindow.show_all()
    response = dialogWindow.run()
    section = userEntry.get_text()
    dialogWindow.destroy()
    if (response == Gtk.ResponseType.OK) and (section != ''):

        return section
    else:
        return None
