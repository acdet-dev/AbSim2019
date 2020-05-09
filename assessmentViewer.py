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
from buildWidgets import BuildWidgets
import logging
import gi
from collections import OrderedDict
from aStringResources import AStringResources
from LanguageConversion import LanguageConversion
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class AssessmentViewer:
    """A class to handle viewing the results of custom tests"""
    def __init__(self, section, window_resources, bases, cases, ddxs):
        self.section = section
        self.window_resources = window_resources
        self.string_resources = AStringResources("assessment_viewer", back_flag=True,
                                                 label_flag=True).get_by_identifier()
        self.window_resources['bases'] = bases
        self.window_resources['cases'] = cases
        self.window_resources['ddxs'] = ddxs
        self.window_resources['bw'] = BuildWidgets()

        self.exam_info = takenmodel.TakenModel()

        self.exam_list = []

        try:
            for s in section:
                self.exam_list.extend(self.exam_info.get_by_exam_section_id(s, self.window_resources["exam_id"]))

            self.exam = list(filter(None, self.exam_list))
        except TypeError:
            self.exam = None

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

            if self.window_resources['bases'] == 'yes':
                vba = ViewBaselineAssessments(self.section, self.window_resources["exam_id"], self.string_resources,
                                              self.window_resources["window"], self.window_resources["bw"])
                self.window_resources['baseline'].add(vba.vbox)
                self.window_resources['baseline'].show_all()
                self.window_resources['notebook'].set_current_page(1)
            else:
                page.hide()
            if self.window_resources['cases'] == 'yes':
                ab = AbTest(self.section, self.exam, page, page1, page2, page3, self.string_resources,
                            self.window_resources["window"], self.window_resources["bw"])
                self.window_resources['ab'].add(ab.vbox)
                self.window_resources['ab'].show_all()
                if self.window_resources['bases'] != 'yes':
                    self.window_resources['notebook'].set_current_page(2)
            else:
                page2.hide()
            if self.window_resources['ddxs'] == 'yes':
                ddx = DdxTest(self.section, self.exam, page, page1, page2, page3, self.string_resources,
                              self.window_resources["window"], self.window_resources["bw"])
                self.window_resources['ddx'].add(ddx.vbox)
                self.window_resources['ddx'].show_all()
                if self.window_resources['bases'] != 'yes' and self.window_resources['cases'] != 'yes':
                    self.window_resources['notebook'].set_current_page(3)
            else:
                page3.hide()

        else:
            page1.show()
            page.hide()
            page2.hide()
            page3.hide()

            sim_message(self.window_resources['window'], info_string=self.string_resources["failure_title"],
                        secondary_text=self.string_resources["failure_description"])


