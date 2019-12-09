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


class AssessmentViewer:
    """A class to handle vieswing the results of custom tests"""
    def __init__(self, section, window_resources, bases, cases, ddxs):

        self.section = section
        self.window_resources = window_resources
        self.bases = bases
        self.cases = cases
        self.ddxs = ddxs

        self.exam_info = takenmodel.TakenModel()
        self.exam = self.exam_info.get_by_exam_section_id(self.section, self.window_resources["exam_id"])

        # get pages and facilitate shift
        page1 = self.window_resources['notebook'].get_nth_page(0)
        page = self.window_resources['notebook'].get_nth_page(1)
        page2 = self.window_resources['notebook'].get_nth_page(2)
        page3 = self.window_resources['notebook'].get_nth_page(3)

        if self.exam:

            page1.hide()
            page.show()
            page2.show()
            page3.show()

            if self.bases == 'yes':
                vba = ViewBaselineAssessments(self.section, self.window_resources["exam_id"])
                self.window_resources['baseline'].add(vba.vbox)
                self.window_resources['baseline'].show_all()
                self.window_resources['notebook'].set_current_page(1)
            else:
                page.hide()
            if self.cases == 'yes':
                ab = AbTest(self.exam, page, page1, page2, page3)
                self.window_resources['ab'].add(ab.vbox)
                self.window_resources['ab'].show_all()
                if self.bases != 'yes':
                    self.window_resources['notebook'].set_current_page(2)
            else:
                page2.hide()
            if self.ddxs == 'yes':
                ddx = DdxTest(self.exam, page, page1, page2, page3)
                self.window_resources['ddx'].add(ddx.vbox)
                self.window_resources['ddx'].show_all()
                if self.bases != 'yes' and self.cases != 'yes':
                    self.window_resources['notebook'].set_current_page(3)
            else:
                page3.hide()

        else:
            page1.show()
            page.hide()
            page2.hide()
            page3.hide()

            sim_message(self.window_resources['window'], info_string=_(u'No Assessments Taken'), secondary_text=
                        _(u'Please check back when students have taken your assessment.'))


