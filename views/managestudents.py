import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GdkPixbuf

from resources.aStringResources import AStringResources
from views import menu
from simLabels import construct_markup, MilestoneNameLabel, screen_sizer
from messages import sim_message, sim_reset_dialogue
import logging
from models.studentmodel import StudentModel


class ManageStudents(Gtk.Window, menu.MenuBar):
    def __init__(self, name, password, current_page=0):

        self.name = name
        self.password = password
        self.current_page = current_page

        # initialize string resources
        self.string_resources = AStringResources("manage_students", back_flag=True).get_by_identifier()
        self.window_resources = {
            "window": self,
            "name": self.name,
            "password": self.password
        }

        # Make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # build menu bar to pack later
        box = self.build_bar()

        # build notebook object
        self.notebook = Gtk.Notebook()
        self.notebook.set_tab_pos(Gtk.POS_LEFT)
        self.notebook.connect('switch-page', self.reset_active_page)
        self.notebook.show()

        self.window_resources["notebook"] = self.notebook

        # build individual page objects
        second_page = ManagePage(self.string_resources, self.window_resources)
        # first notebook tab
        first_page = InstructionPage(self.string_resources, second_page)
        first_page.set_property('border-width', 15)
        first_page_label = MilestoneNameLabel(self.string_resources["notebook_tab_1"])
        self.notebook.append_page(first_page, first_page_label)

        # second notebook tab

        second_page.set_property('border-width', 15)
        second_page_label = MilestoneNameLabel(self.string_resources["notebook_tab_2"])
        self.notebook.append_page(second_page, second_page_label)

        vbox = Gtk.VBox(False, 2)
        vbox.pack_start(box, False, False, 0)
        vbox.pack_start(self.notebook, True, True, 0)

        self.add(vbox)
        box.show_all()
        self.show()
        vbox.show()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)

        self.notebook.set_current_page(self.current_page)

    def reset_active_page(self, notebook, useless_param, page_num):
        # When the user clicks a page, reset it to its default.
        # useless_param is useless in PyGtk, but Gtk passes it anyway.
        page = notebook.get_nth_page(page_num)
        try:
            page.reset_page()
        except AttributeError as e:
            logging.debug("no reset method")
            pass


class InstructionPage(Gtk.VBox):
    def __init__(self, string_resources, mp):
        super(InstructionPage, self).__init__(False, 2)

        # initialize passed string resources
        self.string_resources = string_resources
        self.mp = mp

        label_1 = self.build_label(flag="part_one")

        ex_image_1 = self.build_logo(img_string="img/example_class.png")
        ex_image_2 = self.build_logo(img_string="img/example_save.png")
        # ex_image_3 = self.build_logo(img_string="img/example_csv.gif")

        # initialize box for packing images
        hbox = Gtk.HBox(False, 2)

        hbox.pack_start(ex_image_1, False, False, 40)
        hbox.pack_start(ex_image_2, False, False, 40)
        # hbox.pack_start(ex_image_3, False, False, 10)

        label_2 = self.build_label()

        bt = self.add_button()

        self.pack_start(label_1, False, False, 20)
        self.pack_start(hbox, False, False, 20)
        self.pack_start(label_2, False, False, 20)
        self.pack_start(bt, False, False, 0)

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
        # get screen size
        s_w = Gdk.screen_width()
        s_h = Gdk.screen_height()
        width, height = screen_sizer(s_w, s_h, old_width=450, old_height=325)

        pixbuf = GdkPixbuf.Pixbuf.new_from_file_at_scale(
            filename=img_string,
            width=width,
            height=height,
            preserve_aspect_ratio=True)
        logo = Gtk.Image.new_from_pixbuf(pixbuf)

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
        label_pre_mark = construct_markup(label_text, font_size=16)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def upload(self, useless_param):
        from filechooser import FileChooserWindow
        FileChooserWindow()
        self.mp.store.clear()
        new_store = self.mp.create_model()
        self.mp.no_sections_flag = False
        self.mp.treeView.set_model(new_store)

    def reset_page(self):
        pass


