# vim: set fileencoding=utf-8 :
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

import time
from models import exammodel as e
from cases import Cases
from casetext import CaseText
from aStringResources import AStringResources
from views.menuBar import MenuBar
from views.buildWidgets import BuildWidgets


class TestCreator(Gtk.Window, MenuBar):
    '''test making window. Allows faculty to create and assign tests'''

    def __init__(self, user_type, name, password):

        # initialize string resources
        self.string_resources = AStringResources("create_assessments", back_flag=True).get_by_identifier()

        # make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # intialize passed class variables
        self.user_type = user_type
        self.name = name
        self.password = password
        self.current_case = 'none n'

        # initialize class variables
        self.button_list = []
        self.case_list = []
        self.title_list = []
        self.case_dict = Cases().pretty_ailment_names

        # create instance objects of different exam selectors
        self.ddx_box = DdxExam(self.string_resources)
        self.ddx_box.show_all()

        self.baseline = BaselineExam(self.string_resources)
        self.baseline.show_all()

        # create empty boxes to pack view elements to
        self.hbox = Gtk.HBox()
        assignment_box = Gtk.VBox()

        # build interface
        builder_box = self.build_interface(assignment_box)
        builder_box.show_all()

        menu_bar = self.build_bar()
        final_vbox = Gtk.VBox()
        final_vbox.pack_start(menu_bar, False, False, 0)

        # widget packing statements
        self.hbox.pack_start(builder_box, False, False, 0)
        self.hbox.pack_start(Gtk.VSeparator(), False, False, 20)
        self.hbox.pack_start(self.ddx_box, False, False, 10)

        final_vbox.pack_start(self.hbox, False, False, 0)

        # add all packed elements to window
        self.add(final_vbox)
        self.show_all()

        self.destroy_signal_handler = self.connect("destroy", Gtk.main_quit)

    def add_check_buttons(self, builder):

        check_button_box = Gtk.HBox()

        check_button_half = Gtk.VBox()
        check_button_o_half = Gtk.VBox()

        case_commands = [
            'none n', 'appendix t', 'appendix g', 'appendix r', 'appendix gr',
            'bladder t', 'colon t', 'colon g', 'gallbladder t', 'gallbladder g',
            'ugi t', 'ovary_left t', 'ovary_left g', 'ovary_right t', 'ovary_right g',
            'pancreas t', 'hepatomegaly n', 'splenomegaly n', 'enlarged_bladder n']

        for i in range(0, int(len(case_commands)/2)):
            button = builder.build_check_button(self.case_dict[case_commands[i]], function=self.on_button_toggled,
                                                f_size=14, padding=[10, 10])
            check_button_half.pack_start(button, False, False, 0)
            self.button_list.append(button)

        for j in range(int(len(case_commands)/2), int(len(case_commands))):
            button2 = builder.build_check_button(self.case_dict[case_commands[j]], function=self.on_button_toggled,
                                                 f_size=14, padding=[10, 10])
            check_button_o_half.pack_start(button2, False, False, 0)
            self.button_list.append(button2)

        check_button_box.pack_start(check_button_half, False, False, 10)
        check_button_box.pack_start(check_button_o_half, False, False, 10)

        return check_button_box

    def on_button_toggled(self, button, name):
        if button.get_active():
            state = "on"
            self.case_list.append(list(self.case_dict.keys())[list(self.case_dict.values()).index(name)])
            self.title_list.append(name)
        else:
            state = "off"
            self.case_list.remove(list(self.case_dict.keys())[list(self.case_dict.values()).index(name)])
            self.title_list.remove(name)

    def build_interface(self, box):
        #initialize builder class
        bw = BuildWidgets()

        lt = "<b>" + self.string_resources["option_2_title"] + "</b>"

        assessment_label = bw.build_label(label_text=lt, f_size=16)

        check_button_box = self.add_check_buttons(bw)

        # build button tree
        b_list = [self.string_resources["save_button"], self.string_resources["back_button"]]
        f_list = [self.add_to_exam, self.return_home]
        button_tree = bw.add_horizontal_buttons(button_list=b_list, functions=f_list, f_size=16)

        box.pack_start(self.baseline, False, False, 10)
        box.pack_start(assessment_label, False, False, 10)
        box.pack_start(check_button_box, False, False, 20)
        box.pack_start(button_tree, False, False, 10)

        return box

    def facilitate_transfer(self, *args, new_window):
        from views.handleTransitions import HandleTransitions

        ht = HandleTransitions(self)

        ht.setup_transfer()
        new_window(*args)
        ht.finish_transfer()

    def return_home(self, widget):
        from views.simFaculty import SimFaculty
        self.facilitate_transfer(self.user_type, self.name, self.password, new_window=SimFaculty)

    def add_to_exam(self, choice):
        exam_model = e.ExamModel()

        if self.baseline.baseline_flag:
            self.baseline.button.set_active(False)
            try:
                if self.case_list[0] == 'none n' and self.title_list[0] == 'Baseline':
                    self.case_list.pop(0)
                    self.title_list.pop(0)
            except IndexError:
                pass
            self.case_list.insert(0, 'none n')
            self.title_list.insert(0, 'Baseline')
        else:
            try:
                if self.case_list[0] == 'none n' and self.title_list[0] == 'Baseline':
                    self.case_list.pop(0)
                    self.title_list.pop(0)
            except IndexError:
                pass

        if self.ddx_box.ddx_case_list and self.ddx_box.ddx_title_list:
            self.case_list.extend(self.ddx_box.ddx_case_list)
            self.title_list.extend(self.ddx_box.ddx_title_list)

        if len(self.title_list) > 0:
            timestr = time.strftime("%Y%m%d-%H%M%S")
            exam_num = self.get_number_exams(exam_model)
            nums = [int(i.split('_')[1]) for i in exam_num]
            if len(exam_num) < 1:
                exam_name = self.string_resources["assess_string"] + "_1"
            else:
                exam_name = self.string_resources["assess_string"] + "_" + str(max(nums) + 1)
            case_string = '+'.join(self.case_list)
            title_string = '+'.join(self.title_list)

            exam_model.save_to_db(self, exam_name, case_string, title_string, timestr)

        else:
            exam_model.save_to_db(self, "NA", self.case_list, self.title_list, "NA")

        # clear checked buttons
        if len(self.button_list) > 0:
            for b in self.button_list:
                b.set_active(False)
        if len(self.ddx_box.button_list) > 0:
            for ddx_b in self.ddx_box.button_list:
                ddx_b.set_active(False)

        self.case_list = []
        self.title_list = []

    def get_number_exams(self, em):
        exam_info = em.get_all(key="check")
        return [a[0] for a in exam_info]

    def reset_page(self):
        pass


