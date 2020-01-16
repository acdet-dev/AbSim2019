import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


class SectionTree:
    def __init__(self, builder, section_list, one_flag=False):
        self.bw = builder
        self.sec_name = section_list
        self.b_list = []
        self.flag = one_flag

    def build_button_tree(self, sec_nums):
        check_button_box = Gtk.VBox()

        for num in sec_nums:
            button = self.bw.build_check_button(num, self.on_button_toggled, 12, [5, 5])
            check_button_box.pack_start(button, False, False, 0)
            self.b_list.append(button)

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