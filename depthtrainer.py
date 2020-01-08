#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from gi import pygtkcompat
pygtkcompat.enable() 
pygtkcompat.enable_gtk(version='3.0')
import gtk
import liveview
from aStringResources import AStringResources
from simLabels import screen_sizer, construct_markup


class DepthTrainer (gtk.HBox):
    """This is the interface to train on depth with no ailments active"""
    def __init__(self, view_resources):
        super(DepthTrainer, self).__init__(False, 2)
        
        self.live_view_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789, obey_child=False)
        self.view_resources = view_resources
        self.string_resources = AStringResources("depth_trainer", label_flag=True).get_by_identifier()
        
        self.depth_trainer_view = liveview.LiveView(self.live_view_frame, view_resources)
        self.live_view_frame.add(self.depth_trainer_view)

        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=500, old_height=700)

        self.live_view_frame.set_size_request(width, height)

        self.label = gtk.Label()  # font = 16
        label_text = self.string_resources["instruction_text"] + "\n\n" +\
                     "<span foreground='gray' font_weight='bold'>\u25CF</span>" + " " +\
                     self.string_resources["gray_circles"] + " " + "<span foreground='gray' font_weight='bold'>" +\
                     self.string_resources["light_label"] + "</span>" + ", " +\
                     self.string_resources["gray_explanation"] + " " + self.string_resources["gray_explanation_2"] +\
                     "\n\n" + "<span foreground='blue' font_weight='bold'>\u25CF</span>" + " " +\
                     self.string_resources["blue_circles"] + " " + "<span foreground='blue' font_weight='bold'>" +\
                     self.string_resources["deep_label"] + "</span>" + ", " +\
                     self.string_resources["blue_explanation"] + "\n\n" +\
                     "<span foreground='red' font_weight='bold'>\u25CF</span>" + " " +\
                     self.string_resources["red_circles"] + " " + "<span foreground='red' font_weight='bold'>" +\
                     self.string_resources["too_deep_label"] + "</span>" + ", " +\
                     self.string_resources["red_explanation"] + " " + self.string_resources["red_ex_2"] + " " +\
                     self.string_resources["red_ex_3"] + "\n\n" + self.string_resources["sense_adjust"] + " " +\
                     "<span font_weight='bold'>" + self.string_resources["sense_adjust_2"] + "</span>" + " " +\
                     self.string_resources["sense_adjust_3"]
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.label.set_markup(label_pre_mark)
        self.label.set_line_wrap(True)
        self.label.set_alignment(0, 0)
        self.label.set_max_width_chars(50)
        
        self.pack_start(self.label, True, True, 20)
        self.pack_start(self.live_view_frame, False, False, 20)

    def reset_page(self):
        self.view_resources['new_case_observer'].alert('none n')
