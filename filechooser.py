import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk
import studentmodel
import time
import csv
import logging
from aStringResources import AStringResources


class FileChooserWindow(Gtk.Window):

    def __init__(self):
        self.string_resources = AStringResources("file_chooser").get_by_identifier()
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file("img/icon.ico")
        self.on_file_clicked()

    def save_info(self, section, last, first, student_id):
        # i18n - Time string left as-is
        timestr = time.strftime("%Y%m%d-%H%M%S")
        student_id = str(student_id)
        student_model = studentmodel.StudentModel()

        student_model.save_to_db(section, last, first, student_id, timestr)

    def on_file_clicked(self):
        from messages import sim_message
        dialog = Gtk.FileChooserDialog(self.string_resources["window_title"], self,
            Gtk.FileChooserAction.OPEN,
            (Gtk.STOCK_CANCEL, Gtk.ResponseType.CANCEL,
             Gtk.STOCK_OPEN, Gtk.ResponseType.OK))

        self.add_filters(dialog)

        response = dialog.run()
        if response == Gtk.ResponseType.OK:
            # add section number based on what's in database
            current_students = studentmodel.StudentModel().get_all(key="")
            if len(current_students) < 1:
                s = self.string_resources["section_title"] + " 1"
            else:
                section_list = []
                for i in current_students:
                    section_list.append(i[0])
                secs = [int(i.split(' ')[1]) for i in list(set(section_list))]
                s = self.string_resources["section_title"] + " " + str(max(secs) + 1)
            if s:
                try:
                    with open(dialog.get_filename(), encoding='utf-8') as csvfile:
                        readCSV = csv.reader(csvfile, delimiter=',')
                        try:
                            for row in readCSV:
                                self.save_info(s, row[0], row[1], row[2])

                            sim_message(self, info_string=self.string_resources["success_notification"],
                                        secondary_text=self.string_resources["success_description"])

                        except (IndexError, ValueError) as e:
                            logging.debug(e)
                            sim_message(self, info_string=self.string_resources["failure_notification"],
                                        secondary_text=self.string_resources["failure_description_2"])

                    csvfile.close()
                except UnicodeDecodeError:
                    sim_message(self, info_string=self.string_resources["unicode_error"],
                                secondary_text=self.string_resources["error_description"])

            else:
                sim_message(self, info_string=self.string_resources["failure_notification"],
                            secondary_text=self.string_resources["failure_description"])

            self.hide()
        elif response == Gtk.ResponseType.CANCEL:
            logging.debug("Cancel clicked")

        dialog.destroy()

    def add_filters(self, dialog):
        filter_any = Gtk.FileFilter()
        filter_any.set_name(self.string_resources["any_files"])
        filter_any.add_pattern("*")
        dialog.add_filter(filter_any)

        filter_text = Gtk.FileFilter()
        filter_text.set_name(self.string_resources["text_files"])
        filter_text.add_mime_type("text/plain")
        dialog.add_filter(filter_text)

    def on_folder_clicked(self, widget):
        dialog = Gtk.FileChooserDialog(self.string_resources["choose_folder"], self,
                                       Gtk.FileChooserAction.SELECT_FOLDER,
                                       (Gtk.STOCK_CANCEL, Gtk.ResponseType.CANCEL,
                                        "Select", Gtk.ResponseType.OK))
        dialog.set_default_size(800, 400)

        response = dialog.run()
        if response == Gtk.ResponseType.OK:
            logging.debug("Select clicked")
            logging.debug("Folder selected: " + dialog.get_filename())
        elif response == Gtk.ResponseType.CANCEL:
            logging.debug("Cancel clicked")

        dialog.destroy()