class BaselineExam(Gtk.VBox):
    def __init__(self, string_resources):
        super(BaselineExam, self).__init__()

        # initialize passed string resources
        self.string_resources = string_resources

        # set baseline flag
        self.baseline_flag = False

        # initialize builder class
        bw = BuildWidgets()

        # build label
        lt = "<b>" + self.string_resources["option_1_title"] + "</b>"
        baseline_label = bw.build_label(label_text=lt, f_size=16)
        self.pack_start(baseline_label, False, False, 10)

        # add check button option
        button_table = Gtk.Table(rows=1, columns=1, homogeneous=True)
        button_table_alignment = Gtk.Alignment(xalign=.36)

        check_label_text = self.string_resources["option_1"]
        self.button = bw.build_check_button(label_text=check_label_text, function=self.on_button_toggled, f_size=14,
                                            padding=[10, 10])

        button_table.attach(self.button, 1, 2, 0, 1)
        button_table_alignment.add(button_table)

        # final packing
        self.pack_start(button_table_alignment, False, False, 0)

    def on_button_toggled(self, button, name):
        if button.get_active():
            state = "on"
            self.baseline_flag = True

        else:
            state = "off"
            self.baseline_flag = False


class DdxExam(Gtk.VBox):
    def __init__(self, string_resources):
        super(DdxExam, self).__init__()

        self.string_resources = string_resources

        # create empty list for exam building
        self.ddx_case_list = []
        self.ddx_title_list = []
        self.button_list = []

        # initialize builder class
        bw = BuildWidgets()

        # build label
        lt = "<b>" + self.string_resources["option_3_title"] + "</b>"
        label = bw.build_label(label_text=lt, f_size=16)
        self.pack_start(label, False, False, 10)

        ddx_names = CaseText().cases.get(525, [])
        ddx_list = []
        for j in ddx_names:
            temp = [i["ddx_name"] for i in j]
            ddx_list.append(temp[0])

        ddx_answer_box = self.build_answer_box(ddx_list, bw)

        self.pack_start(ddx_answer_box, False, False, 10)

    def build_answer_box(self, ddx_list, builder):
        answer_box = Gtk.VButtonBox()
        answer_box.set_layout(3)
        answer_box.set_spacing(0)
        for i in range(0, len(ddx_list)):
            button = builder.build_check_button(label_text=ddx_list[i], function=self.on_button_toggled,
                                                f_size=14, padding=[10, 10])
            answer_box.add(button)
            self.button_list.append(button)
        return answer_box

    def on_button_toggled(self, button, name):
        if button.get_active():
            state = "on"
            self.ddx_case_list.append(name)
            self.ddx_title_list.append('ddx' + '_' + name)
        else:
            state = "off"
            self.ddx_case_list.remove(name)
            self.ddx_title_list.remove('ddx' + '_' + name)
