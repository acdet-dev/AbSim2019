#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Holds prototype text for each ddx
"""
import gi

gi.require_version('Gtk', '3.0')
from gi.repository import Gtk, Gdk
from simLabels import font_size
from i18ntrans2 import _


class PrototypeText:
    def __init__(self):
        self.filename = 'prototypes.json'
        self.prototypes = {
            525: [

                _(u"Upper Gastrointestinal Etiology") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Location epigastric") + "\n"
                + _(u"Pain worsens with lying down") + "\n"
                + _(u"Pain occurs after meals") + "\n"
                + _(u"Acid reflux symptoms") + "\n"
                + _(u"Pain described as burning") + "\n"
                + _(u"Prior episodes of similar pain") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"Pain described as constant") + "\n"
                + _(u"Radiation of pain retrosternal") + "\n"
                + _(u"Acute onset of pain") + "\n"
                + _(u"Male") + "\n"
                + _(u"History of alcohol use/abuse") + "\n"
                + _(u"Age > 40 < 60") + "\n"
                + _(u"Age < 40") + "\n"
                + _(u"Duration of pain < 6 hours prior to presentation") + "\n"
                + _(u"Duration of pain 6 - 12 hours prior to presentation") + "\n"
                + _(u"Duration of pain 12 - 24 hours prior to presentation") + "\n"
                + _(u"Radiation of pain to back in midline") + "\n"
                + _(u"Use of aspirin or non-steroidal medications") + "\n"
                + _(u"Pain not worsening over time") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Temperature 36.1–37.8°C (97-100°F)") + "\n"
                + _(u"Tenderness in sub-xyphoid/epigastric area") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Normal bowel sounds") + "\n"
                + _(u"Patient remains still"),
                _(u"Choledocolithiasis") + "\n\n"
                + _(u"Acute onset of pain") + "\n"
                + _(u"Dark urine") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"Location right upper quadrant") + "\n"
                + _(u"History of gallbladder stones") + "\n"
                + _(u"Progressive worsening over time") + "\n"
                + _(u"Radiation of pain to shoulder/scapula") + "\n"
                + _(u"Duration of pain < 6 hours prior to presentation") + "\n"
                + _(u"Age > 40 < 60") + "\n"
                + _(u"Duration of pain 6 - 12 hours prior to presentation") + "\n"
                + _(u"Nausea-vomiting") + "\n"
                + _(u"Age < 40") + "\n"
                + _(u"Prior episodes of similar pain") + "\n"
                + _(u"Pain described as colicky/intermittant") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Tenderness in right upper quadrant") + "\n"
                + _(u"Temperature 36.1–37.8°C (97-100°F)") + "\n"
                + _(u"Normal bowel sounds") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Patient constantly moves") + "\n"
                + _(u"Icteric conjunctiva") + "\n"
                + _(u"Tachycardia"),
                _(u"Pancreatitis") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Location epigastric") + "\n"
                + _(u"Pain described as constant") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"Progressive worsening over time") + "\n"
                + _(u"Nausea-vomiting") + "\n"
                + _(u"Male") + "\n"
                + _(u"History of alcohol use/abuse") + "\n"
                + _(u"Duration of pain < 6 hours prior to presentation") + "\n"
                + _(u"Radiation of pain to back in midline") + "\n"
                + _(u"Pain occurs after meals") + "\n"
                + _(u"History of gallbladder stones") + "\n"
                + _(u"Age < 40") + "\n"
                + _(u"Age > 40 < 60") + "\n"
                + _(u"Duration of pain 6 - 12 hours prior to presentation") + "\n"
                + _(u"Prior episodes of similar pain") + "\n"
                + _(u"Bilious emesis") + "\n"
                + _(u"Pain described as burning") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Tenderness in sub-xyphoid/epigastric area") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Temperature 36.1–37.8°C (97-100°F)") + "\n"
                + _(u"Normal bowel sounds") + "\n"
                + _(u"Patient constantly moves") + "\n"
                + _(u"Tachycardia"),
                _(u"Cholecystitis") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Location right upper quadrant") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"History of gallbladder stones") + "\n"
                + _(u"Progressive worsening over time") + "\n"
                + _(u"Prior episodes of similar pain") + "\n"
                + _(u"Radiation of pain to shoulder/scapula") + "\n"
                + _(u"Duration of pain < 6 hours prior to presentation") + "\n"
                + _(u"Age < 40") + "\n"
                + _(u"Female") + "\n"
                + _(u"Nausea-vomiting") + "\n"
                + _(u"Duration of pain 6 - 12 hours prior to presentation") + "\n"
                + _(u"Age > 40 < 60") + "\n"
                + _(u"Gradual onset of pain") + "\n"
                + _(u"Pain described as colicky/intermittant") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Tenderness in right upper quadrant") + "\n"
                + _(u"Temperature 36.1–37.8°C (97-100°F)") + "\n"
                + _(u"Normal bowel sounds") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Patient constantly moves"),
                _(u"Mesenteric Infarction") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"Acute onset of pain") + "\n"
                + _(u"Age > 60") + "\n"
                + _(u"Pain described as constant") + "\n"
                + _(u"Progressive worsening over time") + "\n"
                + _(u"Duration of pain < 6 hours prior to presentation") + "\n"
                + _(u"History of cardiac irregularities") + "\n"
                + _(u"Radiation of pain to back in midline") + "\n"
                + _(u"Location periumbilical") + "\n"
                + _(u"Pain occurs after meals") + "\n"
                + _(u"Decreased bowel movements") + "\n"
                + _(u"Bloody emesis") + "\n"
                + _(u"Blood with bowel movement") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Patient constantly moves") + "\n"
                + _(u"Temperature 36.1–37.8°C (97-100°F)") + "\n"
                + _(u"Decreased bowel sounds") + "\n"
                + _(u"Tachycardia") + "\n"
                + _(u"Tachypnea") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Change in mental status/confusion") + "\n"
                + _(u"Hypotension") + "\n"
                + _(u"Abdominal wall erythema/edema") + "\n"
                + _(u"Abdominal bruit") + "\n"
                + _(u"Tenderness in sub-xyphoid/epigastric area"),
                _(u"Small Bowel Obstruction") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"Progressive worsening over time") + "\n"
                + _(u"Prior abdominal surgery") + "\n"
                + _(u"Decreased bowel movements") + "\n"
                + _(u"Abdominal fullness/distention") + "\n"
                + _(u"Nausea-vomiting") + "\n"
                + _(u"Duration of pain < 6 hours prior to presentation") + "\n"
                + _(u"Age > 60") + "\n"
                + _(u"Duration of pain 6 - 12 hours prior to presentation") + "\n"
                + _(u"Location periumbilical") + "\n"
                + _(u"Location non-specific") + "\n"
                + _(u"Female") + "\n"
                + _(u"Bilious emesis") + "\n"
                + _(u"Age > 40 < 60") + "\n"
                + _(u"Gradual onset of pain") + "\n"
                + _(u"Pain described as colicky/intermittant") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Temperature 36.1–37.8°C (97-100°F)") + "\n"
                + _(u"Patient constantly moves") + "\n"
                + _(u"Increased bowel sounds") + "\n"
                + _(u"Distended abdomen") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Tympanic abdomen") + "\n"
                + _(u"Tachypnea") + "\n"
                + _(u"Tachycardia"),
                _(u"Appendicitis") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"Progressive worsening over time") + "\n"
                + _(u"Pain described as constant") + "\n"
                + _(u"Feverish") + "\n"
                + _(u"Age < 40") + "\n"
                + _(u"Location right lower quadrant") + "\n"
                + _(u"Duration of pain 6 - 12 hours prior to presentation") + "\n"
                + _(u"Anorexia") + "\n"
                + _(u"Nausea-vomiting") + "\n"
                + _(u"Duration of pain 12 - 24 hours prior to presentation") + "\n"
                + _(u"Gradual onset of pain") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Tenderness in right lower quadrant") + "\n"
                + _(u"Temperature elevation >37.5 and <38.3°C (99.5 to 100.9°F)") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Decreased bowel sounds") + "\n"
                + _(u"Normal bowel sounds") + "\n"
                + _(u"Guarding in right lower quadrant") + "\n"
                + _(u"Tachycardia"),
                _(u"Diverticulitis") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Pain described as constant") + "\n"
                + _(u"Progressive worsening over time") + "\n"
                + _(u"Pain worsens with defecation") + "\n"
                + _(u"Pain moderate to severe") + "\n"
                + _(u"Location left lower quadrant") + "\n"
                + _(u"Feverish") + "\n"
                + _(u"Age > 60") + "\n"
                + _(u"Age > 40 < 60") + "\n"
                + _(u"Duration of pain < 6 hours prior to presentation") + "\n"
                + _(u"Duration of pain 6 - 12 hours prior to presentation") + "\n"
                + _(u"Gradual onset of pain") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"Tenderness in left lower quadrant") + "\n"
                + _(u"Temperature 36.1–37.8°C (97-100°F)") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"Decreased bowel sounds") + "\n"
                + _(u"Normal bowel sounds") + "\n"
                + _(u"Guarding in left lower quadrant") + "\n"
                + _(u"Tachycardia"),
                _(u"Acute Enteritis") + "\n\n"
                + _(u"Hx:") + "\n"
                + _(u"Nausea-vomiting") + "\n"
                + _(u"Feverish") + "\n"
                + _(u"Diarrhea") + "\n"
                + _(u"Age < 40") + "\n"
                + _(u"Location non-specific") + "\n"
                + _(u"Duration of pain 24 - 48 hours prior to presentation") + "\n"
                + _(u"Exposure to others with nausea/vomiting/diarrhea") + "\n"
                + _(u"Duration of pain 12 - 24 hours prior to presentation") + "\n"
                + _(u"Pain not worsening over time") + "\n"
                + _(u"Pain mild") + "\n"
                + _(u"Pain described as colicky/intermittant") + "\n\n"
                + _(u"PE:") + "\n"
                + _(u"No abdominal guarding") + "\n"
                + _(u"No abdominal tenderness") + "\n"
                + _(u"Temperature elevation >37.5 and <38.3°C (99.5 to 100.9°F)") + "\n"
                + _(u"Increased bowel sounds") + "\n"
                + _(u"Normal bowel sounds"),
            ]
        }

    def get_prototype_text(self, space, ddx, case_index=0):
        prototype_text = None
        try:
            prototype_text = self.prototypes[space][ddx - 1]
        except:
            prototype_text = \
                _(u"Example prototype text for ddx {ddx} index {case_index}").format(ddx=ddx,
                                                                                     case_index=str(case_index))
        return prototype_text


class PrototypeTextBuffer(Gtk.TextBuffer):
    def __init__(self):
        Gtk.TextBuffer.__init__(self)
        # apply text sizer here
        s_size = Gdk.screen_width() * Gdk.screen_height()
        if s_size < 1327104:
            font_s = font_size(s_size, f_size=14)
        else:
            font_s = 14

        self.proto_text = PrototypeText()
        self.prototype_tag = self.create_tag(size_points=font_s)

    def new_feedback(self, space, ddx, case=None):
        text = self.proto_text.get_prototype_text(space, ddx, case)
        self.set_text(text)
        start_iter = self.get_start_iter()
        end_iter = self.get_end_iter()
        self.apply_tag(self.prototype_tag, start_iter, end_iter)
