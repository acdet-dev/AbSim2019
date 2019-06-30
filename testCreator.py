# vim: set fileencoding=utf-8 :
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GLib, GObject, Pango

import time, logging, random

from simLabels import construct_markup
from cases import Cases
from i18ntrans2 import _


class TestCreator(Gtk.HBox):
    '''test making window. Allows faculty to create and assign tests'''

    def __init__(self, name, password, parent):
        super(TestCreator, self).__init__(False, 2)
        self.name = name
        self.password = password
        self.parent = parent
        self.current_case = 'none n'

        self.button_list = []
        self.case_list = []
        self.title_list = []
        self.case_dict = Cases().pretty_ailment_names

        self.ddx_box = DdxExam()
        self.ddx_box.show_all()

        self.baseline = BaselineExam()
        self.baseline.show_all()

        assignment_box = Gtk.VBox()

        builder_box = self.build_interface(assignment_box)

        builder_box.show_all()

        self.pack_start(builder_box, False, False, 0)

        self.pack_start(Gtk.VSeparator(), False, False, 20)

        self.pack_start(self.ddx_box, False, False, 10)

        self.show_all()

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
        label_text = _(u"Abnormality Detection Exam")
        label_pre = construct_markup(label_text, font_size=16)
        assessment_label.set_markup(label_pre)

        check_button_box = self.add_check_buttons()
        save_exam_box = Gtk.HBox()

        button_tree = self.add_buttons()

        eid_vbox = Gtk.VBox()
        self.exam_id_entry = Gtk.Entry()
        self.exam_id_entry.set_max_length(220)
        self.exam_id_entry.set_width_chars(30)
        self.exam_id_entry.set_placeholder_text(_(u"Input Exam Title"))
        eid_vbox.pack_start(self.exam_id_entry, False, False, 30)
        self.exam_id_entry.show()

        save_exam_box.pack_start(eid_vbox, False, False, 20)
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

        right_button = self.build_button(_(u"Save Exam"))
        right_button.connect('clicked', self.add_to_exam)
        button_table.attach(right_button, 0, 1, 0, 1, xoptions=False, yoptions=False)

        left_button = self.build_button(_(u"Return Home"))
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
        from sim import UserType
        import dbmigrator, splashscreen

        splash_screen = splashscreen.SplashScreen()
        splash_screen.show_all()

        while Gtk.events_pending():
            Gtk.main_iteration()

        # Perform DB migration to make sure we have the newest version
        dbmigrator.DBMigrator()

        try:
            self.parent.sounds.stop_sound_player()
            self.parent.port_settings.stop_devices()
            logging.debug('stopping devices')

        except:
            logging.debug('no ports to close')

        UserType('faculty', self.parent.name, self.parent.password)
        splash_screen.hide()
        self.parent.destroy()
        Gtk.main()

    def add_to_exam(self, choice):
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

        import exammodel as e
        timestr = time.strftime("%Y%m%d-%H%M%S")
        exam_model = e.ExamModel()
        exam_name = self.exam_id_entry.get_text().encode('utf-8')
        case_string = '+'.join(self.case_list)
        title_string = '+'.join(self.title_list)

        exam_model.save_to_db(self.parent, exam_name, case_string, title_string, timestr)

        if len(self.button_list) > 0:
            for b in self.button_list:
                b.set_active(False)
        if len(self.ddx_box.button_list) > 0:
            for ddx_b in self.ddx_box.button_list:
                ddx_b.set_active(False)

        self.case_list = []
        self.title_list = []

    def reset_page(self):
        pass


class BaselineExam(Gtk.VBox):
    def __init__(self):
        super(BaselineExam, self).__init__()

        # set baseline flag
        self.baseline_flag = False

        #add label above check option
        assessment_label = Gtk.Label()
        label_text = _(u"Baseline Exam")
        label_pre = construct_markup(label_text, font_size=16)
        assessment_label.set_markup(label_pre)
        self.pack_start(assessment_label, False, False, 0)

        #add check button option
        button_table = Gtk.Table(rows=1, columns=1, homogeneous=True)
        button_table_alignment = Gtk.Alignment(xalign=0.35)

        self.button = Gtk.CheckButton.new()
        label = Gtk.Label()
        label_text = _(u"Add Baseline Exam?")
        label_pre_mark = construct_markup(label_text, font_size=14)
        label.set_markup(label_pre_mark)
        label.set_padding(10, 10)
        self.button.add(label)
        self.button.connect("toggled", self.on_button_toggled)
        button_table.attach(self.button, 1, 2, 0, 1)
        button_table_alignment.add(button_table)

        #final packing
        self.pack_start(button_table_alignment, False, False, 0)

    def on_button_toggled(self, button):
        if button.get_active():
            state = "on"
            self.baseline_flag = True

        else:
            state = "off"
            self.baseline_flag = False


class DdxExam(Gtk.VBox):
    def __init__(self):
        super(DdxExam, self).__init__()

        # create empty list for exam building
        self.ddx_case_list = []
        self.ddx_title_list = []
        self.button_list = []

        # add label above check option
        assessment_label = Gtk.Label()
        label_text = _(u"Ddx Exam")
        label_pre = construct_markup(label_text, font_size=16)
        assessment_label.set_markup(label_pre)
        self.pack_start(assessment_label, False, False, 30)

        ddx_list = [
            _(u"Upper Gastrointestinal Etiology"),
            _(u"Choledocolithiasis"),
            _(u"Pancreatitis"),
            _(u"Cholecystitis"),
            _(u"Mesenteric Infarction"),
            _(u"Small Bowel Obstruction"),
            _(u"Appendicitis"),
            _(u"Diverticulitis"),
            _(u"Acute Enteritis"),
        ]

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
