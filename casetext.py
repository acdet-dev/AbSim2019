#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Gets and sets default settings
"""

import random

import gi

gi.require_version('Gtk', '3.0')
from simLabels import font_size
from gi.repository import Gtk, Gdk
from i18ntrans2 import _


class CaseText:
    def __init__(self):
        self.filename = 'cases.json'

        self.cases = {
            # Space 525, "Acute Abdominal Pain Simulator"
            525: [
                [
                    {
                        'vignette': _(u"HISTORY: A 54 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as acute in onset, mild in nature, a burning "
                                      u"sensation, constant, progressive worsening over time, and ongoing for "
                                      u"approximately 42 hours prior to presentation. The location is described as "
                                      u"epigastric, radiating retrosternally, occurring after meals, and worsening "
                                      u"with lying down. She describes the following associated findings: bloody "
                                      u"emesis, decreased bowel movements, and prior episodes of similar pain. The "
                                      u"patient's past medical history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 36.4°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: normal bowel sounds."),

                        'ddx': 1,
                        'ddx_name': _(u"Upper Gastrointestinal Etiology"),
                        'case_id': 'IBW5fG080X0H40',
                        'ailment': 'ugi t',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 51 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as acute in onset, moderate to severe, a burning "
                                      u"sensation, constant, not worsening over time, and ongoing for approximately 6 "
                                      u"hours prior to presentation. The location is described as epigastric, "
                                      u"radiating retrosternally, occurring after meals, and worsening with lying "
                                      u"down. He describes the following associated findings: episodes of abdominal "
                                      u"fullness, bilious emesis, heartburn, and prior episodes of similar pain. The "
                                      u"patient's past medical history is positive for the following: ongoing use of "
                                      u"aspirin, and alcohol abuse.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals a patient who "
                                      u"wants to remain very still. VITAL SIGNS are remarkable for the following: "
                                      u"temperature 36.8°C. THORAX and LUNGS are unremarkable. ABDOMINAL "
                                      u"EXAM/INSPECTION is unremarkable. ABDOMINAL AUSCULTATION reveals: normal bowel "
                                      u"sounds."),
                        'ddx': 1,
                        'ddx_name': _(u"Upper Gastrointestinal Etiology"),
                        'case_id': 'McW7eC1AWX0H40',
                        'ailment': 'ugi t',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 45 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"not worsening over time, and ongoing for approximately 16 hours prior to "
                                      u"presentation. The location is described as epigastric, radiating to the back "
                                      u"in mid-line, occurring after meals, and worsening with lying down. He "
                                      u"describes the following associated findings: feeling feverish, "
                                      u"and acid reflux symptoms. The patient's past medical history is positive for "
                                      u"the following: ongoing use of aspirin.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals a patient who "
                                      u"wants to remain very still. VITAL SIGNS are remarkable for the following: "
                                      u"temperature 36.7°C. THORAX and LUNGS are unremarkable. ABDOMINAL "
                                      u"EXAM/INSPECTION is unremarkable. ABDOMINAL AUSCULTATION reveals: normal bowel "
                                      u"sounds."),
                        'ddx': 1,
                        'ddx_name': _(u"Upper Gastrointestinal Etiology"),
                        'case_id': 'KMWJW0H0WX0H40',
                        'ailment': 'ugi t',
                        'gender': 'male',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 51 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as acute in onset, moderate to severe, constant, "
                                      u"not worsening over time, and ongoing for approximately 8 hours prior to "
                                      u"presentation. The location is described as right upper quadrant, "
                                      u"and radiating to the scapula. He describes the following associated findings: "
                                      u"dark urine. The patient's past medical history is positive for the following: "
                                      u"a history of gallbladder stones.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient constantly moving, and icteric conjunctiva. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 36.9°C, and tachycardia at 122. "
                                      u"THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. "
                                      u"ABDOMINAL AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 2,
                        'ddx_name': _(u"Choledocolithiasis"),
                        'case_id': 'Mc2802054o0H40',
                        'ailment': 'gallbladder t',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 52 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as acute in onset, moderate to severe, colicky and "
                                      u"intermittent, not worsening over time, and ongoing for approximately 6 hours "
                                      u"prior to presentation. The location is described as right upper quadrant, "
                                      u"and occurring after meals. She describes the following associated findings: "
                                      u"dark urine, acholic stools, and feeling feverish. The patient's past medical "
                                      u"history is positive for the following: a history of gallbladder "
                                      u"stones.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient constantly moving. VITAL SIGNS are remarkable for the "
                                      u"following: temperature 36.7°C, and tachycardia at 128. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: decreased bowel sounds."),
                        'ddx': 2,
                        'ddx_name': _(u"Choledocolithiasis"),
                        'case_id': 'Ia2103G54Y2180',
                        'ailment': 'gallbladder g',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 51 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as acute in onset, moderate to severe, colicky and "
                                      u"intermittent, progressive worsening over time, and ongoing for approximately "
                                      u"10 hours prior to presentation. The location is described as right upper "
                                      u"quadrant. She describes the following associated findings: dark urine. The "
                                      u"patient's past medical history is positive for the following: a history of "
                                      u"gallbladder stones.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient continually seeking a position of comfort, and icteric "
                                      u"conjunctiva. VITAL SIGNS are remarkable for the following: temperature 36.6°C, "
                                      u"and tachycardia at 117. THORAX and LUNGS are unremarkable. ABDOMINAL "
                                      u"EXAM/INSPECTION is unremarkable. ABDOMINAL AUSCULTATION reveals: normal bowel "
                                      u"sounds."),
                        'ddx': 2,
                        'ddx_name': _(u"Choledocolithiasis"),
                        'case_id': 'Ib2002054o2140',
                        'ailment': 'gallbladder g',
                        'gender': 'female',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 29 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"not worsening over time, and ongoing for less than 4 hours prior to "
                                      u"presentation. The location is described as epigastric, and radiating to the "
                                      u"back in mid-line. He describes the following associated findings: nausea and "
                                      u"vomiting, and bilious emesis. The patient's past medical history is positive "
                                      u"for the following: alcohol abuse.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient continually seeking a position of comfort. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 37.4°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 3,
                        'ddx_name': _(u"Pancreatitis"),
                        'case_id': 'b6WG44030X0H40',
                        'ailment': 'pancreas t',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 26 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as acute in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 8 hours prior "
                                      u"to presentation. The location is described as epigastric, and radiating to "
                                      u"the back in mid-line. She describes the following associated findings: nausea "
                                      u"and vomiting, and bilious emesis. The patient's past medical history is "
                                      u"positive for the following: a history of gallbladder stones, and alcohol "
                                      u"use.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient frequently changing positions. VITAL SIGNS are "
                                      u"remarkable for the following: temperature 38.2°C, and tachycardia at 113. "
                                      u"THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. "
                                      u"ABDOMINAL AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 3,
                        'ddx_name': _(u"Pancreatitis"),
                        'case_id': 'YdWG4407K10H40',
                        'ailment': 'pancreas t',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 33 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as acute in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 11 hours prior "
                                      u"to presentation. The location is described as epigastric, radiating to the "
                                      u"back in mid-line, and occurring after meals. She describes the following "
                                      u"associated findings: nausea and vomiting, and bilious emesis. The patient's "
                                      u"past medical history is positive for the following: a history of gallbladder "
                                      u"stones, and alcohol abuse.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient frequently changing positions. VITAL SIGNS are "
                                      u"remarkable for the following: temperature 38.1°C, and tachycardia at 114. "
                                      u"THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. "
                                      u"ABDOMINAL AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 3,
                        'ddx_name': _(u"Pancreatitis"),
                        'case_id': 'YdWH4407K10H40',
                        'ailment': 'pancreas t',
                        'gender': 'female',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 66 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, colicky and "
                                      u"intermittent, progressive worsening over time, and ongoing for approximately "
                                      u"7 hours prior to presentation. The location is described as non-specific, "
                                      u"and radiating to the scapula. She describes the following associated "
                                      u"findings: feeling feverish. The patient's past medical history is positive "
                                      u"for the following: a history of gallbladder stones.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient constantly moving. VITAL SIGNS are remarkable for the "
                                      u"following: temperature 36.6°C. THORAX and LUNGS are unremarkable. "
                                      u"ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL AUSCULTATION reveals: "
                                      u"normal bowel sounds. "),
                        'ddx': 4,
                        'ddx_name': _(u"Cholecystitis"),
                        'case_id': '8bG800G50Y0H40',
                        'ailment': 'gallbladder t',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 66 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, colicky and "
                                      u"intermittent, progressive worsening over time, and ongoing for less than 3 "
                                      u"hours prior to presentation. The location is described as right upper "
                                      u"quadrant, and radiating to the scapula. She describes the following "
                                      u"associated findings: nausea and vomiting, episodes of abdominal bloating, "
                                      u"and prior episodes of similar pain. The patient's past medical history is "
                                      u"positive for the following: 3 pregnancies.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient frequently changing positions. VITAL SIGNS are "
                                      u"remarkable for the following: temperature 36.9°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 4,
                        'ddx_name': _(u"Cholecystitis"),
                        'case_id': '9528480f0Y2140',
                        'ailment': 'gallbladder g',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 54 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, colicky and "
                                      u"intermittent, progressive worsening over time, and ongoing for less than 2 "
                                      u"hours prior to presentation. The location is described as right upper "
                                      u"quadrant, and radiating to the scapula. She describes the following "
                                      u"associated findings: prior episodes of similar pain. The patient's past "
                                      u"medical history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 38.1°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 4,
                        'ddx_name': _(u"Cholecystitis"),
                        'case_id': 'H5280008G20H40',
                        'ailment': 'gallbladder t',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 34 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, "
                                      u"a burning sensation, colicky and intermittent, not worsening over time, "
                                      u"and ongoing for approximately 6 hours prior to presentation. The location is "
                                      u"described as right upper quadrant, radiating to the scapula, and occurring "
                                      u"after meals. She describes the following associated findings: nausea and "
                                      u"vomiting, feeling feverish, and prior episodes of similar pain. The patient's "
                                      u"past medical history is positive for the following: cardiac irregularities, "
                                      u"and 4 pregnancies.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 36.5°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 4,
                        'ddx_name': _(u"Cholecystitis"),
                        'case_id': 'Wa29C0Ge0c0H40',
                        'ailment': 'gallbladder t',
                        'gender': 'female',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 72 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as acute in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for less than 4 hours prior to "
                                      u"presentation. The location is described as peri-umbilical. She describes the "
                                      u"following associated findings: decreased bowel movements. The patient's past "
                                      u"medical history is positive for the following: cardiac "
                                      u"irregularities.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient constantly moving, and confusion. VITAL SIGNS are "
                                      u"remarkable for the following: temperature 36.5°C, tachycardia at 123, "
                                      u"tachypnea at 26, and a blood pressure of 80 over 51. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: decreased bowel sounds, and an abdominal bruit."),
                        'ddx': 5,
                        'ddx_name': _(u"Mesenteric Infarction"),
                        'case_id': 'B7800G017a8XeG',
                        'ailment': 'colon g',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 74 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as acute in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for less than 5 hours prior to "
                                      u"presentation. The location is described as peri-umbilical. He describes the "
                                      u"following associated findings: decreased bowel movements. The patient's past "
                                      u"medical history is positive for the following: cardiac "
                                      u"irregularities.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient constantly moving. VITAL SIGNS are remarkable for the "
                                      u"following: temperature 38.2°C, tachycardia at 128, tachypnea at 24, and a "
                                      u"blood pressure of 76 over 54. THORAX and LUNGS are unremarkable. ABDOMINAL "
                                      u"EXAM/INSPECTION is unremarkable. ABDOMINAL AUSCULTATION reveals: decreased "
                                      u"bowel sounds, and an abdominal bruit."),
                        'ddx': 5,
                        'ddx_name': _(u"Mesenteric Infarction"),
                        'case_id': 'F7800G01N44He0',
                        'ailment': 'none n',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 75 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as acute in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 14 hours prior "
                                      u"to presentation. The location is described as peri-umbilical, and radiating "
                                      u"to the back in mid-line. She describes the following associated findings: "
                                      u"decreased bowel movements. The patient's past medical history is positive for "
                                      u"the following: cardiac irregularities.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient constantly moving, and confusion. VITAL SIGNS are "
                                      u"remarkable for the following: temperature 36.9°C, tachycardia at 128, and "
                                      u"tachypnea at 25. THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION "
                                      u"is unremarkable. ABDOMINAL AUSCULTATION reveals: decreased bowel sounds."),
                        'ddx': 5,
                        'ddx_name': _(u"Mesenteric Infarction"),
                        'case_id': 'AN8G0G016a8X8G',
                        'ailment': 'colon g',
                        'gender': 'female',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 70 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, moderate to severe, colicky and "
                                      u"intermittent, progressive worsening over time, and ongoing for less than 3 "
                                      u"hours prior to presentation. The location is described as peri-umbilical. He "
                                      u"describes the following associated findings: nausea and vomiting, "
                                      u"decreased bowel movements, episodes of abdominal bloating, and bilious "
                                      u"emesis. The patient's past medical history is positive for the following: "
                                      u"prior abdominal surgery, and a history of gallbladder stones.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals confusion. "
                                      u"VITAL SIGNS are remarkable for the following: temperature 36.3°C, and "
                                      u"tachypnea at 23. THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION "
                                      u"reveals: mild distention. ABDOMINAL AUSCULTATION reveals: increased bowel "
                                      u"sounds."),
                        'ddx': 6,
                        'ddx_name': _(u"Small Bowel Obstruction"),
                        'case_id': 'D5804S0K2WX1IG',
                        'ailment': 'appendix g',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 66 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, colicky and "
                                      u"intermittent, progressive worsening over time, and ongoing for less than 3 "
                                      u"hours prior to presentation. The location is described as non-specific, "
                                      u"and radiating to the back in mid-line. She describes the following associated "
                                      u"findings: nausea and vomiting, decreased bowel movements, episodes of "
                                      u"abdominal fullness, and bilious emesis. The patient's past medical history is "
                                      u"positive for the following: prior abdominal surgery.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient continually seeking a position of comfort. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 36.3°C, and tachypnea at 26. "
                                      u"THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION reveals: sight "
                                      u"distention. ABDOMINAL AUSCULTATION reveals: increased bowel sounds, and the "
                                      u"presence of tympany."),
                        'ddx': 6,
                        'ddx_name': _(u"Small Bowel Obstruction"),
                        'case_id': '95GG4S0H2WWHIW',
                        'ailment': 'appendix t',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 70 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for less than 4 hours prior to "
                                      u"presentation. The location is described as peri-umbilical. She describes the "
                                      u"following associated findings: blood with bowel movement, decreased bowel "
                                      u"movements, episodes of abdominal bloating, and bilious emesis. The patient's "
                                      u"past medical history is positive for the following: prior abdominal "
                                      u"surgery.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals an "
                                      u"uncomfortable patient constantly moving. VITAL SIGNS are remarkable for the "
                                      u"following: temperature 36.1°C, tachycardia at 117, and tachypnea at 22. "
                                      u"THORAX and LUNGS Decreased breath sounds are noted at the bases. ABDOMINAL "
                                      u"EXAM/INSPECTION reveals: sight distention. ABDOMINAL AUSCULTATION reveals: "
                                      u"increased bowel sounds, the presence of tympany, and an abdominal bruit."),
                        'ddx': 6,
                        'ddx_name': _(u"Small Bowel Obstruction"),
                        'case_id': '97800y0H6e8HoW',
                        'ailment': 'colon t',
                        'gender': 'female',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 32 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 9 hours prior "
                                      u"to presentation. The location is described as non-specific. She describes the "
                                      u"following associated findings: nausea and vomiting. The patient's past "
                                      u"medical history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 37.7°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: decreased bowel sounds."),
                        'ddx': 7,
                        'ddx_name': _(u"Appendicitis"),
                        'case_id': 'WdG04000G0X180',
                        'ailment': 'appendix g',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 27 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 11 hours prior "
                                      u"to presentation. The location is described as peri-umbilical. He describes "
                                      u"the following associated findings: nausea and vomiting, anorexia, and feeling "
                                      u"feverish. The patient's past medical history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 38.1°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: decreased bowel sounds."),
                        'ddx': 7,
                        'ddx_name': _(u"Appendicitis"),
                        'case_id': 'ad8040m0G0WH80',
                        'ailment': 'appendix t',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 67 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 8 hours prior "
                                      u"to presentation. The location is described as right lower quadrant. She "
                                      u"describes the following associated findings: anorexia, and feeling feverish. "
                                      u"The patient's past medical history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals a patient who "
                                      u"wants to remain very still. VITAL SIGNS are remarkable for the following: "
                                      u"temperature 38.6°C. THORAX and LUNGS are unremarkable. ABDOMINAL "
                                      u"EXAM/INSPECTION is unremarkable. ABDOMINAL AUSCULTATION reveals: decreased "
                                      u"bowel sounds."),
                        'ddx': 7,
                        'ddx_name': _(u"Appendicitis"),
                        'case_id': '8d1000m0e0X180',
                        'ailment': 'appendix g',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 28 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, moderate to severe, a burning "
                                      u"sensation, constant, progressive worsening over time, and ongoing for "
                                      u"approximately 36 hours prior to presentation. The location is described as "
                                      u"right lower quadrant. He describes the following associated findings: nausea "
                                      u"and vomiting, anorexia, feeling feverish, and heartburn. The patient's past "
                                      u"medical history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 38°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: decreased bowel sounds."),
                        'ddx': 7,
                        'ddx_name': _(u"Appendicitis"),
                        'case_id': 'aF10C0n0G0X180',
                        'ailment': 'appendix g',
                        'gender': 'male',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 49 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 16 hours prior "
                                      u"to presentation. The location is described as left lower quadrant, "
                                      u"and worsening with defecation. He describes the following associated "
                                      u"findings: decreased bowel movements, and prior episodes of similar pain. The "
                                      u"patient's past medical history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 36.9°C, and tachycardia at 130. "
                                      u"THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. "
                                      u"ABDOMINAL AUSCULTATION reveals: decreased bowel sounds."),
                        'ddx': 8,
                        'ddx_name': _(u"Diverticulitis"),
                        'case_id': 'KN0WGG084W8X80',
                        'ailment': 'colon g',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 67 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 16 hours prior "
                                      u"to presentation. The location is described as peri-umbilical. He describes "
                                      u"the following associated findings: blood with bowel movement, and feeling "
                                      u"feverish. The patient's past medical history is positive for the following: "
                                      u"ongoing use of aspirin, prior abdominal surgery, cardiac irregularities, "
                                      u"a history of gallbladder stones, and alcohol abuse.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: The patient's General Appearance reveals a patient who "
                                      u"wants to remain very still. VITAL SIGNS are remarkable for the following: "
                                      u"temperature 36.7°C. THORAX and LUNGS are unremarkable. ABDOMINAL "
                                      u"EXAM/INSPECTION is unremarkable. ABDOMINAL AUSCULTATION reveals: normal bowel "
                                      u"sounds."),
                        'ddx': 8,
                        'ddx_name': _(u"Diverticulitis"),
                        'case_id': 'CN820WGMWa8X40',
                        'ailment': 'colon g',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 49 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, moderate to severe, constant, "
                                      u"progressive worsening over time, and ongoing for approximately 11 hours prior "
                                      u"to presentation. The location is described as peri-umbilical. She describes "
                                      u"the following associated findings: anorexia. The patient's past medical "
                                      u"history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 36.7°C, and tachycardia at 114. "
                                      u"THORAX and LUNGS are unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. "
                                      u"ABDOMINAL AUSCULTATION reveals: decreased bowel sounds."),
                        'ddx': 8,
                        'ddx_name': _(u"Diverticulitis"),
                        'case_id': 'Gd8000W04W8H80',
                        'ailment': 'colon t',
                        'gender': 'female',
                    },
                ],

                [
                    {
                        'vignette': _(u"HISTORY: A 49 year old female presents for an evaluation of abdominal pain. "
                                      u"She describes the pain as gradual in onset, mild in nature, colicky and "
                                      u"intermittent, not worsening over time, and ongoing for approximately 48 hours "
                                      u"prior to presentation. The location is described as peri-umbilical. She "
                                      u"describes the following associated findings: nausea and vomiting, diarrhea, "
                                      u"feeling feverish, and recent foreign travel. The patient's past medical "
                                      u"history is positive for the following: ongoing use of non-steroidal "
                                      u"medications, prior abdominal surgery, cardiac irregularities, a history of "
                                      u"gallbladder stones, and alcohol use.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 38.2°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: increased bowel sounds."),
                        'ddx': 9,
                        'ddx_name': _(u"Acute Enteritis"),
                        'case_id': 'G88260OMG44HG0',
                        'ailment': 'none n',
                        'gender': 'female',
                    },
                    {
                        'vignette': _(u"HISTORY: A 51 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as gradual in onset, mild in nature, colicky and "
                                      u"intermittent, not worsening over time, and ongoing for approximately 30 hours "
                                      u"prior to presentation. The location is described as non-specific. He "
                                      u"describes the following associated findings: nausea and vomiting, diarrhea, "
                                      u"feeling feverish, and exposure to others with nausea and vomiting. The "
                                      u"patient's past medical history is positive for the following: ongoing use of "
                                      u"aspirin.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 38.6°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: normal bowel sounds."),
                        'ddx': 9,
                        'ddx_name': _(u"Acute Enteritis"),
                        'case_id': 'K8G260I0804H40',
                        'ailment': 'none n',
                        'gender': 'male',
                    },
                    {
                        'vignette': _(u"HISTORY: A 33 year old male presents for an evaluation of abdominal pain. He "
                                      u"describes the pain as acute in onset, mild in nature, colicky and "
                                      u"intermittent, not worsening over time, and ongoing for approximately 36 hours "
                                      u"prior to presentation. The location is described as epigastric. He describes "
                                      u"the following associated findings: nausea and vomiting, diarrhea, blood with "
                                      u"bowel movement, feeling feverish, a recent bad tasting meal, exposure to "
                                      u"others with vomiting and diarrhea, and heartburn. The patient's past medical "
                                      u"history is unremarkable.") + "\n\n" +
                                    _(u"PHYSICAL EXAMINATION: General Appearance is grossly unremarkable. VITAL SIGNS "
                                      u"are remarkable for the following: temperature 37.8°C. THORAX and LUNGS are "
                                      u"unremarkable. ABDOMINAL EXAM/INSPECTION is unremarkable. ABDOMINAL "
                                      u"AUSCULTATION reveals: increased bowel sounds."),
                        'ddx': 9,
                        'ddx_name': _(u"Acute Enteritis"),
                        'case_id': 'c8W06WN0G04HG0',
                        'ailment': 'none n',
                        'gender': 'male',
                    },
                ],
            ],
        }

        self.last_case = None
        self.last_case_index = None

    def get_random_case_by_space(self, space):
        ddx_list = self.cases.get(space, [])

        if len(ddx_list) > 0:
            ddx_index = random.randint(0, len(ddx_list) - 1)
            case_list = ddx_list[ddx_index]
        else:
            return {'vignette': '', 'ddx': 0, 'case_id': '', 'ailment': 'none n'}

        if len(case_list) > 0:
            case_index = random.randint(0, len(case_list) - 1)
            try:
                case_block = case_list[case_index]
            except:
                case_block = {'vignette': '', 'ddx': '', }
        else:
            case_block = {'vignette': '', 'ddx': '', }
        return case_block

    def get_case_block(self, space, ailment, case_index=None):
        case_list = self.cases.get(ailment, [])
        if case_index is None and case_list:
            case_index = random.randint(0, len(case_list) - 1)
            try:
                case_block = case_list[case_index]
            except:
                case_block = {'vignette': '', 'ddx': '', 'ailment': '', 'space': 0, 'case': '', 'gender': ''}
        else:
            case_block = {'vignette': '', 'ddx': '', 'ailment': '', 'space': 0, 'case': '', 'gender': ''}
        return case_block


class CaseTextBuffer(Gtk.TextBuffer):
    def __init__(self):
        Gtk.TextBuffer.__init__(self)
        #apply text sizer here
        s_size = Gdk.screen_width() * Gdk.screen_height()
        if s_size < 1327104:
            font_s = font_size(s_size, f_size=16)
        else:
            font_s = 16

        self.case_tag = self.create_tag(size_points=font_s)
        start_iter = self.get_start_iter()
        end_iter = self.get_end_iter()
        self.apply_tag(self.case_tag, start_iter, end_iter)

    def new_case(self, text):
        self.set_text(text)
        start_iter = self.get_start_iter()
        end_iter = self.get_end_iter()
        self.apply_tag(self.case_tag, start_iter, end_iter)
