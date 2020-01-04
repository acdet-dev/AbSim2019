import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Pango

from aStringResources import AStringResources
import menu
from simLabels import construct_markup, MilestoneNameLabel


class ManageStudents(Gtk.Window, menu.MenuBar):
    def __init__(self, name, password):
        # initialize string resources
        self.string_resources = AStringResources("manage_students", back_flag=True).get_by_identifier()

        # Make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        self.name = name
        self.password = password

        # build menu bar to pack later
        box = self.build_bar()

        # build notebook object
        self.notebook = Gtk.Notebook()
        self.notebook.set_tab_pos(Gtk.POS_LEFT)
        self.notebook.connect('switch-page', self.reset_active_page)
        self.notebook.show()

        # build individual page objects
        # first notebook tab
        first_page = InstructionPage(self.string_resources)
        first_page.set_property('border-width', 15)
        first_page_label = MilestoneNameLabel(self.string_resources["notebook_tab_1"])
        self.notebook.append_page(first_page, first_page_label)

        vbox = Gtk.VBox(False, 2)
        vbox.pack_start(box, False, False, 0)
        vbox.pack_start(self.notebook, True, True, 0)

        self.add(vbox)
        box.show_all()
        self.show()
        vbox.show()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        self.notebook.set_current_page(0)

    def reset_active_page(self, notebook, useless_param, page_num):
        # When the user clicks a page, reset it to its default.
        # useless_param is useless in PyGtk, but Gtk passes it anyway.
        page = notebook.get_nth_page(page_num)
        page.reset_page()


class InstructionPage(Gtk.VBox):
    def __init__(self, string_resources):
        super(InstructionPage, self).__init__(False, 2)

        # initialize passed string resources
        self.string_resources = string_resources

        label_1 = self.build_label(flag="part_one")

        ex_image_1 = self.build_logo(img_string="img/example_class.png")
        ex_image_2 = self.build_logo(img_string="img/example_save.png")
        # ex_image_3 = self.build_logo(img_string="img/example_csv.gif")

        hbox = Gtk.HBox(False, 2)

        hbox.pack_start(ex_image_1, False, False, 40)
        hbox.pack_start(ex_image_2, False, False, 40)
        # hbox.pack_start(ex_image_3, False, False, 10)

        label_2 = self.build_label()

        bt = self.add_button()

        self.pack_start(label_1, False, False, 20)
        self.pack_start(hbox, False, False, 20)
        self.pack_start(label_2, False, False, 20)
        self.pack_start(bt, False, False, 10)

        self.show_all()

    def build_label(self, flag=""):
        label = Gtk.Label(u" ")
        if flag == "part_one":
            label_text = "<b>" + self.string_resources["label_header"] + "</b>" + "\n\n" +\
                         self.string_resources["label_text_1"] + "\n" + self.string_resources["label_text_2"] + "\n" +\
                         self.string_resources["label_text_3"] + "\n" + self.string_resources["label_text_4"]
        else:
            label_text = self.string_resources["label_text_5"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        label.set_markup(label_pre_mark)
        label.set_line_wrap(True)
        label.set_alignment(0, 0)
        label.set_max_width_chars(50)

        return label

    def build_logo(self, img_string):
        # Add logo under label
        logo = Gtk.Image()

        logo.set_from_file(img_string)

        return logo

    def add_button(self):
        button_table = Gtk.Table(rows=1, columns=1)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        upload_button = self.build_button(self.string_resources["button_text"])
        upload_button.connect('clicked', self.upload)
        button_table.attach(upload_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=20)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def upload(self, useless_param):
        from filechooser import FileChooserWindow
        FileChooserWindow()

    def reset_page(self):
        pass
