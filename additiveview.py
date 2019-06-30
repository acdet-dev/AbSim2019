#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import os
import liveview

from gi.repository import Rsvg


class AdditiveView(liveview.LiveView):
    def __init__(self, parent, view_resources, show_all=False):
        super(AdditiveView, self).__init__(parent, view_resources, show_all)
        
    def draw_ailment(self, scale_factor):
        # Overloaded to use max depth instead of current depth
        filename = 'html/' + self.ailments.get_active_ailment() + '_' + self.ailments.get_max_state() + '.svg'
        
        if os.path.isfile(filename):
            self.ail_svg = Rsvg.Handle.new_from_file(filename)
            
            self.ail_cr = self.window.cairo_create()
            self.ail_cr.scale(scale_factor, scale_factor)
            self.ail_svg.render_cairo(self.ail_cr)
        
    def draw_palpation_location(self, event):
        # Overloaded to use max pressure instead of current pressure
        self.palpation_grid.draw_grid(event, self, self.pressurepoints.get_pressure_list(), True)
        
    def change_ailment(self, new_ailment):
        super(AdditiveView, self).change_ailment(new_ailment)
