import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


def get_user_pw(parent, message, title='', flag=None):
    from aStringResources import AStringResources

    string_resources = AStringResources("simLogin").get_by_identifier()
    # Returns user input as a string or None
    # If user does not input text it returns None, NOT AN EMPTY STRING.
    dialogWindow = Gtk.MessageDialog(parent,
                                     Gtk.DialogFlags.MODAL | Gtk.DialogFlags.DESTROY_WITH_PARENT,
                                     Gtk.MessageType.QUESTION,
                                     Gtk.ButtonsType.OK_CANCEL,
                                     message)

    dialogWindow.set_title(title)

    if flag == 'initial':

        dialogBox = dialogWindow.get_content_area()
        userEntry = Gtk.Entry()
        userEntry.set_placeholder_text(string_resources["password"])
        userEntry.set_visibility(False)
        userEntry.set_invisible_char("*")
        userEntry.set_size_request(250, 0)
        dialogBox.pack_end(userEntry, False, False, 0)

        dialogWindow.show_all()
        response = dialogWindow.run()
        password = userEntry.get_text()
        dialogWindow.destroy()
        if (response == Gtk.ResponseType.OK) and (password != ''):

            return password
        else:
            return None

    elif flag == 'add':

        dialogBox = dialogWindow.get_content_area()
        userName = Gtk.Entry()
        userName.set_placeholder_text(string_resources["user_name"])
        userName.set_visibility(True)
        userName.set_size_request(250, 0)
        dialogBox.pack_start(userName, False, False, 0)
        userEntry = Gtk.Entry()
        userEntry.set_placeholder_text(string_resources["password"])
        userEntry.set_visibility(False)
        userEntry.set_invisible_char("*")
        userEntry.set_size_request(250, 0)
        dialogBox.pack_end(userEntry, False, False, 0)

        dialogWindow.show_all()
        response = dialogWindow.run()
        name = userName.get_text()
        password = userEntry.get_text()
        dialogWindow.destroy()
        if (response == Gtk.ResponseType.OK) and (password != '' and name != ''):

            return name, password
        else:
            return None

    elif flag == 'csv':

        dialogBox = dialogWindow.get_content_area()
        userEntry = Gtk.Entry()
        userEntry.set_placeholder_text(string_resources["user_entry"])
        userEntry.set_visibility(True)
        userEntry.set_size_request(250, 0)
        dialogBox.pack_end(userEntry, False, False, 0)

        dialogWindow.show_all()
        response = dialogWindow.run()
        password = userEntry.get_text()
        dialogWindow.destroy()
        if (response == Gtk.ResponseType.OK) and (password != ''):

            return password
        else:
            return None

    else:

        dialogBox = dialogWindow.get_content_area()
        userName = Gtk.Entry()
        userName.set_placeholder_text(string_resources["user_name"])
        userName.set_visibility(True)
        userName.set_size_request(250, 0)
        dialogBox.pack_start(userName, False, False, 0)
        userEntry = Gtk.Entry()
        userEntry.set_placeholder_text(string_resources["password"])
        userEntry.set_visibility(False)
        userEntry.set_invisible_char("*")
        userEntry.set_size_request(250, 0)
        dialogBox.pack_end(userEntry, False, False, 0)

        dialogWindow.show_all()
        response = dialogWindow.run()
        name = userName.get_text()
        password = userEntry.get_text()
        dialogWindow.destroy()
        if (response == Gtk.ResponseType.OK) and (password != '' and name != ''):

            return name, password
        else:
            return None