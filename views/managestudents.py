import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GdkPixbuf

from aStringResources import AStringResources
from views import menuBar, buildWidgets
from simLabels import MilestoneNameLabel
from messages import sim_message, sim_reset_dialogue
import logging
from models.studentmodel import StudentModel


class ManageStudents(Gtk.Window, menuBar.MenuBar):
    def __init__(self, user_type, name, password, current_page=0):

        self.user_type = user_type
        self.name = name
        self.password = password
        self.current_page = current_page

        # initialize string resources
        self.string_resources = AStringResources("manage_students", back_flag=True).get_by_identifier()
        self.window_resources = {
            "window": self,
            "user_type": self.user_type,
            "name": self.name,
            "password": self.password
        }

        # Make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # build menu bar to pack later
        widget = self.build_bar()

        # build notebook object
        self.notebook = Gtk.Notebook()
        self.notebook.set_tab_pos(0)
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

        widget.pack_start(self.notebook, True, True, 0)

        self.add(widget)
        self.show_all()

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

        # initialize builder class
        bw = buildWidgets.BuildWidgets()

        # build labels
        label_text = "<b>" + self.string_resources["label_header"] + "</b>" + "\n\n" + \
                     self.string_resources["label_text_1"] + "\n" + self.string_resources["label_text_2"] + "\n" + \
                     self.string_resources["label_text_3"] + "\n" + self.string_resources["label_text_4"]
        label_1 = bw.build_label(label_text, f_size=16, alignment=[0, 0])
        label_2 = bw.build_label(self.string_resources["label_text_5"], f_size=16, alignment=[0, 0])

        # build images
        ex_image_1 = bw.build_logo(img_string="img/example_class.png")
        ex_image_2 = bw.build_logo(img_string="img/example_save.png")

        # initialize box for packing images
        hbox = Gtk.HBox(False, 2)

        hbox.pack_start(ex_image_1, False, False, 40)
        hbox.pack_start(ex_image_2, False, False, 40)

        # initialize button table elements
        b_list = [self.string_resources["button_text"], self.string_resources["back_button"]]
        f_list = [self.upload, self.mp.go_back]
        button_table = bw.add_horizontal_buttons(button_list=b_list, functions=f_list, f_size=16)

        self.pack_start(label_1, False, False, 0)
        self.pack_start(hbox, False, False, 0)
        self.pack_start(label_2, False, False, 0)
        self.pack_start(button_table, False, False, 0)

        self.show_all()

    def upload(self, useless_param):
        from filechooser import FileChooserWindow
        FileChooserWindow()
        self.mp.store.clear()
        new_store = self.mp.create_model()
        self.mp.no_sections_flag = False
        self.mp.treeView.set_model(new_store)

    def go_back(self):
        self.mp.go_back()

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
        # initialize builder class
        bw = buildWidgets.BuildWidgets()

        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox(False, 8)

        # create stores
        self.store = self.create_model()
        self.wr["store2"] = self.create_model2()

        self.treeView = bw.build_tree_view(self.store, self.on_row_change)
        self.wr["treeView2"] = bw.build_tree_view(self.wr["store2"], self.on_row_change2)

        sw = bw.create_scroller()
        sw2 = bw.create_scroller()

        # add tree view to scrolled window
        sw.add(self.treeView)
        sw2.add(self.wr["treeView2"])

        # create columns for tree view
        column_header_list = [self.string_resources["column_header"], self.string_resources["column_header_2"]]
        bw.create_columns(self.treeView, column_header_list)

        column_header_list_2 = [self.string_resources["column_header_3"], self.string_resources["column_header_4"],
                                self.string_resources["column_header_5"], self.string_resources["column_header_6"],
                                self.string_resources["column_header_7"], self.string_resources["column_header_8"]]
        bw.create_columns(self.wr["treeView2"], column_header_list_2)

        # make lists of buttons
        b_list = [self.string_resources["delete_button"], self.string_resources["back_button"]]
        f_list = [self.delete, self.go_back]
        button_table = bw.add_horizontal_buttons(button_list=b_list, functions=f_list, f_size=16)

        hbox.pack_start(sw, False, False, 10)
        hbox.pack_start(sw2, True, True, 10)

        # pack all to vbox
        vbox.pack_start(hbox, True, True, 0)
        vbox.pack_start(button_table, False, False, 0)

        return vbox

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
                self.facilitate_transfer(ManageStudents, self.wr["user_type"], self.wr["name"], self.wr["password"], 1)
            else:
                sim_message(self.wr["window"], info_string=self.string_resources["no_delete"],
                            secondary_text=self.string_resources["no_delete_message"])
        pass

    def facilitate_transfer(self, new_window, *args):
        from views.handleTransitions import HandleTransitions
        ht = HandleTransitions(self.wr["window"])

        ht.setup_transfer()
        new_window(*args)
        ht.finish_transfer()

    def go_back(self, widget):
        from views.simFaculty import SimFaculty
        self.facilitate_transfer(SimFaculty, self.wr["user_type"], self.wr["name"], self.wr["password"])

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
        iter_root = self.treeView.get_model().get_iter_first()
        tree_selection = self.treeView.get_selection()
        tree_selection.unselect_all()
        tree_selection.select_iter(iter_root)

        try:
            (model, iter) = tree_selection.get_selected()
            self.wr["section_id"] = model.get(iter, 0)[0]
            self.update_view()
        except TypeError as e:
            logging.debug(e)