class ViewsController:
    def __init__(self, section, exam, p, p1, p2, p3, sr, window, builder, flag):
        self.section = section
        self.exam = exam
        self.p = p
        self.p1 = p1
        self.p2 = p2
        self.p3 = p3
        self.window = window
        self.builder = builder
        self.flag = flag
        self.string_resources = sr
        self.header_list = []
        self.data_list = []
        self.final_data_list = []

    def build_interface(self):
        # make boxes to hold all info
        vbox = Gtk.VBox(False, 8)
        ovbox = Gtk.VBox(False, 8)
        hbox = Gtk.HBox()

        # create scroller
        sw = self.builder.create_scroller()

        # pack scroller box to an h box
        ovbox.pack_start(sw, True, True, 0)
        hbox.pack_start(ovbox, True, True, 0)

        # get database entries for treeview in scroller window
        store, ch_headers = self.create_model()

        # build treeview
        tree_view = self.builder.build_tree_view(store, self.on_row_change)

        # add tree view to scrolled window
        sw.add(tree_view)

        # build list of headers
        column_header_list = [self.string_resources["column_header_1"], self.string_resources["column_header_2"],
                              self.string_resources["column_header_3"]]
        self.builder.create_columns(tree_view, column_header_list, custom_indices=[0, 2, 3])

        # add iterated headers to display test answers and colored cells
        self.iterate_headers(ch_headers, tree_view)

        # Add navigation buttons
        b_list = [self.string_resources["export_button_text"], self.string_resources["back_button"]]
        f_list = [self.export, self.go_back]
        f_size = 16
        button_tree = self.builder.add_horizontal_buttons(b_list, f_list, f_size)

        # pack all to vbox
        vbox.pack_start(hbox, True, True, 0)
        vbox.pack_start(button_tree, False, False, 0)

        return vbox

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

    def change_permissions_recursive(self, path, mode):
        import os
        for root, dirs, files in os.walk(path, topdown=False):
            for dir in [os.path.join(root, d) for d in dirs]:
                os.chmod(dir, mode)
        for file in [os.path.join(root, f) for f in files]:
            os.chmod(file, mode)

    def export(self, widget):
        import os
        import shutil
        import csv

        # get absim current dir and desktop
        c_dir = os.getenv('LOCALAPPDATA') + '\\AbSim2020'
        desktop = os.environ['USERPROFILE'] + '\\Desktop'

        # get headers as list to pass to writer
        heads = [self.string_resources["column_header_1"], self.string_resources["column_header_2"],
                 self.string_resources["column_header_3"]]
        heads.extend(self.header_list)

        if len(self.exam) > 0:
            print(self.exam)
            if self.flag == 'ab':
                file_string = c_dir + '\\' + '_'.join(self.section) + self.exam[0][1] + '_abnormality_data.csv'
                with open(file_string, 'w+', newline='') as outcsv:
                    writer = csv.DictWriter(outcsv, fieldnames=heads)
                    writer.writeheader()
                    partial_dict = OrderedDict()
                    try:
                        for j in range(0, len(self.exam)):
                            partial_dict[heads[0]] = self.exam[j][0]
                            partial_dict[heads[1]] = self.exam[j][2]
                            partial_dict[heads[2]] = self.exam[j][6]
                            for i in range(0, len(self.final_data_list)):
                                partial_dict[list(self.final_data_list[i][j].keys())[0]] =\
                                    list(self.final_data_list[i][j].values())[0]
                            writer.writerow(partial_dict)
                        sim_message(self.window, info_string=self.string_resources["export_title"],
                                    secondary_text=self.string_resources["export_description"])
                    except TypeError:
                        sim_message(self.window, info_string=self.string_resources["export_failure"],
                                    secondary_text=self.string_resources["export_fail_description"])
                try:
                    self.change_permissions_recursive(desktop, 0o777)
                    shutil.copy(file_string, desktop)
                except Exception as e:
                    logging.debug("Cannot write to desktop")
                    logging.debug(e)
                    self.change_permissions_recursive(desktop, 0o777)
                    try:
                        shutil.copy(file_string, desktop)
                    except Exception as e:
                        logging.debug("Still cannot write to desktop")
                        logging.debug(e)

            elif self.flag == 'ddx':
                file_string = c_dir + '\\' + '_'.join(self.section) + self.exam[0][1] + '_case_text_data.csv'
                with open(file_string, 'w+', newline='') as outcsv:
                    writer = csv.DictWriter(outcsv, fieldnames=heads)
                    writer.writeheader()
                    partial_dict = OrderedDict()
                    try:
                        for j in range(0, len(self.exam)):
                            partial_dict[heads[0]] = self.exam[j][0]
                            partial_dict[heads[1]] = self.exam[j][3]
                            partial_dict[heads[2]] = self.exam[j][7]
                            for i in range(0, len(self.final_data_list)):
                                partial_dict[list(self.final_data_list[i][j].keys())[0]] =\
                                    list(self.final_data_list[i][j].values())[0]
                            writer.writerow(partial_dict)
                        sim_message(self.window, info_string=self.string_resources["export_title"],
                                    secondary_text=self.string_resources["export_description"])
                    except TypeError:
                        sim_message(self.window, info_string=self.string_resources["export_failure"],
                                    secondary_text=self.string_resources["export_fail_description"])
                try:
                    self.change_permissions_recursive(desktop, 0o777)
                    shutil.copy(file_string, desktop)
                except Exception as e:
                    logging.debug("Cannot write to desktop")
                    logging.debug(e)
                    self.change_permissions_recursive(desktop, 0o777)
                    try:
                        shutil.copy(file_string, desktop)
                    except Exception as e:
                        logging.debug("Still cannot write to desktop")
                        logging.debug(e)

        else:
            logging.debug('Could not get exam info because no exams exist.')

    def get_text(self, heads, flag):
        """ Function to pre-allocate memory to strings for translation """
        from cases import Cases
        from casetext import CaseText
        if flag == 'ab':
            possible_ab = Cases().pretty_ailment_names
            return [possible_ab[i] if i in possible_ab.keys() else i for i in heads]

        if flag == 'ddx':
            ddx_names = CaseText().cases.get(525, [])
            ddx_list = []
            for j in ddx_names:
                temp = [i["ddx_name"] for i in j]
                ddx_list.append(temp[0])
            ddx_dict = {
                "Upper Gastrointestinal Etiology": ddx_list[0],
                "Choledocolithiasis": ddx_list[1],
                "Pancreatitis": ddx_list[2],
                "Cholecystitis": ddx_list[3],
                "Mesenteric Infarction": ddx_list[4],
                "Small Bowel Obstruction": ddx_list[5],
                "Appendicitis": ddx_list[6],
                "Diverticulitis": ddx_list[7],
                "Acute Enteritis": ddx_list[8],
            }

            return [ddx_dict[i] if i in ddx_dict.keys() else i for i in heads]

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
                    score = str(round(float(exam[3]) * 100, 2))
                    store_list.extend([exam[0], exam[1], score, exam[7], exam[8]])
                    c_c_list = exam[5].split('+')
                else:
                    score = str(round(float(exam[2])*100, 2))
                    store_list.extend([exam[0], exam[1], score, exam[6], exam[8]])
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
            self.header_list = ch_ans
            store = self.init_list_store(chunked[0])

            for ch in chunked:
                translated = self.get_text(ch, flag=self.flag)
                self.data_list.append(translated)
                store.append(translated)

            # also need to return one of answer_list to give column names
            return store, ch_ans

        else:
            logging.debug('No exams returned')

            return '', ''

    def iterate_headers(self, h, tv):
        for ind in range(0, len(h)):
            self.final_data_list.append([{h[ind]: self.data_list[j][ind+6+ind]} for j in range(0, len(self.data_list))])
            renderer_text = Gtk.CellRendererText()
            column = Gtk.TreeViewColumn(h[ind], renderer_text, text=ind+6+ind, background=ind+5+ind)
            column.set_sort_column_id(ind + 6 + ind)
            column.set_resizable(True)
            tv.append_column(column)

    def on_row_change(self, tv):
        tv.get_selection().unselect_all()


