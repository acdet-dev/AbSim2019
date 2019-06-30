#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from gi import pygtkcompat
pygtkcompat.enable() 
pygtkcompat.enable_gtk(version='3.0')
import gtk
import liveview
from i18ntrans2 import _
from simLabels import screen_sizer, construct_markup


class DepthTrainer (gtk.HBox):
    """This is the interface to train on depth with no ailments active"""
    def __init__(self, view_resources):
        super(DepthTrainer, self).__init__(False, 2)
        
        self.live_view_frame = gtk.AspectFrame(label=None, xalign=0.5, yalign=0.5, ratio=0.789, obey_child=False)
        self.view_resources = view_resources
        
        self.depth_trainer_view = liveview.LiveView(self.live_view_frame, view_resources)
        self.live_view_frame.add(self.depth_trainer_view)

        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=500, old_height=700)

        self.live_view_frame.set_size_request(width, height)

        self.label = gtk.Label()  # font = 16
        label_text = _(u"In this milestone, practice palpating to the correct depth.") + "\n\n" \
                         + "<span foreground='gray' font_weight='bold'>\u25CF</span>" \
                         + _(u" Gray circles indicate ") + "<span foreground='gray' font_weight='bold'>" \
                         + _(u"light palpation") + "</span>" + _(u", appropriate for beginning an abdominal exam, ") \
                         + _(u"but insufficient to detect significant abdominal disorders.") + "\n\n" \
                         + "<span foreground='blue' font_weight='bold'>\u25CF</span>" + _(u" Blue circles indicate ") \
                         + "<span foreground='blue' font_weight='bold'>" + _(u"deep palpation") + "</span>" \
                         + _(u", good for detecting serious disorders of the abdomen.") + "\n\n" \
                         + "<span foreground='red' font_weight='bold'>\u25CF</span>" + _(u" Red circles indicate ") \
                         + "<span foreground='red' font_weight='bold'>" + _(u"too deep") + "</span>" \
                         + _(u", causing unnecessary pain, even in a patient with no abnormalities. ") \
                         + _(u"This can result in voluntary guarding for the rest of the exam, leading to confusing ") \
                         + _(u"findings.") + "\n\n" + _(u"Instructors may adjust pressure sensitivity in the ") \
                         + "<span font_weight='bold'>" + _(u"Settings > Pressure Sensitivity") + "</span>" + _(" menu.")
        label_pre_mark = construct_markup(label_text, font_size=16)
        self.label.set_markup(label_pre_mark)
        self.label.set_line_wrap(True)
        self.label.set_alignment(0, 0)
        self.label.set_max_width_chars(50)
        
        self.pack_start(self.label, True, True, 20)
        self.pack_start(self.live_view_frame, False, False, 20)

    def reset_page(self):
        self.view_resources['new_case_observer'].alert('none n')
