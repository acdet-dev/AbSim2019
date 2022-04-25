#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from gi import pygtkcompat

pygtkcompat.enable() 
pygtkcompat.enable_gtk(version='3.0')
import gtk

from gi.repository import GdkPixbuf
import additiveview
import sim_constants
import copy
import os
from simLabels import construct_markup, screen_sizer
from aStringResources import AStringResources

string_resources = AStringResources("coverage_assessment", label_flag=True).get_by_identifier()

    
class CoveragePreAssessment (gtk.VBox):
    """Assess the student's ability to do coverage"""
    def __init__(self, view_resources):
        super(CoveragePreAssessment, self).__init__(False, 2)
        
        self.view_resources = view_resources
        self.location_coverage_analyzer = LocationCoverageAnalyzer()
        self.pressurepoints = view_resources['pressurepoints']
        #self.saved_exam_pressurepoints = copy.deepcopy(self.pressurepoints)
        
        self.build_layout()
        self.show_layout()
        self.show()

    def build_layout(self):
        self.pre_assessment_coverage_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789,
                                                             obey_child=False)

        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=600)

        self.pre_assessment_coverage_frame.set_size_request(width, height)

        self.intro_label = gtk.Label(u" ") #16 point font
        label_text = string_resources["welcome_string_a"] + "\n\n" + string_resources["welcome_string_b"] +\
                     " " + string_resources["welcome_string_c"] + "\n\n" + "<span weight='bold'>" \
                     + string_resources["ready_string"] + "</span>\n\n" + string_resources["click_string"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.intro_label.set_markup(label_pre_mark)
        self.intro_label.set_line_wrap(True)
        self.intro_label.set_alignment(0, 0)

        self.finished_label = gtk.Label(u" ") #16 point font
        label_text = string_resources["proceed_text"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.finished_label.set_markup(label_pre_mark)
        self.finished_label.set_line_wrap(True)
        self.finished_label.set_alignment(0, 0)
        
        self.finished_button = gtk.Button()
        finished_button_label = gtk.Label(u" ") #12 point font
        label_text = string_resources["reveal_button_string"]
        label_pre_mark = construct_markup(label_text, font_size=12)
        finished_button_label.set_markup(label_pre_mark)
        finished_button_label.show()
        finished_button_label.set_padding(5, 5)
        self.finished_button.add(finished_button_label)
        self.finished_button.connect('clicked', self.reveal_button_pressed)
        self.finished_button_alignment = gtk.Alignment()
        self.finished_button_alignment.add(self.finished_button)
        
        self.coverage_table = LocationCoverageAnalysisView()
        w, h = screen_sizer(screen_width, screen_height, old_width=600, old_height=600)

        self.coverage_table.set_size_request(w, h)
        
        self.pack_start(self.intro_label, False, False, 0)
        self.pack_start(self.finished_button_alignment, False, False, 20)
        
        self.analysis_hbox = gtk.HBox()
        self.analysis_hbox.pack_start(self.coverage_table, True, True, 20)
        self.analysis_hbox.pack_start(self.pre_assessment_coverage_frame, False, False, 5)
        self.analysis_hbox.show()
        
        self.pack_start(self.analysis_hbox, False, False, 5)
        self.pack_start(self.finished_label, False, False, 10)
        
    def show_layout(self):
        self.intro_label.show()
        self.finished_button.show()
        
    def reveal_button_pressed(self, widget):
        self.saved_exam_pressurepoints = copy.deepcopy(self.pressurepoints)
        self.update_coverage_graphic()
        self.calculate_location_coverage()
        self.finished_label.show()
        self.intro_label.hide()
        self.reveal_coverage()
        self.finished_button_alignment.hide()

    def update_coverage_graphic(self):
        # Remove and disconnect the old view to make room for the new one
        if hasattr(self, 'pre_assessment_coverage_view'):
            self.pre_assessment_coverage_frame.remove(self.pre_assessment_coverage_view)
        if hasattr(self, 'saved_exam_pressurepoints'):
            self.view_resources['new_case_observer'].disconnect(self.saved_exam_pressurepoints.on_new_case)
    
        # Creating a shallow copy, since we're only changing a reference inside it
        pre_assessment_coverage_view_resources = copy.copy(self.view_resources)
        pre_assessment_coverage_view_resources['pressurepoints'] = self.saved_exam_pressurepoints
        
        self.pre_assessment_coverage_view = additiveview.AdditiveView(
            self.pre_assessment_coverage_frame, pre_assessment_coverage_view_resources, True)
        self.pre_assessment_coverage_frame.add(self.pre_assessment_coverage_view)

    def calculate_location_coverage(self):
        self.saved_exam_pressurepoints = copy.deepcopy(self.pressurepoints)
        location_objectives = self.location_coverage_analyzer.analyze(self.saved_exam_pressurepoints)
        self.coverage_table.show_objective_performance(location_objectives)

    def reset_page(self):
        self.pre_assessment_coverage_frame.hide()
        current_page = self.view_resources['notebook'].get_current_page()
        if (current_page == 0 and hasattr(self, 'saved_exam_pressurepoints')):
            del self.saved_exam_pressurepoints
        self.finished_button.show_all()
        self.intro_label.show_all()
        self.coverage_table.hide()
        self.finished_label.hide()
        self.finished_button_alignment.show()
        self.view_resources['new_case_observer'].alert('none show_all')

    def reveal_coverage(self):
        self.coverage_table.show_all()
        self.pre_assessment_coverage_frame.show_all()
        self.finished_button.hide()


class CoveragePostAssessment(gtk.VBox):
    """Assess the student's ability to do coverage"""
    def __init__(self, pre_assessment, view_resources):
        super(CoveragePostAssessment, self).__init__(False, 2)
        
        self.coverage_analyzer = CoverageAnalyzer()
        self.location_coverage_analyzer = LocationCoverageAnalyzer()
        self.pre_assessment = pre_assessment
        self.view_resources = view_resources
        self.pressurepoints = view_resources['pressurepoints']

        self.intro_label = gtk.Label() #font = 16
        label_text = string_resources["compare_text"] + "\n\n" + "<span weight='bold'>" +\
                     string_resources["ready_string"] + "</span>\n\n" + string_resources["click_string"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.intro_label.set_markup(label_pre_mark)
        self.intro_label.set_line_wrap(True)
        self.intro_label.set_alignment(0, 0)
        
        self.finished_button = gtk.Button()
        finished_button_label = gtk.Label() #font = 16
        label_text = string_resources["reveal_button_string"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        finished_button_label.set_markup(label_pre_mark)
        finished_button_label.show()
        finished_button_label.set_padding(5, 5)
        self.finished_button.add(finished_button_label)
        self.finished_button.connect('clicked', self.reveal_button_pressed)
        self.finished_button_alignment = gtk.Alignment()
        self.finished_button_alignment.add(self.finished_button)
        
        self.button_vbox = gtk.VBox()
        self.button_vbox.pack_start(self.finished_button_alignment, True, False, 0)
        self.button_vbox.show()
        
        self.comparative_table = ComparativeLocationCoverageAnalysisView()
        
        # Build pre_assessment box
        self.pre_vbox = gtk.VBox()
        
        # Banner over image
        self.pre_label = gtk.Label() #16 font with bold weight
        label_text = string_resources["pre_label"]
        label_pre_mark = construct_markup(label_text, font_size=16, weight='bold')
        self.pre_label.set_markup(label_pre_mark)
        self.pre_vbox.pack_start(self.pre_label, False, False, 0)
        
        # Pre-assessment image
        self.pre_assessment_coverage_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789,
                                                             obey_child=False)
        self.pre_vbox.pack_start(self.pre_assessment_coverage_frame, True, True, 0)
        
        # Pre-assessment analysis label
        self.pre_analysis_label = gtk.Label()
        self.pre_vbox.pack_start(self.pre_analysis_label, False, False, 0)
        
        # Build post_assessment box
        self.post_vbox = gtk.VBox()
        
        # Banner over image
        self.post_label = gtk.Label() #size 16, font weight bold
        label_text = string_resources["post_label"]
        label_pre_mark = construct_markup(label_text, font_size=16, weight='bold')
        self.post_label.set_markup(label_pre_mark)
        self.post_vbox.pack_start(self.post_label, False, False, 5)
        
        # Post-assessment analysis label
        self.post_analysis_label = gtk.Label()
        self.post_vbox.pack_start(self.post_analysis_label, False, False, 0)
        
        # Post-assessment location analysis table
        self.post_location_analysis_table = LocationCoverageAnalysisView()
        
        # Post-assessment image
        self.post_assessment_coverage_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789,
                                                              obey_child=False)
        self.post_vbox.pack_start(self.post_assessment_coverage_frame, True, True, 0)
        
        # Post-assessment analysis label
        self.post_analysis_label = gtk.Label()
        self.post_vbox.pack_start(self.post_analysis_label, False, False, 0)
        
        self.new_learner_button = gtk.Button()
        new_learner_label = gtk.Label() #font = 16
        label_text = string_resources["proceed_button"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        new_learner_label.set_markup(label_pre_mark)
        new_learner_label.set_padding(5, 5)
        self.new_learner_button.add(new_learner_label)
        self.new_learner_button.connect('clicked', self.new_learner_button_pressed)
        self.new_learner_button_alignment = gtk.Alignment(xalign=0.5)
        self.new_learner_button_alignment.add(self.new_learner_button)
        self.button_vbox.pack_start(self.new_learner_button_alignment, True, False, 5)
        self.button_vbox.show()
        
        self.pre_post_hbox = gtk.HBox()
        self.pre_post_hbox.pack_start(self.pre_vbox)
        self.pre_post_hbox.pack_start(self.post_vbox)
        
        self.notebook = gtk.Notebook()
        self.coverage_vis_label = gtk.Label() #font = 16
        label_text = string_resources["visual_label"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.coverage_vis_label.set_markup(label_pre_mark)
        self.coverage_vis_label.set_padding(5, 5)
        self.coverage_vis_label.show()
        self.detailed_comparison_label = gtk.Label() #font = 16
        label_text = string_resources["comparison_label"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.detailed_comparison_label.set_markup(label_pre_mark)
        self.detailed_comparison_label.set_padding(5, 5)
        self.detailed_comparison_label.show()
        self.location_analysis_label = gtk.Label() #font = 16
        label_text = string_resources["analysis_label"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.location_analysis_label.set_markup(label_pre_mark)
        self.location_analysis_label.set_padding(5, 5)
        self.location_analysis_label.show()
        
        self.notebook.append_page(child=self.comparative_table, tab_label=self.detailed_comparison_label)
        self.notebook.append_page(child=self.pre_post_hbox, tab_label=self.coverage_vis_label)
        self.notebook.append_page(child=self.post_location_analysis_table, tab_label=self.location_analysis_label)
        
        self.pack_start(self.intro_label, False, False, 0)
        
        self.pack_start(self.notebook)
        self.pack_start(self.button_vbox, False, False, 5)
        
        self.pre_vbox.hide()
        self.intro_label.show()
        self.finished_button.show()
        self.show()
        
    def new_learner_button_pressed(self, widget):
        if 'notebook' in self.view_resources:
            self.view_resources['notebook'].set_current_page(4)

    def reveal_button_pressed(self, widget):
        self.saved_exam_pressurepoints = copy.deepcopy(self.pressurepoints)
        if hasattr(self, 'pre_assessment_coverage_view'):
            self.pre_assessment_coverage_frame.remove(self.pre_assessment_coverage_view)
        if hasattr(self, 'post_assessment_coverage_view'):
            self.post_assessment_coverage_frame.remove(self.post_assessment_coverage_view)
        
        post_assessment_coverage_view_resources = copy.copy(self.view_resources)
        post_assessment_coverage_view_resources['pressurepoints'] = self.saved_exam_pressurepoints
        self.post_assessment_coverage_view = additiveview.AdditiveView(self.post_assessment_coverage_frame,
                                                                       post_assessment_coverage_view_resources, True)
        
        self.coverage_analyzer.fill_label_with_analysis(self.saved_exam_pressurepoints, self.post_analysis_label)
        
        post_location_analysis = self.location_coverage_analyzer.analyze(
            post_assessment_coverage_view_resources['pressurepoints'])
        
        self.post_assessment_coverage_frame.add(self.post_assessment_coverage_view)
        
        if hasattr(self.pre_assessment, 'saved_exam_pressurepoints'):
            # Use comparative table
            self.reveal_comparative_table(post_location_analysis)
            self.post_location_analysis_table.hide()
            self.pre_label.hide()
            self.post_label.hide()
            self.location_analysis_label.hide()
            
            self.detailed_comparison_label.show()
            self.pre_vbox.show_all()
            self.post_vbox.show_all()
            self.coverage_vis_label.show()
            self.comparative_table.show()
        else:
            # No pretest available, so only show posttest
            self.comparative_table.hide()
            self.detailed_comparison_label.hide()
            self.pre_vbox.hide()
            
            self.post_vbox.show_all()
            self.coverage_vis_label.show()
            self.post_location_analysis_table.show_objective_performance(post_location_analysis)
            self.post_location_analysis_table.show_all()
            self.location_analysis_label.show()
        
        self.pre_post_hbox.show()
        self.notebook.set_current_page(0)
        self.notebook.show()
        self.reveal_coverage()

    def reveal_comparative_table(self, post_location_analysis):
        # Can assume self.pre_assessment.saved_exam_pressurepoints exists
        pre_assessment_coverage_view_resources = copy.copy(self.view_resources)
        pre_assessment_coverage_view_resources['pressurepoints'] = self.pre_assessment.saved_exam_pressurepoints
        self.pre_assessment_coverage_view = additiveview.AdditiveView(self.pre_assessment_coverage_frame,
                                                                      pre_assessment_coverage_view_resources, True)
        
        self.pre_assessment_coverage_frame.add(self.pre_assessment_coverage_view)
        self.pre_vbox.show()
        
        self.coverage_analyzer.fill_label_with_analysis(self.pre_assessment.saved_exam_pressurepoints,
                                                        self.pre_analysis_label)
        
        pre_location_analysis = self.location_coverage_analyzer.analyze(
            pre_assessment_coverage_view_resources['pressurepoints'])
        self.comparative_table.show_objective_performance(
            pre_location_analysis, post_location_analysis)
        self.comparative_table.show_all()
        del self.pre_assessment.saved_exam_pressurepoints

    def reset_page(self):
        self.pre_vbox.hide()
        self.post_vbox.hide()
        self.comparative_table.hide()
        self.new_learner_button_alignment.hide()
        self.finished_button_alignment.show_all()
        self.intro_label.show_all()
        self.notebook.hide()
        if hasattr(self, 'saved_exam_pressurepoints'):
            del self.saved_exam_pressurepoints
        self.view_resources['new_case_observer'].alert('none show_all')

    def reveal_coverage(self):
        self.post_vbox.show()
        self.post_assessment_coverage_frame.show_all()
        self.new_learner_button_alignment.show_all()
        self.finished_button_alignment.hide()
        self.intro_label.hide()


class CoverageAnalyzer:
    def analyze(self, pressurepoints):
        pl = pressurepoints.get_pressure_list()
        state_counts = {
            'up': 0,
            'slightly_down': 0,
            'down': 0,
            'too_hard': 0}
        state_percents = {}
        for p in pl:
            state = p.get_max_state()
            state_counts[state] += 1
        for k in state_counts.keys():
            kv = state_counts[k] / 144.0 * 100.0
            kf = format(kv, '.0f')
            state_percents[k] = kf
        return state_percents

    def fill_label_with_analysis(self, pressurepoints, label):
        state_percents = self.analyze(pressurepoints)  # font = 16
        label_text = "<span foreground='black' background='white' font_weight='bold'>\u25CB</span> {up}% " + \
                     string_resources["not_label_lower"] + "\n<span foreground='gray'>\u25CF</span> {slightly_down}% "\
                     + string_resources["lightly_label"] +\
                     "\n<span foreground='blue' font_weight='bold'>\u25CF</span> {down}% " \
                     + string_resources["deeply_label"] +\
                     "\n<span foreground='red' font_weight='bold'>\u25CF</span> {too_hard}% " +\
                     string_resources["too_hard"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        label.set_markup(label_pre_mark.format(**state_percents))


class LocationCoverageAnalyzer:
    def __init__(self):
        state_counts = {
            'up': 0,
            'slightly_down': 0,
            'down': 0,
            'too_hard': 0
        }
        self.locations = [
            'appendix',
            'colon',
            'gallbladder',
            'ugi',
            'ovary_left',
            'ovary_right',
            'pancreas',
            'bladder',
            'hepatomegaly',
            'splenomegaly',
            'enlarged_bladder',
        ]

        # Each should look like 'appendix': {'up': 0, 'slightly_down': 0, 'down': 0, 'too_hard': 0}
        self.location_state_counts_empty = {loc: copy.deepcopy(state_counts) for loc in self.locations}
        self.location_objectives_empty = {loc: {'ailment_touched': False, 'depth_reached': False, 'too_hard': False}
                                          for loc in self.locations}

    def analyze(self, pressurepoints):
        pressure_list = pressurepoints.get_pressure_list()
        ailment_locations = copy.deepcopy(sim_constants.ailment_locations)
        location_state_counts = copy.deepcopy(self.location_state_counts_empty)
        location_objectives = copy.deepcopy(self.location_objectives_empty)
            
        for ailment in ailment_locations.keys():
            for location in ailment_locations[ailment]:
                state = pressure_list[location].get_max_state()
                location_state_counts[ailment][state] += 1
            
            location_objectives[ailment]['ailment_touched'] = self.ailment_touched(location_state_counts[ailment])
            location_objectives[ailment]['depth_reached'] = self.depth_reached(location_state_counts[ailment])
            location_objectives[ailment]['too_hard'] = self.too_hard(location_state_counts[ailment])
        return location_objectives

    def ailment_touched(self, counts):
        total_touched = counts['slightly_down'] + counts['down'] + counts['too_hard']
        return total_touched >= 2

    def depth_reached(self, counts):
        down_or_deeper = counts['down'] + counts['too_hard']
        return down_or_deeper >= 2

    def too_hard(self, counts):
        return counts['too_hard'] >= 2


class LocationCoverageAnalysisView(gtk.Table):
    def __init__(self):
        super(LocationCoverageAnalysisView, self).__init__(rows=13, columns=4, homogeneous=False)
        self.locations = [
            'appendix',
            'colon',
            'gallbladder',
            'ugi',
            'ovary_left',
            'ovary_right',
            'pancreas',
            'bladder',
            'hepatomegaly',
            'splenomegaly',
            'enlarged_bladder',
        ]
        
        self.objectives = [
            'ailment_touched',
            'depth_reached',
            'too_hard'
        ]

        self.set_col_spacings(10)
        
        self.images = [[gtk.Image() for col in range(0, 3)] for row in range(0, 11)]
        for row in range(0, 11):
            for col in range(0, 3):
                image = self.images[row][col]
                self.attach(
                            child=image,
                            left_attach=col + 1, right_attach=col + 2,
                            top_attach=row + 1, bottom_attach=row + 2)
        
        self.fill_objective_labels()
        self.fill_ailment_labels()

    def fill_objective_labels(self):
        objective_names = [
            string_resources["light_label"],
            string_resources["deep_label"],
            string_resources["too_deep_label"]
        ]
        for x in range(0, 3):
            objective_label = CoverageLabel(objective_names[x])
            self.attach(
                child=objective_label,
                left_attach=x + 1, right_attach=x + 2,
                top_attach=0, bottom_attach=1)

    def fill_ailment_labels(self):
        locations = self.locations
        for x in range(0, 11):
            ailment_label = CoverageLabel(locations[x])
            self.attach(
                child=ailment_label,
                left_attach=0, right_attach=1,
                top_attach=x + 1, bottom_attach=x + 2)

    def show_objective_performance(self, objective_performance):
        op = objective_performance
        locations = self.locations
        objectives = self.objectives
        yes_check_pixbuf = GdkPixbuf.Pixbuf.new_from_file_at_size(os.path.join('.', 'img', 'yes_check.png'), 20, 20)
        no_x_pixbuf = GdkPixbuf.Pixbuf.new_from_file_at_size(os.path.join('.', 'img', 'no_x.png'), 20, 20)
        for row in range(0, 11):
            for col in range(0, 3):
                success = op[locations[row]][objectives[col]]
                image = self.images[row][col]
                if success and col < 2:
                    image.set_from_pixbuf(yes_check_pixbuf)
                elif success and col is 2:
                    image.set_from_pixbuf(no_x_pixbuf)
                else:
                    image.clear()


class ComparativeLocationCoverageAnalysisView(gtk.Table):
    def __init__(self):
        super(ComparativeLocationCoverageAnalysisView, self).__init__(rows=12, columns=8, homogeneous=False)
        
        vline = gtk.VSeparator()
        self.attach(
            child=vline,
            left_attach=4, right_attach=5,
            top_attach=0, bottom_attach=14
        )

        self.set_col_spacings(10)
        
        self.locations = [
            'appendix',
            'colon',
            'gallbladder',
            'ugi',
            'ovary_left',
            'ovary_right',
            'pancreas',
            'bladder',
            'hepatomegaly',
            'splenomegaly',
            'enlarged_bladder',
        ]
        
        self.objectives = [
            'ailment_touched',
            'depth_reached',
            'too_hard'
        ]
        
        self.pre_label = gtk.Label() #font = 16 and bold
        label_text = string_resources["pre_label"]
        label_pre_mark = construct_markup(label_text, font_size=16, weight='bold')
        self.pre_label.set_markup(label_pre_mark)
        self.attach(
            child=self.pre_label,
            left_attach=1, right_attach=4,
            top_attach=0, bottom_attach=1)
        self.pre_label.show()
        
        self.post_label = gtk.Label() #font = 16 and bold
        label_text = string_resources["post_label"]
        label_pre_mark = construct_markup(label_text, font_size=16, weight='bold')
        self.post_label.set_markup(label_pre_mark)
        self.attach(
            child=self.post_label,
            left_attach=5, right_attach=9,
            top_attach=0, bottom_attach=1)
        self.post_label.show()
        
        self.images = [[gtk.Image() for col in range(0, 6)] for row in range(0, 11)]
        for row in range(0, 11):
            for col in range(0, 6):
                image = self.images[row][col]
                if col >= 3:
                    col = col + 1
                self.attach(
                            child=image,
                            left_attach=col + 1, right_attach=col + 2,
                            top_attach=row + 2, bottom_attach=row + 3)
        
        self.fill_objective_labels()
        self.fill_ailment_labels()

    def fill_objective_labels(self):
        objective_names = [
            string_resources["light_label"],
            string_resources["deep_label"],
            string_resources["too_deep_label"],
            string_resources["light_label"],
            string_resources["deep_label"],
            string_resources["too_deep_label"]
        ]
        for x in range(0, 6):
            objective_label = CoverageLabel(objective_names[x])
            if x >=3:
                x = x + 1
            self.attach(
                child=objective_label,
                left_attach=x + 1, right_attach=x + 2,
                top_attach=1, bottom_attach=2)

    def fill_ailment_labels(self):
        locations = self.locations
        for x in range(0, 11):
            ailment_label = CoverageLabel(locations[x])
            self.attach(
                child=ailment_label,
                left_attach=0, right_attach=1,
                top_attach=x + 2, bottom_attach=x + 3)

    def show_objective_performance(self, pre_performance, post_performance):
        pre = pre_performance
        post = post_performance
        locations = self.locations
        objectives = self.objectives
        yes_check_pixbuf = GdkPixbuf.Pixbuf.new_from_file_at_size(os.path.join('.', 'img', 'yes_check.png'), 20, 20)
        no_x_pixbuf = GdkPixbuf.Pixbuf.new_from_file_at_size(os.path.join('.', 'img', 'no_x.png'), 20, 20)
        for row in range(0, 11):
            for col in range(0, 6):
                if col < 3:
                    success = pre[locations[row]][objectives[col]]
                else:
                    success= post[locations[row]][objectives[col - 3]]
                image = self.images[row][col]
                if success and col != 2 and col != 5:
                    image.set_from_pixbuf(yes_check_pixbuf)
                elif success and col in [2, 5]:
                    image.set_from_pixbuf(no_x_pixbuf)
                else:
                    image.clear()

                    
class CoverageLabel (gtk.Label):
    def __init__(self, ailment):
        super(CoverageLabel, self).__init__()
        locations = {
            'appendix': string_resources["appendix_region"],
            'colon': string_resources["colon_region"],
            'gallbladder': string_resources["gallbladder_region"],
            'ugi': string_resources["gastric_region"],
            'ovary_left': string_resources["left_ovary_region"],
            'ovary_right': string_resources["right_ovary_region"],
            'pancreas': string_resources["pancreatic_region"],
            'bladder': string_resources["normal_bladder"],
            'hepatomegaly': string_resources["liver_region"],
            'splenomegaly': string_resources["splenic_region"],
            'enlarged_bladder': string_resources["distended_bladder"]
        }

        label_text = ''
        
        if ailment in locations:
            label_text = locations[ailment]
        else:
            label_text = ailment

        label_pre_mark = construct_markup(label_text, font_size=12)

        self.set_markup(label_pre_mark)
        self.set_justify(gtk.JUSTIFY_CENTER)

'''
# module unit testing
if __name__=='__main__':
    for text in i18n_tests.collected_strings:
        print(text)
'''