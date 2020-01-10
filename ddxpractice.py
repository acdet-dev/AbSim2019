#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from simLabels import construct_markup, screen_sizer
from gi import pygtkcompat
pygtkcompat.enable()
pygtkcompat.enable_gtk(version='3.0')
import gtk
import casetext
import prototypetext
import cases
from casetext import CaseText
import liveview
from aStringResources import AStringResources


class DDXPractice (gtk.HBox):
    """This is the interface to self-assess on ailment location and guarding"""
    def __init__(self, view_resources):
        super(DDXPractice, self).__init__(False, 2)

        self.view_resources = view_resources
        self.string_resources = AStringResources("ddx_practice").get_by_identifier()
        # We don't have any more spaces yet, so this will do for now
        self.space = 525
        ddx_names = CaseText().cases.get(525, [])
        self.ddx_list = []
        for j in ddx_names:
            temp = [i["ddx_name"] for i in j]
            self.ddx_list.append(temp[0])
        
        self.live_view_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789, obey_child=False)
        self.live_view = liveview.LiveView(self.live_view_frame, view_resources)
        self.live_view_frame.add(self.live_view)

        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=600)
        self.live_view_frame.set_size_request(width, height)
        
        self.cases = cases.Cases()
        self.current_case = self.cases.get_random_case()
        
        self.case_text = casetext.CaseText()
        self.prototype_text_buffer = prototypetext.PrototypeTextBuffer()
        self.current_case_block = self.case_text.get_case_block(self.space, self.current_case)

        self.new_case_observer = view_resources['new_case_observer']
        self.new_case_block_observer = view_resources['new_case_block_observer']
        self.new_case_observer.connect(self.new_selected_case)
        self.build_interface()
        self.show()

    def build_interface(self):
        self.build_glade_files()
        vbox = gtk.VBox()
        
        self.build_case_text_view()
        self.build_prototype_text_view()
        
        self.ddx_question_interface_vbox = self.builder.get_object('ddx_question_interface')
        self.ddx_answer_box = self.build_answer_box(self.ddx_list)

        next_case_label = gtk.Label()  # font = 20, weight = bold
        label_text = self.string_resources["next_button"]
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold')
        next_case_label.set_markup(label_pre_mark)
        next_case_label.show()
        self.next_case_button = gtk.Button()
        self.next_case_button.add(next_case_label)
        self.next_case_button.connect('clicked', self.on_next_case_button)
        
        # Assemble window hierarchy
        self.pack_start(self.case_text_scroller, True, True, 10)
        self.pack_start(self.ddx_answer_box, True, True, 10)
        self.pack_start(vbox, False, False, 0)
        self.pack_start(self.live_view_frame, False, False, 0)
        
        self.correct_label = gtk.Label()  # font = 20, bold, fgcolor = #1E9D1C
        label_text = self.string_resources["choice_string_1"] + "\n" + self.string_resources["choice_string_2"]
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold', fgcolor='#1E9D1C')
        self.correct_label.set_markup(label_pre_mark)
        
        self.incorrect_label = gtk.Label()  # font 20, bold, #000000
        self.incorrect_label.set_justify(gtk.JUSTIFY_CENTER)
        label_text = self.string_resources["best_1"] + "\n" + self.string_resources["best_2"]
        label_pre_mark = construct_markup(label_text, font_size=20, weight='bold', fgcolor='#000000')
        self.incorrect_label.set_markup(label_pre_mark)
        
        # Now pack stuff we don't want seen until it's time
        vbox.pack_start(self.correct_label, False, False, 10)
        vbox.pack_start(self.incorrect_label, False, False, 10)
        vbox.pack_start(self.prototype_scroller, False, False, 10)
        vbox.pack_start(self.next_case_button, False, False, 0)
        
        self.ddx_answer_box.show_all()
        vbox.show()
        self.correct_label.hide()
        self.incorrect_label.hide()

    def reset_page(self):
        self.on_next_case_button()

    def build_answer_box(self, ddx_list):
        answer_box = gtk.VButtonBox()
        answer_box.set_layout(gtk.BUTTONBOX_START)
        answer_box.set_spacing(20)
        
        for i in range(0, len(ddx_list)):
            button = gtk.Button()
            button_label = gtk.Label()  # font = 14
            label_text = ddx_list[i]
            label_pre_mark = construct_markup(label_text, font_size=14)
            button_label.set_markup(label_pre_mark)
            button_label.set_property('ypad', 5)
            button.add(button_label)
            # Using i+1 because the ddxes are numbered beginning with 1
            button.connect('button-press-event', self.ddx_chosen, i + 1)
            answer_box.add(button)
        return answer_box

    def build_glade_files(self):
        self.builder = gtk.Builder()
        
        self.ddx_interface_gladefile = 'glade/student_ddx_interface_expanders.ui'
        self.builder.add_from_file(self.ddx_interface_gladefile)
        
        self.builder.connect_signals(self)

    def build_case_text_view(self):
        self.case_text_buffer = casetext.CaseTextBuffer()
        
        # Case text is not editable and wraps between words
        self.case_text_view = gtk.TextView(buffer=self.case_text_buffer)
        self.case_text_view.set_editable(False)
        self.case_text_view.set_wrap_mode(gtk.WRAP_WORD)

        #get adjusted width
        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=500)

        self.case_text_scroller = gtk.ScrolledWindow()
        self.case_text_scroller.set_property('hscrollbar-policy', gtk.POLICY_AUTOMATIC)
        self.case_text_scroller.set_property('vscrollbar-policy', gtk.POLICY_AUTOMATIC)
        self.case_text_scroller.set_size_request(width, height)
        self.case_text_scroller.set_property('border-width', 1)
        self.case_text_scroller.add(self.case_text_view)
        self.case_text_scroller_vadjustment = self.case_text_scroller.get_vadjustment()

    def build_prototype_text_view(self):
        self.prototype_text_view = gtk.TextView(buffer=self.prototype_text_buffer)
        self.prototype_text_view.set_editable(False)
        self.prototype_text_view.set_wrap_mode(gtk.WRAP_WORD)

        #get adjusted width
        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=300, old_height=550)

        self.prototype_scroller = gtk.ScrolledWindow()
        self.prototype_scroller.set_property('hscrollbar-policy', gtk.POLICY_AUTOMATIC)
        self.prototype_scroller.set_property('vscrollbar-policy', gtk.POLICY_AUTOMATIC)
        self.prototype_scroller.set_property('border-width', 1)
        self.prototype_scroller.add(self.prototype_text_view)
        self.prototype_scroller_vadjustment = self.prototype_scroller.get_vadjustment()
        self.prototype_scroller.set_size_request(width, height)

    def on_next_case_button(self, button=None):
        self.current_case_block = self.case_text.get_random_case_by_space(self.space)
        self.current_case = self.current_case_block['ailment']

        self.new_case_observer.alert(self.current_case)

        self.new_case_block_observer.alert(self.current_case, self.current_case_block)

    def ddx_chosen(self, button, press_event, ddx_index):
        correct = ddx_index == self.current_case_block['ddx']
        self.show_feedback(ddx_index, correct)

    def new_selected_case(self, case):
        self.current_case = case
        case_text = self.current_case_block.get('vignette')
        self.case_text_buffer.new_case(case_text)
        self.case_text_scroller_vadjustment.set_value(0)
        self.case_text_scroller.show_all()
        
        # Hide feedback
        self.correct_label.hide()
        self.incorrect_label.hide()
        self.live_view_frame.hide()
        self.prototype_scroller.hide()
        self.next_case_button.hide()
        
        self.ddx_answer_box.show_all()

    def show_feedback(self, given_ddx, correct):
        list_of_expanders = [
            'expander1', 'expander2', 'expander3', 'expander4', 'expander5',
            'expander6', 'expander7', 'expander8', 'expander9', 'expander10',
        ]
        for exp in list_of_expanders:
            exp_object = self.builder.get_object(exp)
            exp_object.set_expanded(False)
        
        self.ddx_answer_box.hide()

        # Show correctness
        if correct:
            self.correct_label.show()
        else:
            self.incorrect_label.show()
        
        self.case_text_scroller_vadjustment.set_value(0)
        self.next_case_button.show()
        self.live_view_frame.show_all()
        
        # Update prototype view
        self.prototype_text_buffer.new_feedback(self.space, self.current_case_block['ddx'])
        self.prototype_scroller_vadjustment.set_value(0)
        self.prototype_scroller.show_all()