class ViewsController:
    def __init__(self, exam, p, p1, p2, p3, flag):

        self.exam = exam
        self.p = p
        self.p1 = p1
        self.p2 = p2
        self.p3 = p3
        self.flag = flag

    def build_interface(self):
        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        # scroller window for all ddx exams in queue
        sw = Gtk.ScrolledWindow()
        sw.set_shadow_type(Gtk.SHADOW_ETCHED_IN)
        sw.set_policy(Gtk.POLICY_AUTOMATIC, Gtk.POLICY_AUTOMATIC)

        # pack scroller box to an h box
        ovbox.pack_start(sw, True, True, 0)
        hbox.pack_start(ovbox, True, True, 0)

        # get database entries for treeview in scroller window
        store, ch_headers = self.create_model()

        treeView = Gtk.TreeView(store)
        treeView.connect('cursor-changed', self.on_row_change)
        treeView.set_rules_hint(True)
        sw.add(treeView)

        self.create_columns(treeView, ch_headers)

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

    def go_back(self, widget):
        self.p1.show()
        self.p.hide()
        self.p2.hide()
        self.p3.hide()

        for i in self.p.get_children():
            self.p.remove(i)

        for i in self.p2.get_children():
            self.p2.remove(i)

        for i in self.p3.get_children():
            self.p3.remove(i)

    def add_buttons(self):

        button_table = Gtk.Table(rows=1, columns=1)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(_(u"Export to Desktop"))
        # right_button.connect('clicked', self.export)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        view_button = self.build_button(_(u"Return"))
        view_button.connect('clicked', self.go_back)
        button_table.attach(view_button, 1, 2, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def get_text(self, heads, flag):
        """ Function to pre-allocate memory to strings for translation """
        from cases import Cases
        if flag == 'ab':
            possible_ab = Cases().pretty_ailment_names
            return [possible_ab[i] if i in possible_ab.keys() else i for i in heads]

        if flag == 'ddx':
            ddx_list = {
                "Upper Gastrointestinal Etiology": _(u"Upper Gastrointestinal Etiology"),
                "Choledocolithiasis": _(u"Choledocolithiasis"),
                "Pancreatitis": _(u"Pancreatitis"),
                "Cholecystitis": _(u"Cholecystitis"),
                "Mesenteric Infarction": _(u"Mesenteric Infarction"),
                "Small Bowel Obstruction": _(u"Small Bowel Obstruction"),
                "Appendicitis": _(u"Appendicitis"),
                "Diverticulitis": _(u"Diverticulitis"),
                "Acute Enteritis": _(u"Acute Enteritis"),
            }

            return [ddx_list[i] if i in ddx_list.keys() else i for i in heads]

    def chunkIt(self, seq, num):
        avg = len(seq) / float(num)
        out = []
        last = 0.0

        while last < len(seq):
            out.append(seq[int(last):int(last + avg)])
            last += avg

        return out

    def init_list_store(self, ls):
        types = []
        for mot in ls:
            types.append(type(mot))

        lsstore = Gtk.ListStore()
        lsstore.set_column_types(types)

        return lsstore

    def create_model(self):
        from Levenshtein import distance

        if self.exam:
            store_list = []
            answer_list = []
            num = 0
            for exam in self.exam:
                num += 1
                if self.flag == 'ddx':
                    store_list.extend([exam[0], exam[1], exam[3], exam[7], exam[8]])
                    c_c_list = exam[5].split('+')
                else:
                    store_list.extend([exam[0], exam[1], exam[2], exam[6], exam[8]])
                    c_c_list = exam[4].split('+')
                for i in c_c_list:
                    a = i.split('-')[1][8:]
                    sa = i.split('-')[0][9:]

                    if distance(a, sa) < 1:
                        store_list.append('white')
                    elif distance(a, sa) < 4:
                        store_list.append('orange')
                    else:
                        store_list.append('red')

                    store_list.append(a)
                    answer_list.append(sa)

            # chunk listed data
            chunked = self.chunkIt(store_list, num)
            ch_ans = self.chunkIt(answer_list, num)

            # use pre-memory strings for translation purposes...
            ch_ans = self.get_text(ch_ans[0], flag=self.flag)

            # initialize list store with custom exam data length
            store = self.init_list_store(chunked[0])

            for ch in chunked:
                translated = self.get_text(ch, flag=self.flag)
                store.append(translated)

            # also need to return one of answer_list to give column names
            return store, ch_ans

        else:
            logging.debug('No exams returned')

            return '', ''

    def iterate_headers(self, h, tv):
        for ind in range(0, len(h)):
            renderer_text = Gtk.CellRendererText()
            column = Gtk.TreeViewColumn(h[ind], renderer_text, text=ind+6+ind, background=ind+5+ind)
            column.set_sort_column_id(ind + 6 + ind)
            column.set_resizable(True)
            tv.append_column(column)

    def create_columns(self, treeView, headers):
        """ need to add in iteration to put answers from assessment as row header with student answer value in cell """

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Student ID"), renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        '''
        renderer_text = Gtk.CellRendererText()
        renderer_text.set_property('ellipsize', Pango.ELLIPSIZE_END)
        column = Gtk.TreeViewColumn(_(u"Assessment Title"), renderer_text, text=1)
        column.set_sort_column_id(1)
        column.set_resizable(True)
        treeView.append_column(column)
        '''

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Score"), renderer_text, text=2)
        column.set_sort_column_id(2)
        column.set_resizable(True)
        treeView.append_column(column)

        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Time Elapsed"), renderer_text, text=3)
        column.set_sort_column_id(3)
        column.set_resizable(True)
        treeView.append_column(column)

        '''
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Date Submitted"), renderer_text, text=4)
        column.set_sort_column_id(4)
        column.set_resizable(True)
        treeView.append_column(column)
        '''

        # add in function to iterate over list of answers to create headers and add values
        self.iterate_headers(headers, treeView)

    def on_row_change(self, tv):
        tv.get_selection().unselect_all()


class DdxTest:
    def __init__(self, exam, p, p1, p2, p3):

        self.exam = exam
        self.vbox = ViewsController(self.exam, p, p1, p2, p3, flag='ddx').build_interface()


class AbTest:
    def __init__(self, exam, p, p1, p2, p3):

        self.exam = exam
        self.vbox = ViewsController(self.exam, p, p1, p2, p3, flag='ab').build_interface()


class ViewBaselineAssessments:
    def __init__(self, section, exam_id):

        self.coverage_assessment_model = baselinemodel.BaselineModel()

        self.section = section
        self.exam_id = exam_id
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
        ##write data to csv file
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
        store = Gtk.ListStore(str, str, str, str, str, str, str, str)
        self.exams = self.coverage_assessment_model.get_by_exam_section_id(self.section, self.exam_id)
        for exam in self.exams:
            store.append([exam[3], exam[2], exam[4], exam[5], exam[6], exam[7], exam[9], exam[10]])
        return store

    def create_columns(self, treeView):
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Student ID"), renderer_text, text=0)
        column.set_sort_column_id(0)
        column.set_resizable(True)
        treeView.append_column(column)

        '''
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Assessment Title"), renderer_text, text=1)
        column.set_sort_column_id(1)
        column.set_resizable(True)
        treeView.append_column(column)
        '''

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
        column = Gtk.TreeViewColumn(_(u"Time Elapsed"), renderer_text, text=6)
        column.set_sort_column_id(6)
        column.set_resizable(True)
        treeView.append_column(column)

        '''
        renderer_text = Gtk.CellRendererText()
        column = Gtk.TreeViewColumn(_(u"Date Submitted"), renderer_text, text=7)
        column.set_sort_column_id(7)
        column.set_resizable(True)
        treeView.append_column(column)
        '''

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
