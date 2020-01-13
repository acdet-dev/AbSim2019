#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

from math import pi
import logging


class CircleGrid:
    def draw_grid(self, event, area, pressure_list, max):

        width = area.window.get_width()
        height = area.window.get_height()
    
        cr = area.window.cairo_create()
        
        row0_x_start = width * 0.465
        row0_y_start = height * 0.86
        
        x_between_columns = width * 0.027
        y_between_columns = height * 0.022
        
        x_between_rows = width * 0.027
        y_between_rows = height * 0.022
        
        circle_radius = width * 0.02
        
        # optimization: using local variables to avoid using dots inside the loops
        set_color = self.set_color
        cr_fill = cr.fill
        cr_draw_rectangle = cr.rectangle
        cr_set_color = cr.set_source_rgba
        cr_draw_arc = cr.arc
        circle_angle = 2 * pi
        
        # Draw white background first
        cr_set_color(1, 1, 1, 1)
        cr_draw_rectangle(0, 0, width, height)
        cr_fill()
        
        row = 0
        pressure_i = 0
        while row < 12:
            row_x = row * x_between_rows
            row_y = row * y_between_rows
            col = 0
            while col < 12:
                try:
                    set_color(cr_set_color, pressure_list[pressure_i], max)
                except IndexError:
                    logging.debug('Index Error occurred while drawing palpation grid.')
                this_circle_x = row0_x_start + (col * x_between_columns) - row_x
                this_circle_y = row0_y_start - (col * y_between_columns) - row_y
                cr_draw_arc(this_circle_x, this_circle_y, circle_radius, 0, circle_angle)
                cr_fill()
                pressure_i = pressure_i + 1
                col = col + 1
            row = row + 1

    def draw_background(self, area):
        width = area.window.get_width()
        height = area.window.get_height()

        cr = area.window.cairo_create()
        
        cr.set_source_rgba(1, 1, 1, 1)
        cr.rectangle(-width, 0, width * 3, height * 2)
        cr.fill()

    def set_color(self, cr_set_color, pressure_point, max):
        if(max):
            state = pressure_point.get_max_state()
        else:
            state = pressure_point.get_state()
        if(state == 'up'):
            cr_set_color(1, 1, 1, 0)  # invisible white
        elif(state == 'slightly_down'):
            cr_set_color(0.5, 0.5, 0.5, 0.5)  # gray
        elif(state == 'down'):
            cr_set_color(0, 0, 1, 0.5)  # blue
        elif(state == 'too_hard'):
            cr_set_color(1, 0, 0, 0.5)  # red because purple is out
        elif(state == 'way_too_hard'):
            cr_set_color(1, 0, 0, 0.5)  # red