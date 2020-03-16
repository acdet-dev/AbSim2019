import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class SectionTree:
    def __init__(self, builder, section_list, one_flag=False):
        self.bw = builder
        self.sec_name = section_list
        self.b_list = []
        self.flag = one_flag

    def add_buttons(self, cbb, secs, f=""):
        for num in secs:
            if f == "":
                button = self.bw.build_check_button(num, self.on_button_toggled, 12, [5, 5])
            else:
                button = self.bw.build_check_button(num, f, 12, [5, 5])
            cbb.pack_start(button, False, False, 0)
            self.b_list.append(button)

        return cbb

    def create_box_add(self, s_nums, func=""):
        c_b_vbox = Gtk.VBox()
        c_b_part = self.add_buttons(c_b_vbox, s_nums, func)

        return c_b_part

    def chunks(self, lst, n):
        """Yield successive n-sized chunks from lst."""
        for i in range(0, len(lst), n):
            yield lst[i:i + n]

    def build_button_tree(self, sec_nums, function=""):
        check_len = len(sec_nums)

        if check_len > 3:
            check_button_box = Gtk.HBox()
            if 3 < check_len <= 4:
                chunked = self.chunks(sec_nums, 2)

            elif 4 < check_len <= 9:
                chunked = self.chunks(sec_nums, 3)

            elif 9 < check_len <= 16:
                chunked = self.chunks(sec_nums, 4)

            else:
                chunked = self.chunks(sec_nums, 5)

            for c in chunked:
                c_b_b = self.create_box_add(c, function)

                check_button_box.pack_start(c_b_b, False, False, 10)

        else:
            check_button_box = self.create_box_add(sec_nums, function)

        return check_button_box

    def on_button_toggled(self, button, name):
        if button.get_active():
            if self.flag:
                ind = self.b_list.index(button)
                for b in self.b_list:
                    if b == self.b_list[ind]:
                        continue
                    else:
                        b.set_active(False)
            self.sec_name.append(name)
        else:
            self.sec_name.remove(name)

    def get_number_sections(self):
        """ function to return unique sections of students """
        from studentmodel import StudentModel

        sm = StudentModel()
        students = sm.get_all(key="check")

        unique_sections = list(set([i[0] for i in students]))

        return sorted(unique_sections)

    def get_sections(self):
        section_numbers = self.get_number_sections()
        if len(section_numbers) > 0:
            button_tree = self.build_button_tree(section_numbers)

            return button_tree

        else:
            return None