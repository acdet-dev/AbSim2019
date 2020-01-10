# vim: set fileencoding=utf-8 :
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

import time, logging
from models import exammodel as e
from simLabels import construct_markup
from cases import Cases
from casetext import CaseText
from aStringResources import AStringResources


class TestCreator(Gtk.Window):
    '''test making window. Allows faculty to create and assign tests'''

    def __init__(self, name, password):

        # initialize string resources
        self.string_resources = AStringResources("create_assessments", back_flag=True).get_by_identifier()

        # make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('icon.ico')
        self.maximize()

        # intialize passed class variables
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

        # widget packing statements
        self.hbox.pack_start(builder_box, False, False, 0)
        self.hbox.pack_start(Gtk.VSeparator(), False, False, 20)
        self.hbox.pack_start(self.ddx_box, False, False, 10)
        self.hbox.show_all()

        # add all packed elements to window
        self.add(self.hbox)
        self.show()

        self.destroy_signal_handler = self.connect("destroy", Gtk.main_quit)

    def build_check_button(self, label_text):
        button = Gtk.CheckButton.new()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=14)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        button.connect("toggled", self.on_button_toggled, label_text)

        return button

    def add_check_buttons(self):

        check_button_box = Gtk.HBox()

        check_button_half = Gtk.VBox()
        check_button_o_half = Gtk.VBox()

        case_commands = [
            'none n', 'appendix t', 'appendix g', 'appendix r', 'appendix gr',
            'bladder t', 'colon t', 'colon g', 'gallbladder t', 'gallbladder g',
            'ugi t', 'ovary_left t', 'ovary_left g', 'ovary_right t', 'ovary_right g',
            'pancreas t', 'hepatomegaly n', 'splenomegaly n', 'enlarged_bladder n']

        for i in range(0, int(len(case_commands)/2)):
            button = self.build_check_button(self.case_dict[case_commands[i]])
            check_button_half.pack_start(button, False, False, 0)
            self.button_list.append(button)

        for j in range(int(len(case_commands)/2), int(len(case_commands))):
            button2 = self.build_check_button(self.case_dict[case_commands[j]])
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

        # add label above check option
        assessment_label = Gtk.Label()
        label_text = "<b>" + self.string_resources["option_2_title"] + "</b>"
        label_pre = construct_markup(label_text, font_size=16)
        assessment_label.set_markup(label_pre)

        check_button_box = self.add_check_buttons()
        save_exam_box = Gtk.HBox()

        button_tree = self.add_buttons()

        save_exam_box.pack_start(button_tree, False, False, 0)

        box.pack_start(self.baseline, False, False, 10)
        box.pack_start(assessment_label, False, False, 10)
        box.pack_start(check_button_box, False, False, 20)
        box.pack_start(save_exam_box, False, False, 10)

        return box

    def add_buttons(self):
        button_table = Gtk.Table(rows=2, columns=2)
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        right_button = self.build_button(self.string_resources["save_button"])
        right_button.connect('clicked', self.add_to_exam)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        left_button = self.build_button(self.string_resources["back_button"])
        left_button.connect('clicked', self.return_home)
        button_table.attach(left_button, 1, 2, 0, 1, xoptions=False, yoptions=False)

        return button_table

    def build_button(self, label_text):
        button = Gtk.Button()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=16)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def return_home(self, widget):
        from simFaculty import SimFaculty
        import dbmigrator, splashscreen

        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        # Perform DB migration to make sure we have the newest version
        dbmigrator.DBMigrator()

        try:
            self.sounds.stop_sound_player()
            self.port_settings.stop_devices()
            logging.debug('stopping devices')

        except:
            logging.debug('no ports to close')

        SimFaculty('faculty', self.name, self.password)
        splash_screen.hide()
        self.destroy()
        Gtk.main()

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

        # add label above check option
        assessment_label = Gtk.Label()
        label_text = "<b>" + self.string_resources["option_1_title"] + "</b>"
        label_pre = construct_markup(label_text, font_size=16)
        assessment_label.set_markup(label_pre)
        self.pack_start(assessment_label, False, False, 0)

        # add check button option
        button_table = Gtk.Table(rows=1, columns=1, homogeneous=True)
        button_table_alignment = Gtk.Alignment(xalign=0.35)

        self.button = Gtk.CheckButton.new()
        label = Gtk.Label()
        label_text = self.string_resources["option_1"]
        label_pre_mark = construct_markup(label_text, font_size=14)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        self.button.add(label)
        self.button.connect("toggled", self.on_button_toggled)
        button_table.attach(self.button, 1, 2, 0, 1)
        button_table_alignment.add(button_table)

        # final packing
        self.pack_start(button_table_alignment, False, False, 0)

    def on_button_toggled(self, button):
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

        # add label above check option
        assessment_label = Gtk.Label()
        label_text = "<b>" + self.string_resources["option_3_title"] + "</b>"
        label_pre = construct_markup(label_text, font_size=16)
        assessment_label.set_markup(label_pre)
        self.pack_start(assessment_label, False, False, 30)

        ddx_names = CaseText().cases.get(525, [])
        ddx_list = []
        for j in ddx_names:
            temp = [i["ddx_name"] for i in j]
            ddx_list.append(temp[0])

        ddx_answer_box = self.build_answer_box(ddx_list)

        self.pack_start(ddx_answer_box, False, False, 10)

    def build_answer_box(self, ddx_list):
        answer_box = Gtk.VButtonBox()
        answer_box.set_layout(Gtk.BUTTONBOX_START)
        answer_box.set_spacing(20)

        for i in range(0, len(ddx_list)):
            button = Gtk.CheckButton.new()
            button_label = Gtk.Label()  # font = 14
            label_text = ddx_list[i]
            label_pre_mark = construct_markup(label_text, font_size=14)
            button_label.set_markup(label_pre_mark)
            button_label.set_property('ypad', 5)
            button.add(button_label)
            # Using i+1 because the ddxes are numbered beginning with 1
            button.connect('toggled', self.on_button_toggled, label_text)
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
