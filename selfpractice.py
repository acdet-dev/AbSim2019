#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from simLabels import screen_sizer, construct_markup
from gi import pygtkcompat

pygtkcompat.enable()
pygtkcompat.enable_gtk(version='3.0')
import gtk
import casetext
import prototypetext
import cases
import questionmarkview
from resources.aStringResources import AStringResources


class SelfPractice(gtk.Box):
    """This is the interface to self-assess on ailment location and guarding"""

    def __init__(self, view_resources):
        super(SelfPractice, self).__init__(False, 2)

        self.set_homogeneous(False)

        self.string_resources = AStringResources("self_practice").get_by_identifier()

        self.question_mark_view_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789,
                                                        obey_child=False)
        self.question_mark_view = questionmarkview.QuestionMarkView(self.question_mark_view_frame, view_resources)

        self.question_mark_view_frame.add(self.question_mark_view)

        # determine appropriate width x height request
        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=600)
        self.question_mark_view_frame.set_size_request(width, height)

        self.view_resources = view_resources
        self.space = 56

        self.cases = cases.Cases()
        self.current_case = self.cases.get_random_case()

        self.case_text = casetext.CaseText()
        self.prototype_text_buffer = prototypetext.PrototypeTextBuffer()

        self.new_case_observer = view_resources['new_case_observer']
        self.new_case_block_observer = view_resources['new_case_block_observer']
        self.build_interface_parts()
        self.assemble_interface()

        self.new_case_observer.connect(self.new_selected_case)

        self.on_next_case_button()
        self.show()

    def build_interface_parts(self):
        self.build_glade_files()
        self.vbox = gtk.VBox()
        # self.label_box = gtk.VBox()
        # self.ddx_vbox = gtk.VBox()
        # self.ddx_hbox = gtk.HBox()

        self.label = gtk.Label()
        label_text = self.string_resources["instruction_a"] + "\n\n" + self.string_resources["instruction_b"] +\
                     "\n\n" + self.string_resources["instruction_c"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.label.set_markup(label_pre_mark)
        self.label.set_line_wrap(True)
        self.label.set_alignment(0, 0)
        self.label.show()

        # self.ddx_test = gtk.Label()
        # self.ddx_test.set_markup(u"<span font='16'>Fun times had by all!</span>")
        # self.ddx_test.show()

        self.build_case_text_view()
        self.build_prototype_text_view()

        self.build_chooser()

        next_case_label = gtk.Label()
        label_text = self.string_resources["next_label"]
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold')
        next_case_label.set_markup(label_pre_mark)
        next_case_label.show()
        self.next_case_button = gtk.Button()
        self.next_case_button.add(next_case_label)
        self.next_case_button.connect('clicked', self.on_next_case_button)

        self.you_chose_label = gtk.Label()
        self.you_chose_label.set_width_chars(10)
        self.you_chose_label.set_line_wrap(True)

        self.touch_again_label = gtk.Label()
        self.touch_again_label.set_alignment(0, 0)
        self.touch_again_label.set_width_chars(10)
        self.touch_again_label.set_line_wrap(True)
        label_text = self.string_resources["instruction_d"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.touch_again_label.set_markup(label_pre_mark)

        # Now pack stuff we don't want seen until it's time
        self.correct_label = gtk.Label()
        label_text = self.string_resources["correct_label"]
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold', fgcolor='#1E9D1C')
        self.correct_label.set_markup(label_pre_mark)

        self.incorrect_label = gtk.Label()
        label_text = self.string_resources["incorrect_label"]
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold', fgcolor='#FF3333')
        self.incorrect_label.set_markup(label_pre_mark)

        # self.ddx_hbox.show_all()
        # self.ddx_vbox.show_all()
        self.ddx_question_interface.show_all()
        # self.ddx_question_interface.show_all()
        # self.ddx_question_interface.show_all()
        # self.label_box.show()
        self.vbox.show()
        self.question_mark_view_frame.show_all()
        self.correct_label.hide()
        self.incorrect_label.hide()

    def assemble_interface(self):
        vbox = self.vbox
        vbox.pack_start(self.ddx_question_interface)
        vbox.pack_start(self.correct_label)
        vbox.pack_start(self.incorrect_label)
        vbox.pack_start(self.you_chose_label)
        vbox.pack_start(self.prototype_text_view)
        vbox.pack_start(self.touch_again_label)
        vbox.pack_start(self.next_case_button)

        self.pack_start(self.label, True, True, 0)
        self.pack_start(vbox, True, True, 0)
        self.pack_start(self.question_mark_view_frame, False, False, 10)

    def reset_page(self):
        self.on_next_case_button()

    def build_glade_files(self):
        self.builder = gtk.Builder()

        self.ddx_interface_gladefile = 'glade/student_ddx_interface_expanders.ui'
        self.builder.add_from_file(self.ddx_interface_gladefile)

        self.builder.connect_signals(self)

    def build_case_text_view(self):
        self.case_text_buffer = casetext.CaseTextBuffer()

        # Case text is not editable and wraps between words and graphemes
        self.case_text_view = gtk.TextView(buffer=self.case_text_buffer)
        self.case_text_view.set_editable(False)
        self.case_text_view.set_wrap_mode(3)

        self.case_text_scroller = gtk.ScrolledWindow()
        self.case_text_scroller.set_property('hscrollbar-policy', gtk.POLICY_AUTOMATIC)
        self.case_text_scroller.set_property('vscrollbar-policy', gtk.POLICY_AUTOMATIC)
        self.case_text_scroller.set_property('border-width', 1)
        self.case_text_scroller.add(self.case_text_view)

    def build_prototype_text_view(self):
        self.prototype_text_view = gtk.TextView(buffer=self.prototype_text_buffer)
        self.prototype_text_view.set_editable(False)
        self.prototype_text_view.set_wrap_mode(3)

    def on_next_case_button(self, button=None):
        self.current_case = self.cases.get_random_other_organ_case(self.current_case)
        self.new_case_observer.alert(self.current_case)

    def ddx_chosen(self, button):
        given_ddx = button.get_name()
        correct = given_ddx == self.current_case
        self.show_feedback(given_ddx, correct)
        self.queue_draw_area(0, 0, 0, 0)

    def new_selected_case(self, case):
        self.current_case = case

        self.case_text_scroller.hide_all()

        # Hide feedback
        self.hide_feedback()

        self.ddx_question_interface.show()

        self.label.show()
        self.queue_draw_area(0, 0, 0, 0)

    def hide_feedback(self):
        self.correct_label.hide()
        self.incorrect_label.hide()
        self.question_mark_view.disable_feedback()
        self.prototype_text_view.hide()
        self.next_case_button.hide()
        self.you_chose_label.hide()
        self.touch_again_label.hide()

    # self.correct_answer_label.hide()

    def show_feedback(self, given_ddx, correct):

        for exp in self.expanders_to_close:
            exp.set_expanded(False)

        # self.ddx_hbox.hide()
        self.ddx_question_interface.hide()
        # self.ddx_question_interface2.hide()
        # self.ddx_question_interface3.hide()

        # Show correctness
        if (correct):
            self.correct_label.show()
        else:
            self.incorrect_label.show()
            self.touch_again_label.show()

        self.set_correctness_text(given_ddx)
        self.you_chose_label.show()

        # Show next_case button
        self.next_case_button.show()

        # Show live view for immediate feedback training
        self.show_feedback_images()
        self.label.hide()

    def set_correctness_text(self, given_ddx):
        label_text = self.string_resources["chosen_label"] + "\n{given_ddx}\n\n".format(
            given_ddx=self.cases.pretty_ailment_names[given_ddx]) + self.string_resources["correct_selection"] +\
                     "\n{current_case}".format(current_case=self.cases.pretty_ailment_names[self.current_case])
        label_pre_mark = construct_markup(label_text, font_size=28)
        self.you_chose_label.set_markup(label_pre_mark)

    def show_feedback_images(self):
        self.question_mark_view.enable_feedback()

    def build_chooser(self):
        self.expanders_to_close = []
        self.ddx_question_interface = gtk.ScrolledWindow()
        self.ddx_question_interface.set_policy(gtk.POLICY_NEVER, gtk.POLICY_AUTOMATIC)
        self.ddx_question_interface_vbox = self.build_megaframe()
        # self.ddx_question_interface = self.build_megaframe(False, True)
        # self.ddx_question_interface = self.build_megaframe(False, False)
        self.ddx_question_interface.add(self.ddx_question_interface_vbox)

    def build_megaframe(self):
        ua_frame_labels = [self.string_resources["none_label"], self.string_resources["none_label"],
                           self.string_resources["none_text"]]
        font_specs = [(16, 'bold'), 14]
        ua_pre_mark_list = []
        for i in range(0, len(ua_frame_labels)):
            if i == 0:
                ua_pre_mark = construct_markup(lt=ua_frame_labels[i], font_size=font_specs[0][0],
                                               weight=font_specs[0][1])
            else:
                ua_pre_mark = construct_markup(lt=ua_frame_labels[i], font_size=font_specs[1])

            ua_pre_mark_list.append(ua_pre_mark)

        tender_labels = [self.string_resources["tender_label"], self.string_resources["appendix_label"],
                         self.string_resources["appendix_label"] + " " + self.string_resources["tender_label"],
                         self.string_resources["app+r"], self.string_resources["app+g"],
                         self.string_resources["app+g+r"], self.string_resources["bladder_label"],
                         self.string_resources["bladder_t"], self.string_resources["colon_label"],
                         self.string_resources["colon_t"], self.string_resources["colon_t+g"],
                         self.string_resources["gallbladder_label"],
                         self.string_resources["gallbladder_label"] + " " + self.string_resources["tender_label"],
                         self.string_resources["gallbladder_t+g"], self.string_resources["gastric_label"],
                         self.string_resources["gastric_t"], self.string_resources["ovary_left"],
                         self.string_resources["ovary_left"], self.string_resources["ovary_left_g"],
                         self.string_resources["ovary_right"], self.string_resources["ovary_right"],
                         self.string_resources["ovary_right_g"],self.string_resources["pancreas"],
                         self.string_resources["pancreas"]]
        tender_pre_mark_list = []
        for i in range(0, len(tender_labels)):
            if i == 0:
                tender_pre = construct_markup(lt=tender_labels[i], font_size=font_specs[0][0],
                                              weight=font_specs[0][1])
            else:
                tender_pre = construct_markup(lt=tender_labels[i], font_size=font_specs[1])

            tender_pre_mark_list.append(tender_pre)

        enlarged_labels = [self.string_resources["organ_enlargement"], self.string_resources["organs"],
                           self.string_resources["hep"], self.string_resources["splen"],
                           self.string_resources["enlarged"]]
        enlarged_pre_mark_list = []
        for i in range(0, len(enlarged_labels)):
            if i == 0:
                enlarged_pre = construct_markup(lt=enlarged_labels[i], font_size=font_specs[0][0],
                                                weight=font_specs[0][1])
            else:
                enlarged_pre = construct_markup(lt=enlarged_labels[i], font_size=font_specs[1])

            enlarged_pre_mark_list.append(enlarged_pre)

        frames = [
            {
                'frame_label': ua_pre_mark_list[0],
                'expanders': [
                    {
                        'expander_label': ua_pre_mark_list[1],
                        'buttons': [
                            {
                                'button_label': ua_pre_mark_list[2],
                                'button_name': 'none n',
                            },
                        ],
                    },
                ],
            },
            {
                'frame_label': tender_pre_mark_list[0],
                'expanders': [
                    {
                        'expander_label': tender_pre_mark_list[1],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[2],
                                'button_name': 'appendix t',
                            },
                            {
                                'button_label': tender_pre_mark_list[3],
                                'button_name': 'appendix r',
                            },
                            {
                                'button_label': tender_pre_mark_list[4],
                                'button_name': 'appendix g',
                            },
                            {
                                'button_label': tender_pre_mark_list[5],
                                'button_name': 'appendix gr',
                            },
                        ],
                    },
                    {
                        'expander_label': tender_pre_mark_list[6],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[7],
                                'button_name': 'bladder t',
                            },
                        ],
                    },
                    {
                        'expander_label': tender_pre_mark_list[8],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[9],
                                'button_name': 'colon t',
                            },
                            {
                                'button_label': tender_pre_mark_list[10],
                                'button_name': 'colon g',
                            },
                        ],
                    },
                    {
                        'expander_label': tender_pre_mark_list[11],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[12],
                                'button_name': 'gallbladder t',
                            },
                            {
                                'button_label': tender_pre_mark_list[13],
                                'button_name': 'gallbladder g',
                            },
                        ],
                    },
                    {
                        'expander_label': tender_pre_mark_list[14],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[15],
                                'button_name': 'ugi t',
                            },
                        ],
                    },
                    {
                        'expander_label': tender_pre_mark_list[16],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[17],
                                'button_name': 'ovary_left t',
                            },
                            {
                                'button_label': tender_pre_mark_list[18],
                                'button_name': 'ovary_left g',
                            },
                        ],
                    },
                    {
                        'expander_label': tender_pre_mark_list[19],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[20],
                                'button_name': 'ovary_right t',
                            },
                            {
                                'button_label': tender_pre_mark_list[21],
                                'button_name': 'ovary_right g',
                            },
                        ],
                    },
                    {
                        'expander_label': tender_pre_mark_list[22],
                        'buttons': [
                            {
                                'button_label': tender_pre_mark_list[23],
                                'button_name': 'pancreas t',
                            },
                        ],
                    },
                ],
            },
            {
                'frame_label': enlarged_pre_mark_list[0],
                'expanders': [
                    {
                        'expander_label': enlarged_pre_mark_list[1],
                        'buttons': [
                            {
                                'button_label': enlarged_pre_mark_list[2],
                                'button_name': 'hepatomegaly n',
                            },
                            {
                                'button_label': enlarged_pre_mark_list[3],
                                'button_name': 'splenomegaly n',
                            },
                            {
                                'button_label': enlarged_pre_mark_list[4],
                                'button_name': 'enlarged_bladder n',
                            },
                        ],
                    },
                ],
            },
        ]

        frame_vbox = gtk.VBox()
        for frame in frames:
            frame_vbox.pack_start(self.build_frame(frame), False, False, 2)

        return frame_vbox

    def build_frame(self, frame_spec):
        frame = gtk.Frame()
        frame.set_shadow_type(gtk.SHADOW_NONE)
        alignment = gtk.Alignment()
        alignment.set_padding(0, 0, 0, 0)
        frame_label = gtk.Label()
        frame_label.set_markup(frame_spec['frame_label'])

        frame.set_label_widget(frame_label)
        frame.add(alignment)

        expander_vbox = gtk.VBox()
        alignment.add(expander_vbox)

        for e in frame_spec['expanders']:
            expander = gtk.Expander()
            expander_label = gtk.Label()
            expander_label.set_markup(e['expander_label'])
            expander.set_label_widget(expander_label)
            expander_vbox.pack_start(expander, False, False, 5)

            button_vbox = gtk.VBox()
            expander.add(button_vbox)
            self.expanders_to_close.append(expander)

            for b in e['buttons']:
                button = self.create_ddx_chosen_button(b['button_name'], b['button_label'])
                button_vbox.pack_start(button, False, False, 5)

        return frame

    def create_ddx_chosen_button(self, name, label_markup):
        button = gtk.Button()
        button_label = gtk.Label()
        button_label.set_markup(label_markup)
        button_label.set_line_wrap(True)
        button_label.set_width_chars(10)
        button_label.set_justify(gtk.JUSTIFY_CENTER)
        button.add(button_label)
        button.connect('clicked', self.ddx_chosen)
        button.set_name(name)
        return button
