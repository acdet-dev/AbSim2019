from resources.aStringResources import AStringResources
import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk


class MilestoneNameLabel(Gtk.Label):
    def __init__(self, text):
        super(MilestoneNameLabel, self).__init__()
        self.set_alignment(0, 0)
        width = Gdk.screen_width()
        height = Gdk.screen_height()
        screen_size = width * height
        font_size = int(screen_size / 82944)
        if font_size > 16:
            font_size = 16
        elif font_size < 12:
            font_size = 12
        else:
            font_size = font_size

        beginning = u"<span font=" + "'" + str(font_size) + "'" + ">"
        end = u"</span>"
        self.set_markup(beginning + text + end)
        self.set_padding(5, 5)


class DisconnectWarning(Gtk.HBox):
    def __init__(self):
        super(DisconnectWarning, self).__init__()
        image = Gtk.Image()
        image.set_from_stock(Gtk.STOCK_STOP, Gtk.ICON_SIZE_LARGE_TOOLBAR)
        self.string_resources = AStringResources("sim_label").get_by_identifier()
        self.pack_start(image, False, False, 0)
        disconnection_label = Gtk.Label(self.string_resources["disconnected_label"])
        self.pack_start(disconnection_label, False, False, 5)


def construct_markup(lt, font_size=0, weight='', fgcolor=''):
    width = Gdk.screen_width()
    height = Gdk.screen_height()
    screen_size = width * height
    ratio = 1327104/font_size
    new_size = int(screen_size/ratio)
    if new_size < font_size - 4:
        new_size = font_size - 4
    elif new_size > font_size + 2:
        new_size = font_size + 2
    else:
        new_size = new_size
    if weight != '' and fgcolor == '':
        beginning = u"<span font=" + "'" + str(new_size) + "'" + " font_weight=" + "'" + weight + "'" + ">"
    elif weight != '' and fgcolor != '':
        beginning = u"<span font=" + "'" + str(new_size) + "'" + " font_weight=" + "'" + weight + "'" + " fgcolor=" \
            + "'" + fgcolor + "'" + ">"
    else:
        beginning = u"<span font=" + "'" + str(new_size) + "'" + ">"
    end = u"</span>"
    text = beginning + lt + end
    return text


def screen_sizer(s_w, s_h, old_width=0, old_height=0):
    resized_w = int(old_width * s_w / 1536)
    if old_height != 0:
        resized_h = int(old_height * s_h / 864)

        return resized_w, resized_h
    else:
        return resized_w


def font_size(s_size, f_size=0):
    ratio = 1327104/f_size
    font_s = int(s_size/ratio)
    if font_s < f_size - 4:
        font_s = f_size - 4
    elif font_s > f_size + 2:
        font_s = f_size + 2
    else:
        font_s = font_s

    return font_s