class ManagePage(Gtk.VBox):
    def __init__(self, string_resources, wr):
        super(ManagePage, self).__init__(False, 2)

        self.string_resources = string_resources
        self.wr = wr
        self.wr["section_id"] = ""
        self.wr["student_info"] = StudentModel()
        self.wr["student_information"] = ""

        self.store = ''
        self.treeView = ''

        # set no sections flag to handle no data case
        self.no_sections_flag = False

        # call build resources
        box = self.build_interface()

        self.pack_start(box, False, False, 0)

        self.show_all()

    def build_interface(self):
        from simLabels import screen_sizer

        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox(False, 8)

        # scroller window for all abnormality and ddx exams in queue
        sw = Gtk.ScrolledWindow()
        sw.set_shadow_type(Gtk.SHADOW_ETCHED_IN)
        sw.set_policy(Gtk.POLICY_AUTOMATIC, Gtk.POLICY_AUTOMATIC)

        # second scrolled window
        sw2 = Gtk.ScrolledWindow()
        sw2.set_shadow_type(Gtk.SHADOW_ETCHED_IN)
        sw2.set_policy(Gtk.POLICY_AUTOMATIC, Gtk.POLICY_AUTOMATIC)

        # get database entries for treeview in scroller window
        self.store = self.create_model()

        # second store
        self.wr["store2"] = self.create_model2()

        # create tree views
        self.treeView = Gtk.TreeView(self.store)
        self.treeView.connect('cursor-changed', self.on_row_change)
        self.treeView.set_rules_hint(True)

        self.wr["treeView2"] = Gtk.TreeView(self.wr["store2"])
        self.wr["treeView2"].connect('cursor-changed', self.on_row_change2)
        self.wr["treeView2"].set_rules_hint(True)

        # add tree view to scrolled window
        sw.add(self.treeView)
        sw2.add(self.wr["treeView2"])

        # get adjusted width
        screen_width = Gtk.gdk.screen_width()
        screen_height = Gtk.gdk.screen_height()
        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=600)

        # allocate space to scroller
        sw.set_size_request(width, height)
        sw2.set_size_request(width, height)

        # create columns for tree view
        self.create_columns(self.treeView)
        self.create_columns2(self.wr["treeView2"])

        # Add navigation buttons
        button_tree = self.add_buttons()

        hbox.pack_start(sw, False, False, 10)
        hbox.pack_start(sw2, True, True, 10)

        # pack all to vbox
        vbox.pack_start(hbox, True, True, 0)
        vbox.pack_start(button_tree, False, False, 0)

        return vbox

    def add_buttons(self):

        button_table = Gtk.Table(rows=2, columns=1)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        delete_button = self.build_button(self.string_resources["delete_button"])
        delete_button.connect('clicked', self.delete)
        button_table.attach(delete_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        back_button = self.build_button(self.string_resources["back_button"])
        back_button.connect('clicked', self.go_back)
        button_table.attach(back_button, 1, 2, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_button(self, label_text):
        from simLabels import construct_markup
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=16)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def setup_transfer(self):
        import splashscreen
        self.splash_screen = splashscreen.SplashScreen()
        self.splash_screen.show_all()
        while Gtk.events_pending():
            Gtk.main_iteration()

    def close_menu(self):
        self.wr["window"].handler_block(self.wr["window"].destroy_signal_handler)
        self.wr["window"].destroy()

    def finish_transfer(self):
        self.splash_screen.hide()
        self.close_menu()

    def get_score_info(self, students):
        from models.takenmodel import TakenModel
        from statistics import mean, StatisticsError

        tm = TakenModel()

        result = []

        for s in students:
            info = list(self.wr["student_info"].get_by_student_id(s))
            scores = tm.get_by_score_id(s)
            if scores:
                info.append(str(len(scores)))
            else:
                scores = []
                info.append(str(len(scores)))
            # append each individual students' scores to list
            ab_scores = []
            ddx_scores = []

            for score in scores:
                if len(score) > 0:
                    try:
                        ab_scores.append(float(score[2]))
                    except ValueError:
                        pass
                    try:
                        ddx_scores.append(float(score[3]))
                    except ValueError:
                        pass

            try:
                info.append(str(round(mean(ab_scores), 2)))
                info.append(str(round(mean(ddx_scores), 2)))
            except StatisticsError:
                info.append(self.string_resources["na"])
                info.append(self.string_resources["na"])

            result.append(info)

        return result

    def update_view(self):
        s_list = self.check_students(self.wr["section_id"], den_flag=False)
        info = self.get_score_info(s_list)
        self.wr["student_information"] = info
        self.wr["store2"].clear()
        new_store = self.create_model2()
        self.wr["treeView2"].set_model(new_store)

    def delete(self, widget):
        if self.no_sections_flag:
            sim_message(self.wr["window"], info_string=self.string_resources["no_data"],
                        secondary_text=self.string_resources["no_data_message"])

        elif self.wr["section_id"] == '':
            sim_message(self.wr["window"], info_string=self.string_resources["no_section_selected"],
                        secondary_text=self.string_resources["no_section_description"])

        else:
            yes_no = sim_reset_dialogue(self.wr["window"], info_string=self.string_resources["warning"],
                                        secondary_text=self.string_resources["warning_message"])

            if yes_no == "reset":
                # execute delete statements
                self.wr["student_info"].delete_by_section(key=self.wr["section_id"])
                self.setup_transfer()
                ManageStudents(self.wr["name"], self.wr["password"], current_page=1)
                self.finish_transfer()

            else:
                sim_message(self.wr["window"], info_string=self.string_resources["no_delete"],
                            secondary_text=self.string_resources["no_delete_message"])
        pass

    def go_back(self, widget):
        from views.simFaculty import SimFaculty
        self.setup_transfer()
        SimFaculty('faculty', self.wr["name"], self.wr["password"])
        self.finish_transfer()

    def check_students(self, section, den_flag=True):
        """ method to return number of students taken out of total students assigned assessment """
        import itertools
        from functools import partial
        from operator import ne

        s = []
        s.extend(self.wr["student_info"].get_by_section(section))

        merged = list(itertools.chain.from_iterable(s))

        if "" in merged:
            merged = list(filter(partial(ne, ""), merged))

        if "ID" in merged:
            merged = list(filter(partial(ne, "ID"), merged))

        if den_flag:
            denominator = len(merged)
            return denominator
        else:
            return merged

    def create_model2(self):
        store = Gtk.ListStore(str, str, str, str, str, str)

        for info in self.wr["student_information"]:
            store.append([info[1], info[2], info[3], info[4], info[5], info[6]])

        return store

    def create_columns2(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_3"], renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_4"], renderer_text, text=1)
        column.set_sort_column_id(1)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_5"], renderer_text, text=2)
        column.set_sort_column_id(2)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_6"], renderer_text, text=3)
        column.set_sort_column_id(3)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_7"], renderer_text, text=4)
        column.set_sort_column_id(4)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_8"], renderer_text, text=5)
        column.set_sort_column_id(5)
        column.set_resizable(True)
        treeView.append_column(column)

    def create_model(self):
        store = Gtk.ListStore(str, str)

        sections = self.wr["student_info"].get_all(key='check')

        if sections:
            unique_sections = list(set([i[0] for i in sections]))

            for sec in sorted(unique_sections):
                num = self.check_students(sec)
                store.append([sec, str(num)])
        else:
            logging.debug('No students returned')
            self.no_sections_flag = True
        return store

    def create_columns(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header"], renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(self.string_resources["column_header_2"], renderer_text, text=1)
        column.set_sort_column_id(1)
        column.set_resizable(True)
        treeView.append_column(column)

    def on_row_change(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()
        try:
            self.wr["section_id"] = model.get(iter, 0)[0]
            self.update_view()
        except TypeError as e:
            logging.debug(e)

    def on_row_change2(self, treeview):
        selection = treeview.get_selection()
        # (model, iter) = selection.get_selected()
        selection.unselect_all()

    def reset_page(self):
        pass