class DdxTest:
    def __init__(self, section, exam, p, p1, p2, p3, sr, window, builder):
        self.section = section
        self.exam = exam
        self.string_resources = sr
        self.window = window
        self.builder = builder
        self.vbox = ViewsController(self.section, self.exam, p, p1, p2, p3,
                                    self.string_resources, self.window, self.builder, flag='ddx').build_interface()


class AbTest:
    def __init__(self, section, exam, p, p1, p2, p3, sr, window, builder):
        self.section = section
        self.exam = exam
        self.string_resources = sr
        self.window = window
        self.builder = builder
        self.vbox = ViewsController(self.section, self.exam, p, p1, p2, p3,
                                    self.string_resources, self.window, self.builder, flag='ab').build_interface()


class ViewBaselineAssessments:
    def __init__(self, section, exam_id, sr, window, builder):

        self.coverage_assessment_model = baselinemodel.BaselineModel()
        self.string_resources = sr
        self.section = section
        self.exam_id = exam_id
        self.window = window
        self.builder = builder
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

        # build scroller
        sw = self.builder.create_scroller(o_w=200, o_h=200)

        ovbox.pack_start(sw, False, False, 0)
        ovbox.pack_start(self.coverage_frame, True, True, 10)
        hbox.pack_start(ovbox, True, True, 0)
        hbox.pack_start(self.coverage_table, True, True, 10)

        self.vbox.pack_start(hbox, True, True, 0)

        # build store
        store = self.create_model()

        # build tree view
        tree_view = self.builder.build_tree_view(store, self.on_row_change)

        # add data tree to scroller
        sw.add(tree_view)

        # build columns with headers
        header_list = [self.string_resources["column_header_1"], self.string_resources["not_label"],
                       self.string_resources["light_label"], self.string_resources["deep_label"],
                       self.string_resources["too_deep_label"], self.string_resources["column_header_3"]]
        custom_indices = [0, 2, 3, 4, 5, 6]
        self.builder.create_columns(tree_view, header_list, custom_indices)

        iter_root = tree_view.get_model().get_iter_first()
        tree_selection = tree_view.get_selection()
        tree_selection.unselect_all()
        tree_selection.select_iter(iter_root)
        self.on_row_change(tree_view)

        # self.export()

    def export(self):
        # write data to csv file
        import os
        import shutil
        import csv

        # get relevant dirs
        c_dir = os.getenv('LOCALAPPDATA') + '\\AbSim2020'
        desktop = os.getenv('USERPROFILE') + '\\Desktop'

        # create file string
        file_string = c_dir + '\\' + '_'.join(self.section) + self.exams[0][2] + '_baseline_data.csv'

        # create headers with translatable text
        heads = [self.string_resources["column_header_1"], self.string_resources["not_label"],
                 self.string_resources["light_label"], self.string_resources["deep_label"],
                 self.string_resources["too_deep_label"],
                 self.string_resources["column_header_3"]]

        # check that we have exams to write
        if len(self.exams) > 0:
            with open(file_string, 'w+', newline='') as outcsv:
                writer = csv.DictWriter(outcsv, fieldnames=heads)
                writer.writeheader()
                try:
                    writer.writerows({heads[0]: exam[3], heads[1]: exam[4], heads[2]: exam[5], heads[3]: exam[6],
                                      heads[4]: exam[7], heads[5]: exam[9]} for exam in self.exams)
                    sim_message(self.window, info_string=self.string_resources["export_title"],
                                secondary_text=self.string_resources["export_description"])
                except TypeError:
                    pass

            try:
                shutil.copy(file_string, desktop)
            except PermissionError:
                logging.debug("Cannot write to desktop")

        else:
            logging.debug('Could not get exam info because no exams exist.')

    def create_model(self):
        store = Gtk.ListStore(str, str, str, str, str, str, str, str)
        self.exams = self.coverage_assessment_model.get_by_exam_section_id(self.section, self.exam_id)
        for exam in self.exams:
            store.append([exam[3], exam[2], exam[4], exam[5], exam[6], exam[7], exam[9], exam[10]])
        return store

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
