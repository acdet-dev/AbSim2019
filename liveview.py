#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import os
import palpationgrid

import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

gi.require_version('Rsvg', '2.0')
from gi.repository import Rsvg


class LiveView(Gtk.DrawingArea):
    def __init__(self, parent, view_resources, show_all=False):
        super(LiveView, self).__init__()

        self.pressurepoints = view_resources['pressurepoints']
        self.guarding = view_resources['guarding']
        self.view_resources = view_resources

        if show_all:
            self.bgfilename = 'html/dummy_imitation_show_all.svg'
        else:
            self.bgfilename = 'html/dummy_imitation.svg'
        self.svg = Rsvg.Handle.new_from_file(self.bgfilename)
        self.parent_window = parent
        self.connect('draw', self.expose)

        view_resources['state_watcher'].connect('state-change', self.OnStateChange)

        self.ailments = view_resources['ailments']
        self.set_size_request(width=200, height=253)

        self.palpation_grid = palpationgrid.CircleGrid()
        view_resources['new_case_observer'].connect(self.change_ailment)

    def expose(self, widget, event):
        # print "expose event"
        cr = widget.window.cairo_create()
        scale_factor = self.get_scale_factor()
        cr.scale(scale_factor, scale_factor)

        self.draw_palpation_location(event)
        self.draw_background(scale_factor)
        self.draw_guarding(scale_factor)
        self.draw_ailment(scale_factor)
        self.draw_pushback(scale_factor)

    def draw_background(self, scale_factor):
        svg = Rsvg.Handle.new_from_file(self.bgfilename)
        bg_cr = self.window.cairo_create()
        bg_cr.scale(scale_factor, scale_factor)
        svg.render_cairo(bg_cr)

    def draw_ailment(self, scale_factor):
        filename = 'html/' + self.ailments.get_active_ailment() + '_' + self.ailments.get_state() + '.svg'
        self.draw_file(filename, scale_factor)

    def draw_guarding(self, scale_factor):
        filename = 'html/guarding_' + self.guarding.get_active_location() + '.svg'
        # print filename
        self.draw_file(filename, scale_factor)

    def draw_file(self, filename, scale_factor):
        if (os.path.isfile(filename)):
            svg = Rsvg.Handle.new_from_file(filename)
            cr = self.window.cairo_create()
            cr.scale(scale_factor, scale_factor)
            svg.render_cairo(cr)

    def draw_palpation_location(self, event):
        self.draw_abdomen_background()
        self.palpation_grid.draw_grid(event, self, self.pressurepoints.get_pressure_list(), False)

    def draw_abdomen_background(self):
        self.palpation_grid.draw_background(self)

    def draw_pushback(self, scale_factor):
        if self.ailments.get_pushback_state():
            ailment = self.ailments.get_active_ailment()
            filename = 'html/' + ailment + '_pushback.svg'
            self.draw_file(filename, scale_factor)

    def get_scale_factor(self):
        new_allocation = self.parent_window.get_allocation()

        # Pick the smallest, to fit in the new window size.
        scale_factor = min(
            float(new_allocation.height) / float(self.svg.props.height),
            float(new_allocation.width) / float(self.svg.props.width)
        )
        return scale_factor

    def OnStateChange(self, object, state):
        # state_change_time = time.clock() - self.seconds_since_last_draw
        # if state_change_time > 0.08:
        # print state_change_time
        # self.seconds_since_last_draw = time.clock()
        self.queue_draw()

    def change_ailment(self, new_ailment):
        self.set_bgfilename('show_all' in new_ailment)
        self.ailments.set_active_ailment(new_ailment)
        self.queue_draw()

    def set_bgfilename(self, show_all):
        if show_all:
            self.bgfilename = 'html/dummy_imitation_show_all.svg'
        else:
            self.bgfilename = 'html/dummy_imitation.svg'