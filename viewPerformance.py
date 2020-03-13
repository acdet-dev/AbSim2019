import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

from menuBar import MenuBar
from aStringResources import AStringResources
import simLabels
from testCreation import ViewExams


class ViewPerformance(Gtk.Window, MenuBar):
    def __init__(self, user_type, name, password):

        self.string_resources = AStringResources("view_performance", back_flag=True).get_by_identifier()

        # Make window
        Gtk.Window.__init__(self, title=self.string_resources["window_title"])
        self.set_icon_from_file('img/icon.ico')
        self.maximize()

        # get class parameters
        self.user_type = user_type
        self.name = name
        self.password = password

        self.baseline = ''
        self.ab = ''
        self.ddx = ''
        self.notebook = Gtk.Notebook()

        # add class parameters to resources dictionary to pass
        self.window_resources = {
            "name": self.name,
            "password": self.password,
            "user_type": self.user_type,
            "baseline": self.baseline,
            "ab": self.ab,
            "ddx": self.ddx,
            "notebook": self.notebook,
            "window": self,
        }

        # build menu bar
        box = self.build_bar()

        vbox = ViewExams(self.window_resources)
        base_vbox = Gtk.HBox(False, 2)
        ab_vbox = Gtk.VBox(False, 2)
        ddx_vbox = Gtk.VBox(False, 2)

        # Build main notebook. Each tab represents an instructional phase.
        self.notebook.set_tab_pos(0)

        # first selection notebook tab
        self.abDDX = vbox
        self.abDDX.set_property('border-width', 15)
        abDDX_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_1"])
        self.notebook.append_page(self.abDDX, abDDX_label)

        # baseline exam notebook tab
        self.window_resources['baseline'] = base_vbox
        self.window_resources['baseline'].set_property('border-width', 15)
        baseline_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_2"])
        self.notebook.append_page(self.window_resources['baseline'], baseline_label)

        # ab exam notebook tab
        self.window_resources['ab'] = ab_vbox
        self.window_resources['ab'].set_property('border-width', 15)
        ab_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_3"])
        self.notebook.append_page(self.window_resources['ab'], ab_label)

        # ddx exam notebook tab
        self.window_resources['ddx'] = ddx_vbox
        self.window_resources['ddx'].set_property('border-width', 15)
        ddx_label = simLabels.MilestoneNameLabel(self.string_resources["notebook_tab_4"])
        self.notebook.append_page(self.window_resources['ddx'], ddx_label)

        # add vbox as widget to window
        self.notebook.show()

        f_vbox = Gtk.VBox(False, 2)
        f_vbox.pack_start(box, False, False, 0)
        f_vbox.pack_start(self.notebook, True, True, 0)
        self.add(f_vbox)
        self.show_all()

        self.destroy_signal_handler = self.connect('destroy', Gtk.main_quit)
        self.notebook.set_current_page(0)
        self.notebook.get_nth_page(1).hide()
        self.notebook.get_nth_page(2).hide()
        self.notebook.get_nth_page(3).hide()
