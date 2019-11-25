import observer
import pressurepoints
import ailments
import guarding
import statewatcher
import donottouch
import additiveview
import copy
import coverageassessment
from messages import sim_message
import takenmodel
import baselinemodel
import logging
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib, Pango


class AssessmentViewer():
    """A class to handle vieswing the results of custom tests"""
    def __init__(self, window_resources, bases, cases, ddxs):
        self.window_resources = window_resources
        self.bases = bases
        self.cases = cases
        self.ddxs = ddxs

        self.exam_info = takenmodel.TakenModel()
        self.exam = self.exam_info.get_by_exam_id(self.window_resources["exam_id"])

        if self.bases == 'yes':
            vba = ViewBaselineAssessments()
            self.window_resources['baseline'].add(vba.vbox)
            self.window_resources['baseline'].show_all()
        if self.cases == 'yes':
            ab = AbTest(self.exam)
            self.window_resources['ab'].add(ab.vbox)
            self.window_resources['ab'].show_all()
        if self.ddxs == 'yes':
            pass


class AbTest():
    def __init__(self, exam):

        self.exam = exam

        self.vbox = self.build_interface()

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

    def build_button(self, label_text):
        from simLabels import construct_markup
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=20)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def add_buttons(self):

        button_table = Gtk.Table(rows=1, columns=1)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(_(u"Export to Desktop"))
        #right_button.connect('clicked', self.export)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def create_model(self):
        store = Gtk.ListStore(str, str, str, str, str, str)
        if self.exam:
            for exam in self.exam:
                store.append([exam[0], exam[1], exam[2], exam[3], exam[4], exam[6]])

        else:
            logging.debug('No exams returned')
        return store

    def create_columns(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Assessment Title"), renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        renderer_text.set_property('ellipsize', Pango.ELLIPSIZE_END)
        column = Gtk.TreeViewColumn(_(u"Exam Title"), renderer_text, text=1)
        column.set_sort_column_id(1)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Score"), renderer_text, text=2)
        column.set_sort_column_id(2)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Correct"), renderer_text, text=3)
        column.set_sort_column_id(3)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Total"), renderer_text, text=4)
        column.set_sort_column_id(4)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Time Completed"), renderer_text, text=5)
        column.set_sort_column_id(5)
        column.set_resizable(True)
        treeView.append_column(column)

    def on_row_change(self, widget):
        pass


class ViewBaselineAssessments():
    def __init__(self):

        self.coverage_assessment_model = baselinemodel.BaselineModel()

        self.new_selected_case = observer.Observer()
        self.ailments = ailments.Ailments()
        self.pressurepoints = pressurepoints.PressureList(self.new_selected_case)
        self.guarding = guarding.Guarding()
        self.state_watcher = statewatcher.StateWatcher(self.ailments, self.pressurepoints)
        self.touch_alerter = donottouch.TouchAlerter(self.state_watcher, self.pressurepoints)
        self.view_resources = {
            'ailments': self.ailments,
            'pressurepoints': self.pressurepoints,
            'guarding': self.guarding,
            'state_watcher': self.state_watcher,
            'new_case_observer': self.new_selected_case,
        }

        self.coverage_frame = Gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789, obey_child=False)

        self.location_coverage_analyzer = coverageassessment.LocationCoverageAnalyzer()
        self.coverage_table = coverageassessment.LocationCoverageAnalysisView()

        self.vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        sw = Gtk.ScrolledWindow()
        sw.set_shadow_type(Gtk.SHADOW_ETCHED_IN)
        sw.set_policy(Gtk.POLICY_AUTOMATIC, Gtk.POLICY_AUTOMATIC)

        ovbox.pack_start(sw, True, True, 0)
        ovbox.pack_start(self.coverage_frame, True, True, 10)
        hbox.pack_start(ovbox, True, True, 0)
        hbox.pack_start(self.coverage_table, True, True, 10)

        self.vbox.pack_start(hbox, True, True, 0)

        store = self.create_model()

        treeView = Gtk.TreeView(store)
        treeView.connect('cursor-changed', self.on_row_change)
        treeView.set_rules_hint(True)
        sw.add(treeView)

        self.create_columns(treeView)

    def export(self):
        ##write data to pandas dataframe and then csv file
        import os
        import csv

        c_dir = os.getenv('LOCALAPPDATA') + '\\AbSimBeta'

        if len(self.exams) > 0:
            with open(c_dir + '\\' + self.exams[0][0] + '_baseline_data.csv', 'w+', newline='') as outcsv:
                writer = csv.DictWriter(outcsv, fieldnames=['Student ID', "Exam ID", "Not Palpated", "Light Palpation",
                                                            "Deep Palpation", "Too Deep", "Time Completed"])
                writer.writeheader()
                try:
                    writer.writerows({'Student ID': exam[1], 'Exam ID': exam[0], 'Not Palpated': exam[2],
                                      'Light Palpation': exam[3], 'Deep Palpation': exam[4], 'Too Deep': exam[5],
                                      'Time Completed': exam[7]} for exam in self.exams)
                    sim_message(self, info_string=_(u'Exam Data Exported!'),
                                secondary_text=_(u"A CSV file with exam data was created in AbSim's directory."))
                except TypeError:
                    pass
        else:
            logging.debug('Could not get exam info because no exams exist.')

    def create_model(self):
        store = Gtk.ListStore(str, str, str, str, str, str, str)
        self.exams = self.coverage_assessment_model.get_all()
        for exam in self.exams:
            store.append([exam[3], exam[2], exam[4], exam[5], exam[6], exam[7], exam[9]])
        return store

    def create_columns(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Student ID"), renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Exam Title"), renderer_text, text=1)
        column.set_sort_column_id(1)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Not Palpated"), renderer_text, text=2)
        column.set_sort_column_id(2)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Light Palpation"), renderer_text, text=3)
        column.set_sort_column_id(3)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Deep Palpation"), renderer_text, text=4)
        column.set_sort_column_id(4)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Too Deep"), renderer_text, text=5)
        column.set_sort_column_id(5)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Time Completed"), renderer_text, text=6)
        column.set_sort_column_id(6)
        column.set_resizable(True)
        treeView.append_column(column)

    def on_row_change(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()
        exam_id = model.get(iter, 1)[0]
        student_id = model.get(iter, 0)[0]
        exam = self.coverage_assessment_model.get_by_exam_student_id(exam_id, student_id)
        exam_view_resources = copy.copy(self.view_resources)
        exam_view_resources['pressurepoints'] = exam[8]

        if hasattr(self, 'coverage_view'):
            self.coverage_frame.remove(self.coverage_view)
        self.coverage_view = additiveview.AdditiveView(self.coverage_frame, exam_view_resources, True)
        self.coverage_frame.add(self.coverage_view)
        self.coverage_frame.show_all()

        location_objectives = self.location_coverage_analyzer.analyze(exam[8])
        self.coverage_table.show_objective_performance(location_objectives)
