import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

import time
import csv
import logging

from i18ntrans2 import _

class FileChooserWindow(Gtk.Window):

    def __init__(self):
        Gtk.Window.__init__(self, title=_(u"AbSim File Chooser"))
        self.set_icon_from_file("icon.ico")

        self.on_file_clicked()

    def save_info(self, last, first, student_id):
        import studentmodel
        # i18n - Time string left as-is
        timestr = time.strftime("%Y%m%d-%H%M%S")
        student_id = str(student_id)
        self.student_model = studentmodel.StudentModel()

        self.student_model.save_to_db(last, first, student_id, timestr)

    def on_file_clicked(self):
        from messages import sim_message
        dialog = Gtk.FileChooserDialog(_(u"Please choose a file"), self,
            Gtk.FileChooserAction.OPEN,
            (Gtk.STOCK_CANCEL, Gtk.ResponseType.CANCEL,
             Gtk.STOCK_OPEN, Gtk.ResponseType.OK))

        self.add_filters(dialog)

        response = dialog.run()
        if response == Gtk.ResponseType.OK:
            with open(dialog.get_filename(), encoding='utf-8') as csvfile:
                readCSV = csv.reader(csvfile, delimiter=',')
                for row in readCSV:
                    self.save_info(row[0], row[1], row[2])

            sim_message(self, info_string=_(u'Class Uploaded Successfully'), secondary_text=_(u'Students may now '
                                                                                              u'login to view exams '
                                                                                              u'you assign.'))
            csvfile.close()
            self.hide()
        elif response == Gtk.ResponseType.CANCEL:
            logging.debug("Cancel clicked")

        dialog.destroy()

    def add_filters(self, dialog):
        filter_text = Gtk.FileFilter()
        filter_text.set_name("Text files")
        filter_text.add_mime_type("text/plain")
        dialog.add_filter(filter_text)

        filter_py = Gtk.FileFilter()
        filter_py.set_name("Python files")
        filter_py.add_mime_type("text/x-python")
        dialog.add_filter(filter_py)

        filter_any = Gtk.FileFilter()
        filter_any.set_name("Any files")
        filter_any.add_pattern("*")
        dialog.add_filter(filter_any)

    def on_folder_clicked(self, widget):
        dialog = Gtk.FileChooserDialog("Please choose a folder", self,
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