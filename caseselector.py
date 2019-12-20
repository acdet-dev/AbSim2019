#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Pango, Gdk
from simLabels import font_size
from i18ntrans2 import _

  
class CaseSelector:
    def __init__(self, new_case_observer):
        self.new_case_observer = new_case_observer
        self.current_case = 'none n'
        
    def build_ddx_tree(self):
        # Columns available to rows:
        #   str: name visible in widget
        #   str: text sent in signal
        self.ddx_tree_store = Gtk.TreeStore(str, str)
        
        store = self.ddx_tree_store
        # Top level
        # add pretty ailment names call
        store.append(None, [_(u"No Abnormalities"), 'none n'])
        store.append(None, [u"", 'none n'])
        
        appendix = store.append(None, [_(u"Appendix Tenderness"), 'appendix t'])
        store.append(appendix, [_(u"With Guarding"), 'appendix g'])
        store.append(appendix, [_(u"With Rebound Tenderness"), 'appendix r'])
        store.append(appendix, [_(u"With Guarding and Rebound Tenderness"), 'appendix gr'])
        # store.append(appendix, [_(u"With Guarding and Pushback"), 'appendix gp'])
        
        colon = store.append(None, [_(u"Colon, Left Lower Tenderness"), 'colon t'])
        store.append(colon, [_(u"With Guarding"), 'colon g'])
        # store.append(colon, [_(u"With Guarding and Pushback"), 'colon gp'])
        
        gallbladder = store.append(None, [_(u"Gallbladder Tenderness"), 'gallbladder t'])
        store.append(gallbladder, [_(u"With Guarding"), 'gallbladder g'])
        # store.append(gallbladder, [_(u"With Guarding and Pushback"), 'gallbladder gp'])
        
        ugi = store.append(None, [_(u"Gastric Tenderness"), 'ugi t'])
        # store.append(ugi, [_(u"With Pushback"), 'ugi p'])
        
        ovary_left = store.append(None, [_(u"Ovary, Left Tenderness"), 'ovary_left t'])
        store.append(ovary_left, [_(u"With Guarding"), 'ovary_left g'])
        # store.append(ovary_left, [_(u"With Guarding and Pushback"), 'ovary_left gp'])
        
        ovary_right = store.append(None, [_(u"Ovary, Right Tenderness"), 'ovary_right t'])
        store.append(ovary_right, [_(u"With Guarding"), 'ovary_right g'])
        # store.append(ovary_right, [_(u"With Guarding and Pushback"), 'ovary_right gp'])
        
        pancreas = store.append(None, [_(u"Pancreas Tenderness"), 'pancreas t'])
        # pancreas_gp = store.append(pancreas, [_(u"With Pushback"), 'pancreas gp'])
        
        bladder = store.append(None, [_(u"Urinary Bladder Tenderness"), 'bladder t'])
        # store.append(bladder, [_(u"With Pushback"), 'bladder p'])
        
        store.append(None, [u"", 'none n'])
        
        store.append(None, [_(u"Hepatomegaly"), 'hepatomegaly n'])
        store.append(None, [_(u"Splenomegaly"), 'splenomegaly n'])
        store.append(None, [_(u"Enlarged Urinary Bladder"), 'enlarged_bladder n'])
        
        self.ddx_tree_view = Gtk.TreeView(self.ddx_tree_store)
        tv = self.ddx_tree_view  # alias
        
        # Set up font for display
        s_size = Gdk.screen_width() * Gdk.screen_height()
        if s_size < 1327104:
            font_s = font_size(s_size, f_size=14)
        else:
            font_s = 14
        font = Pango.FontDescription('normal ' + str(font_s))
        self.cell = Gtk.CellRendererText()
        self.cell.set_property('font-desc', font)
        
        tvcolumn = Gtk.TreeViewColumn(_(u"Ailment"), self.cell)
        tv.append_column(tvcolumn)
        tvcolumn.add_attribute(self.cell, 'text', 0)
        tv.expand_all()
        tv.connect('cursor-changed', self.on_tree_selected)
        return tv
    
    def on_case_selected(self, button=None):
        if(button):
            self.current_case = Gtk.Buildable.get_name(button)
        else:
            self.current_case = 'none n'
        self.new_case_observer.alert(self.current_case)
        
    def on_tree_selected(self, treeview):
        selection = treeview.get_selection()
        (model, iter) = selection.get_selected()
        
        self.current_case = model.get(iter, 1)[0]
        self.new_case_observer.alert(self.current_case)
