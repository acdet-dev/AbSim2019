import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Pango

import assessmentViewer
import examParser
import menu
from menu import *
from i18ntrans2 import _
import exammodel
import splashscreen


class ViewPerformance(Gtk.Window, menu.MenuBar):
    def __init__(self, name, password):

        # Make window
        Gtk.Window.__init__(self, title=_(u"View Student Performance"))
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # get class parameters
        self.name = name
        self.password = password
        self.exam_id = ''
        self.bases = ''
        self.cases = ''
        self.ddxs = ''
        self.baseline = ''
        self.ab = ''
        self.ddx = ''
        self.notebook = Gtk.Notebook()

        self.window_resources = {
            "exam_id": self.exam_id,
            "baseline": self.baseline,
            "ab": self.ab,
            "ddx": self.ddx,
            "notebook": self.notebook,
        }

        # build menu bar
        box = self.build_bar()

        vbox = self.build_interface()
        base_vbox = Gtk.HBox(False, 2)
        ab_vbox = Gtk.VBox(False, 2)
        ddx_vbox = Gtk.VBox(False, 2)

        # Build main notebook. Each tab represents an instructional phase.
        self.notebook.set_tab_pos(Gtk.POS_LEFT)

        # first selection notebook tab
        self.abDDX = vbox
        self.abDDX.set_property('border-width', 15)
        abDDX_label = simLabels.MilestoneNameLabel(_(u"Select Assessment"))
        self.notebook.append_page(self.abDDX, abDDX_label)

        # baseline exam notebook tab
        self.window_resources['baseline'] = base_vbox
        self.window_resources['baseline'].set_property('border-width', 15)
        baseline_label = simLabels.MilestoneNameLabel(_(u"Baseline Palpation"))
        self.notebook.append_page(self.window_resources['baseline'], baseline_label)

        # ab exam notebook tab
        self.window_resources['ab'] = ab_vbox
        self.window_resources['ab'].set_property('border-width', 15)
        ab_label = simLabels.MilestoneNameLabel(_(u"Abnormality Detection"))
        self.notebook.append_page(self.window_resources['ab'], ab_label)

        # ddx exam notebook tab
        self.window_resources['ddx'] = ddx_vbox
        self.window_resources['ddx'].set_property('border-width', 15)
        ddx_label = simLabels.MilestoneNameLabel(_(u"Case Diagnosis"))
        self.notebook.append_page(self.window_resources['ddx'], ddx_label)

        # add vbox as widget to window
        self.notebook.show()

        f_vbox = Gtk.VBox(False, 2)
        f_vbox.pack_start(box, False, False, 0)
        f_vbox.pack_start(self.notebook, True, True, 0)
        self.add(f_vbox)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)
        self.notebook.set_current_page(0)
        self.notebook.get_nth_page(1).hide()
        self.notebook.get_nth_page(2).hide()
        self.notebook.get_nth_page(3).hide()

    def build_interface(self):
        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        # scroller window for all abnormality and ddx exams in queue
        sw = Gtk.ScrolledWindow()
        sw.set_shadow_type(Gtk.SHADOW_ETCHED_IN)
        sw.set_policy(Gtk.POLICY_AUTOMATIC, Gtk.POLICY_AUTOMATIC)

        # pack scroller box to an h box
        ovbox.pack_start(sw, True, True, 0)
        hbox.pack_start(ovbox, True, True, 0)

        # get database entries for treeview in scroller window
        store = self.create_model()

        treeView = Gtk.TreeView(store)
        treeView.connect('cursor-changed', self.on_row_change)
        treeView.set_rules_hint(True)
        sw.add(treeView)

        self.create_columns(treeView)

        # Add navigation buttons
        self.button_tree = self.add_buttons()

        # pack all to vbox
        vbox.pack_start(hbox, True, True, 0)
        vbox.pack_start(self.button_tree, False, False, 0)

        return vbox

    def build_logo(self, widget):
        logo = Gtk.Image()
        logo.set_from_file('img/acdet-logo.gif')

        widget.pack_start(logo, False, False, 0)

        return widget

    def add_buttons(self):

        button_table = Gtk.Table(rows=2, columns=2)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(_(u"View Exam"))
        right_button.connect('clicked', self.view)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        view_button = self.build_button(_(u"Return"))
        view_button.connect('clicked', self.go_back)
        button_table.attach(view_button, 1, 2, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_button(self, label_text):
        from simLabels import construct_markup
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=20)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def setup_transfer(self):
        self.splash_screen = splashscreen.SplashScreen()
        self.splash_screen.show_all()
        while Gtk.events_pending():
            Gtk.main_iteration()

    def close_menu(self):
        self.handler_block(self.destroy_signal_handler)
        self.destroy()

    def finish_transfer(self):
        self.splash_screen.hide()
        self.close_menu()

    def view(self, widget):
        # view highlighted exam's scores
        assessmentViewer.AssessmentViewer(self.window_resources, self.bases, self.cases, self.ddxs)

    def go_back(self, widget):
        from sim import UserType
        self.setup_transfer()
        UserType('faculty', self.name, self.password)
        self.finish_transfer()

    def create_model(self):
        store = Gtk.ListStore(str, str, str, str)
        self.exam_info = exammodel.ExamModel()
        self.exams = self.exam_info.get_all(key='check')

        if self.exams:
            for exam in self.exams:
                # query exam model by one exam title to give AbSim machine commands.
                ep = examParser.ExamParser(flag='one', title=exam[0].decode('utf-8'))
                case_info = ep.get_exam_info(ep.flag, ep.title)
                try:
                    case_list_comm, case_title_list, baseline_model, baseline_flag,\
                    ddx_cases = ep.parse_exam_info(case_info)
                    if baseline_flag:
                        base = 'yes'
                    else:
                        base = 'no'
                    if len(case_list_comm) > 0:
                        cases = 'yes'
                    else:
                        cases = 'no'
                    if len(ddx_cases) > 0:
                        ddx = 'yes'
                    else:
                        ddx = 'no'
                    store.append([exam[0].decode('utf-8'), base, cases, ddx])
                except TypeError:
                    pass

        else:
            logging.debug('No assessments returned')
        return store

    def create_columns(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Assessment Title"), renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        renderer_text.set_property('ellipsize', Pango.ELLIPSIZE_END)
        column = Gtk.TreeViewColumn(_(u"Has Baseline?"), renderer_text, text=1)
        column.set_sort_column_id(1)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Has Abnormality Detection?"), renderer_text, text=2)
        column.set_sort_column_id(2)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Has Case Diagnosis?"), renderer_text, text=3)
        column.set_sort_column_id(3)
        column.set_resizable(True)
        treeView.append_column(column)

    def on_row_change(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()
        self.window_resources['exam_id'] = model.get(iter, 0)[0]
        self.bases = model.get(iter, 1)[0]
        self.cases = model.get(iter, 2)[0]
        self.ddxs = model.get(iter, 3)[0]
