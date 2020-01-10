#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from gi import pygtkcompat
pygtkcompat.enable()
pygtkcompat.enable_gtk(version='3.0')
import gtk
import additiveview
from resources.aStringResources import AStringResources
from simLabels import construct_markup, screen_sizer


class CoverageTrainer (gtk.HBox):
    """This is the interface to train on depth with no ailments active"""
    def __init__(self, view_resources):
        super(CoverageTrainer, self).__init__(False, 2)
        
        self.view_resources = view_resources
        self.string_resources = AStringResources("coverage_trainer").get_by_identifier()
        self.max_view_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789, obey_child=False)
        self.coverage_trainer_view = additiveview.AdditiveView(self.max_view_frame, view_resources, show_all=True)
        self.max_view_frame.add(self.coverage_trainer_view)

        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=500, old_height=700)

        self.max_view_frame.set_size_request(width, height)

        self.label = gtk.Label()
        label_text = self.string_resources["instruction_a"] + "\n\n" + self.string_resources["instruction_b"] +\
                     "\n\n" + self.string_resources["instruction_c"] + "\n\n" + self.string_resources["instruction_d"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.label.set_markup(label_pre_mark)
        self.label.set_line_wrap(True)
        self.label.set_alignment(0, 0)
        self.label.set_max_width_chars(50)


        self.pack_start(self.label, True, True, 20)
        self.pack_start(self.max_view_frame, False, False, 10)

    def reset_page(self):
        self.view_resources['new_case_observer'].alert('none n show_all')
