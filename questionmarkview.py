#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
from gi.repository import Rsvg

import os
import liveview


class QuestionMarkView(liveview.LiveView):
    def __init__(self, parent, view_resources, show_all=False):
        self.feedback_enabled = True
        super(QuestionMarkView, self).__init__(parent, view_resources, show_all)
        
    def draw_ailment(self, scale_factor):
        if self.feedback_enabled:
            super(QuestionMarkView, self).draw_ailment(scale_factor)
        else:
            filename = 'html/dummy_imitation_question.svg'
        
            if os.path.isfile(filename):
                self.ail_svg = Rsvg.Handle.new_from_file(filename)
                
                self.ail_cr = self.window.cairo_create()
                self.ail_cr.scale(scale_factor, scale_factor)
                self.ail_svg.render_cairo(self.ail_cr)
        
    def draw_palpation_location(self, event):
        if self.feedback_enabled:
            super(QuestionMarkView, self).draw_palpation_location(event)
        else:
            super(QuestionMarkView, self).draw_abdomen_background()
        
    def draw_guarding(self, scale_factor):
        if self.feedback_enabled:
            super(QuestionMarkView, self).draw_guarding(scale_factor)
        
    def disable_feedback(self):
        self.feedback_enabled = False
        
    def enable_feedback(self):
        self.feedback_enabled = True
        # If no sim is connected, need to redraw once anyway
        self.queue_draw()
