import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


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
    from aStringResources import AStringResources

    string_resources = AStringResources("reset_messages").get_by_identifier()

    dialog = Gtk.MessageDialog(parent, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.OK, info_string)
    dialog.format_secondary_text(secondary_text)
    response = dialog.run()
    dialog.destroy()

    if response == Gtk.ResponseType.OK:
        text = sim_reset_dialogue(parent, info_string=string_resources["reset"],
                                  secondary_text=string_resources["reset_2"])
        return text
    else:
        return None


def sim_class_message(parent, b_tree, sec_name, info_string, secondary_text):
    # Returns user input as a string or None
    # If user does not input text it returns None, NOT AN EMPTY STRING.
    dialogWindow = Gtk.MessageDialog(parent,
                                     Gtk.DialogFlags.MODAL | Gtk.DialogFlags.DESTROY_WITH_PARENT,
                                     Gtk.MessageType.QUESTION,
                                     Gtk.ButtonsType.OK_CANCEL,
                                     secondary_text)

    dialogWindow.set_title(info_string)

    dialogBox = dialogWindow.get_content_area()
    dialogBox.pack_end(b_tree, False, False, 0)

    section = sec_name

    dialogWindow.show_all()
    response = dialogWindow.run()

    dialogWindow.destroy()
    if (response == Gtk.ResponseType.OK) and (len(section) > 0):
        return section
    else:
        return None
