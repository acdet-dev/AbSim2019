import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Pango

import observer
import pressurepoints
import ailments
import guarding
import statewatcher
import donottouch
import additiveview
import copy
import coverageassessment
import port_settings
import simLabels
import menu
from menu import *
from i18ntrans2 import _
import takenmodel
import baselinemodel
import splashscreen
from messages import sim_message


class ViewPerformance(Gtk.Window, menu.MenuBar):
    def __init__(self, name, password):

        # Make window
        Gtk.Window.__init__(self, title=_(u"View Student Performance"))
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # get class parameters
        self.name = name
        self.password = password

        # build menu bar
        box = self.build_bar()

        self.notebook = Gtk.Notebook()

        vbox = self.build_interface()

        # Build main notebook. Each tab represents an instructional phase.
        self.notebook.set_tab_pos(Gtk.POS_LEFT)

        self.abDDX = vbox
        self.abDDX.set_property('border-width', 15)
        abDDX_label = simLabels.MilestoneNameLabel(_(u"DDX Exams"))
        self.notebook.append_page(self.abDDX, abDDX_label)

        self.baseline = ViewBaselineAssessments()
        self.baseline.set_property('border-width', 15)
        baseline_label = simLabels.MilestoneNameLabel(_(u"Baseline Exams"))
        self.notebook.append_page(self.baseline, baseline_label)

        # add vbox as widget to window
        self.notebook.show()

        f_vbox = Gtk.VBox(False, 2)
        f_vbox.pack_start(box, False, False, 0)
        f_vbox.pack_start(self.notebook, True, True, 0)
        self.add(f_vbox)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)
        self.notebook.set_current_page(0)

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

        right_button = self.build_button(_(u"Export Data"))
        right_button.connect('clicked', self.export)
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

    def export(self, widget):
        ##write data to pandas dataframe and then csv file
        import os
        import csv

        c_dir = os.getenv('LOCALAPPDATA') + '\\AbSimBeta'

        if len(self.exams) > 0:
            fields = ['Student ID', 'Exam ID', 'Score', 'Correct', 'Total']
            try:
                added = len(self.exams[0][5].split('+'))

                for i in range(1, added + 1):
                    fields.append('answer_' + str(i))
                    fields.append('chosen_' + str(i))

            except IndexError:
                pass

            fields.append('Time Completed')

            outcsv = csv.writer(open(c_dir + '\\' + self.exams[0][1] + '_exam_data.csv', 'w+', newline=''))
            outcsv.writerow(fields)

            try:
                for exam in self.exams:
                    temp = list()
                    temp.append(exam[0])
                    temp.append(exam[1])
                    temp.append(exam[2])
                    temp.append(exam[3])
                    temp.append(exam[4])
                    for ans in exam[5].split('+'):
                        temp.append(ans.split('-')[0].split(': ')[1])
                        temp.append(ans.split('-')[1].split(': ')[1])
                    temp.append(exam[6])

                    outcsv.writerow(temp)

                sim_message(self, info_string=_(u'Exam Data Exported!'),
                            secondary_text=_(u"A CSV file with exam data was created in AbSim's directory."))

                self.baseline.export()

                self.clear_data()

            except TypeError:
                logging.debug('Could not get exam info because no exams exist.')

                sim_message(self, info_string=_(u'Exam Data NOT Exported!'),
                            secondary_text=_(u'An error occurred preventing the exportation.'))

        else:
            logging.debug('Could not get exam info because no exams exist.')

            sim_message(self, info_string=_(u'Exam Data NOT Exported!'),
                        secondary_text=_(u'An error occurred preventing the exportation.'))

    def clear_data(self):
        ## write in mechanism to clear exams taken (by id) from exams model.
        import exammodel

        t = takenmodel.TakenModel()
        e = exammodel.ExamModel()
        taken_list = t.get_all(key='check')

        title_list = []
        try:
            for i in range(0, len(taken_list)):
                title_list.append(taken_list[i][1])
        except TypeError:
            logging.debug('Exam gathering failed due to type error.')

        my_set_list = list(set(title_list))

        if len(my_set_list) > 0:

            try:
                for i in my_set_list:
                    t.delete_rows(key=i)
                    e.delete_by_exam_id(key=i)

                sim_message(self, info_string=_(u'Exam Data Deleted!'),
                            secondary_text=_(u'Window will refresh and update.'))

                self.setup_transfer()
                ViewPerformance(self.name, self.password)
                self.finish_transfer()

            except TypeError:
                logging.debug('Table delete statements failed because no list object exists.')
                sim_message(self, info_string=_(u'Exam Data NOT Deleted!'),
                            secondary_text=_(u'An error occurred preventing the deletion.'))
        else:
            logging.debug('Table delete statements failed because no list object exists.')
            sim_message(self, info_string=_(u'Exam Data NOT Deleted!'),
                        secondary_text=_(u'An error occurred preventing the deletion.'))


    def go_back(self, widget):
        from sim import UserType
        self.setup_transfer()
        UserType('faculty', self.name, self.password)
        self.finish_transfer()

    def create_model(self):
        store = Gtk.ListStore(str, str, str, str, str, str)
        self.exam_info = takenmodel.TakenModel()
        self.exams = self.exam_info.get_all(key='check')

        if self.exams:
            for exam in self.exams:
                store.append([exam[0], exam[1], exam[2], exam[3], exam[4], exam[6]])

        else:
            logging.debug('No exams returned')
        return store

    def create_columns(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Student ID"), renderer_text, text=0)
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


    def on_row_change(self, treeview):
        pass


class ViewBaselineAssessments(Gtk.HBox):
    def __init__(self):
        super(ViewBaselineAssessments, self).__init__(False, 2)

        self.coverage_assessment_model = baselinemodel.BaselineModel()

        self.new_selected_case = observer.Observer()
        self.ailments = ailments.Ailments()
        self.pressurepoints = pressurepoints.PressureList(self.new_selected_case)
        self.guarding = guarding.Guarding()
        self.state_watcher = statewatcher.StateWatcher(self.ailments, self.pressurepoints)
        self.touch_alerter = donottouch.TouchAlerter(self.state_watcher, self.pressurepoints)
        #self.port_settings = port_settings.PortSettings(self, self.state_watcher, self.touch_alerter)
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

        vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        sw = Gtk.ScrolledWindow()
        sw.set_shadow_type(Gtk.SHADOW_ETCHED_IN)
        sw.set_policy(Gtk.POLICY_AUTOMATIC, Gtk.POLICY_AUTOMATIC)

        ovbox.pack_start(sw, True, True, 0)
        ovbox.pack_start(self.coverage_frame, True, True, 10)
        hbox.pack_start(ovbox, True, True, 0)
        hbox.pack_start(self.coverage_table, True, True, 10)

        vbox.pack_start(hbox, True, True, 0)

        store = self.create_model()

        treeView = Gtk.TreeView(store)
        treeView.connect('cursor-changed', self.on_row_change)
        treeView.set_rules_hint(True)
        sw.add(treeView)

        self.create_columns(treeView)
        self.add(vbox)
        self.show_all()

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
            store.append([exam[1], exam[0], exam[2], exam[3], exam[4], exam[5], exam[7]])
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
        exam_view_resources['pressurepoints'] = exam[6]

        if hasattr(self, 'coverage_view'):
            self.coverage_frame.remove(self.coverage_view)
        self.coverage_view = additiveview.AdditiveView(self.coverage_frame, exam_view_resources, True)
        self.coverage_frame.add(self.coverage_view)
        self.coverage_frame.show_all()

        location_objectives = self.location_coverage_analyzer.analyze(exam[6])
        self.coverage_table.show_objective_performance(location_objectives)
