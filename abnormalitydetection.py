#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import caseselector
import liveview
from simLabels import construct_markup, screen_sizer
from aStringResources import AStringResources

from gi import pygtkcompat
pygtkcompat.enable()
pygtkcompat.enable_gtk(version='3.0')
import gtk


class AbnormalityDetection (gtk.HBox):
    """Train students to detect abnormalities through an exploratory interface"""
    def __init__(self, view_resources):
        super(AbnormalityDetection, self).__init__(False, 2)

        self.view_resources = view_resources
        self.string_resources = AStringResources("abnormality_detection").get_by_identifier()
        self.live_view_frame = gtk.AspectFrame(
            label=None, xalign=0.5, yalign=0.5, ratio=0.789, obey_child=False)
        self.live_view = liveview.LiveView(self.live_view_frame, view_resources)
        self.live_view_frame.add(self.live_view)
        screen_width = gtk.gdk.screen_width()
        screen_height = gtk.gdk.screen_height()

        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=600)
        self.live_view_frame.set_size_request(width, height)

        self.case_selector = caseselector.CaseSelector(view_resources['new_case_observer'])
        self.case_selector_tree = self.case_selector.build_ddx_tree()
        self.case_selector_scroller = gtk.ScrolledWindow()
        self.case_selector_scroller.add(self.case_selector_tree)
        self.case_selector_scroller.set_policy(gtk.POLICY_NEVER, gtk.POLICY_AUTOMATIC)

        w, h = screen_sizer(screen_width, screen_height, old_width=450, old_height=200)
        self.case_selector_scroller.set_size_request(w, h)

        self.label = gtk.Label(u" ")
        label_text = self.string_resources["instruction_a"] + "\n\n" + self.string_resources["instruction_b"] + " " +\
                     self.string_resources["instruction_c"]
        self.label_pre_mark = construct_markup(label_text, font_size=16)
        self.label.set_markup(self.label_pre_mark)
        self.label.set_line_wrap(True)
        self.label.set_alignment(0, 0)
        self.label.set_max_width_chars(50)

        self.pack_start(self.label, False, False, 10)
        self.pack_start(self.case_selector_scroller, False, False, 10)
        self.pack_start(self.live_view_frame, False, False, 10)
        self.show_all()

    def reset_page(self):
        iter_root = self.case_selector_tree.get_model().get_iter_first()
        tree_selection = self.case_selector_tree.get_selection()
        tree_selection.unselect_all()
        tree_selection.select_iter(iter_root)
        self.view_resources['new_case_observer'].alert('none n')