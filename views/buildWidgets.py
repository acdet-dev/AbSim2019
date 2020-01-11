import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk, GdkPixbuf

from simLabels import construct_markup, screen_sizer


class BuildWidgets:
    def __init__(self):
        """Class to build and return main widgets for pages"""

    def build_label(self, label_text, f_size=24, alignment=[]):
        use_label = Gtk.Label()
        # TRANSLATORS Be careful to keep 'size' and 'font' tags.
        # TRANSLATORS However, you can change the size of text with these by a small amount
        # TRANSLATORS to adjust for fitting text on screen.
        label_pre_mark = construct_markup(label_text, font_size=f_size)
        use_label.set_markup(label_pre_mark)
        if len(alignment) > 0:
            use_label.set_alignment(alignment[0], alignment[1])

        return use_label

    def build_logo(self, img_string):
        # Add logo to menu box widget
        logo = Gtk.Image()

        logo.set_from_file(img_string)

        return logo

    def build_pixbuf_logo(self, img_string):
        # get screen size
        s_w = Gdk.Screen.get_default().get_width()
        s_h = Gdk.Screen.get_default().get_height()
        width, height = screen_sizer(s_w, s_h, old_width=450, old_height=325)

        pixbuf = GdkPixbuf.Pixbuf.new_from_file_at_scale(
            filename=img_string,
            width=width,
            height=height,
            preserve_aspect_ratio=True)
        logo = Gtk.Image.new_from_pixbuf(pixbuf)

        return logo

    def add_buttons(self, button_list=[], description_list=[], functions=[]):
        # add buttons
        button_table = Gtk.Table(rows=len(button_list), columns=len(description_list))
        button_table.set_border_width(50)
        button_table.set_col_spacings(30)
        button_table.set_row_spacings(30)

        if len(button_list) > 0:
            i = 0
            b_pos_x = 1
            b_pos_y = 2
            d_pos_x = 1
            d_pos_y = 2

            for item in button_list:
                button = self.build_button(item)
                button.connect('clicked', functions[i])
                button_table.attach(button, 0, 1, b_pos_x, b_pos_y, xoptions=False, yoptions=False)

                if len(description_list) > 0:
                    explanation = Gtk.Label()
                    label_text = description_list[i]
                    label_pre_mark = construct_markup(label_text, font_size=20)
                    explanation.set_markup(label_pre_mark)
                    button_table.attach(explanation, 1, 2, d_pos_x, d_pos_y)
                    d_pos_x += 1
                    d_pos_y += 1

                i += 1
                b_pos_x += 1
                b_pos_y += 1

        return button_table

    def add_horizontal_buttons(self, button_list=[], functions=[], f_size=20):
        # add buttons
        button_table = Gtk.Table(rows=1, columns=len(button_list))
        button_table.set_border_width(20)
        button_table.set_col_spacings(5)
        button_table.set_row_spacings(5)

        if len(button_list) > 0:
            i = 0
            b_pos_x = 1
            b_pos_y = 2

            for item in button_list:
                button = self.build_button(item, f_size)
                button.connect('clicked', functions[i])
                button_table.attach(button, b_pos_x, b_pos_y, 0, 1, xoptions=False, yoptions=False)

                i += 1
                b_pos_x += 1
                b_pos_y += 1

        return button_table

    def build_button(self, label_text, f_size=20):
        button = Gtk.Button()
        label = Gtk.Label()
        lt = label_text
        lt_pre_mark = construct_markup(lt, font_size=f_size)
        label.set_markup(lt_pre_mark)
        label.set_padding(10, 10)
        button.add(label)
        return button

    def build_check_button(self, label_text, function, f_size, padding):
        button = Gtk.CheckButton.new()
        label = Gtk.Label()
        label_pre_mark = construct_markup(label_text, font_size=f_size)
        label.set_markup(label_pre_mark)
        label.set_padding(padding[0], padding[1])
        button.add(label)
        button.connect("toggled", function, label_text)

        return button

    def create_scroller(self):
        from simLabels import screen_sizer
        # scroller window for all abnormality and ddx exams in queue
        sw = Gtk.ScrolledWindow()
        sw.set_shadow_type(3)
        sw.set_policy(1, 1)

        # get adjusted width
        screen_width = Gdk.Screen.get_default().get_width()
        screen_height = Gdk.Screen.get_default().get_height()
        width, height = screen_sizer(screen_width, screen_height, old_width=400, old_height=600)

        # allocate space to scroller
        sw.set_size_request(width, height)

        return sw

    def create_text_view(self, width, height, bf):
        text_view = Gtk.TextView(buffer=bf)
        text_view.set_editable(False)
        text_view.set_wrap_mode(2)

        text_scroller = Gtk.ScrolledWindow()
        text_scroller.set_property('hscrollbar-policy', 0)
        text_scroller.set_property('vscrollbar-policy', 0)
        text_scroller.set_size_request(width, height)
        text_scroller.set_property('border-width', 1)
        text_scroller.add(text_view)

        return text_scroller

    def build_tree_view(self, store, row_change_function):
        # create tree views
        tv = Gtk.TreeView(store)
        tv.connect('cursor-changed', row_change_function)
        tv.set_rules_hint(True)

        return tv

    def create_columns(self, treeView, h_list, custom_indices=[]):
        if len(custom_indices) > 0:
            for ind in range(0, len(h_list)):
                renderer_text = Gtk.CellRendererText()
                column = Gtk.TreeViewColumn(h_list[ind], renderer_text, text=custom_indices[ind])
                column.set_sort_column_id(custom_indices[ind])
                column.set_resizable(True)
                treeView.append_column(column)
        else:
            i = 0
            for header in h_list:
                renderer_text = Gtk.CellRendererText()
                column = Gtk.TreeViewColumn(header, renderer_text, text=i)
                column.set_sort_column_id(i)
                column.set_resizable(True)
                treeView.append_column(column)

                i += 1
