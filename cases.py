#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

"""
Cases tracks all of the case details
"""

import random
import casetext

from i18ntrans2 import _


  
class Cases:
    def __init__(self):
        self.command_list = {
            'none': self.none,
            'hepatomegaly': self.hepatomegaly,
            'splenomegaly': self.splenomegaly,
            'enlarged_bladder': self.enlarged_bladder,
            'appendix': self.appendix,
            'gallbladder': self.gallbladder,
            'ovary_right': self.ovary_right,
            'ovary_left': self.ovary_left,
            'ugi': self.ugi,
            'bladder': self.bladder,
            'colon': self.colon,
            'pancreas': self.pancreas
        }
        
        self.pretty_ailment_names = {
            'none n': _(u"No Abnormalities"),
            'appendix t': _(u"Appendix Tenderness"),
            'appendix g': _(u"Appendix Tenderness with Guarding"),
            'appendix r': _(u"Appendix Tenderness with Rebound Tenderness"),
            'appendix gr': _(u"Appendix Tenderness with Guarding and Rebound Tenderness"),
            'colon t': _(u"Colon, Left Lower Tenderness"),
            'colon g': _(u"Colon, Left Lower Tenderness with Guarding"),
            'gallbladder t': _(u"Gallbladder Tenderness"),
            'gallbladder g': _(u"Gallbladder Tenderness with Guarding"),
            'ugi t': _(u"Gastric Tenderness"),
            'ovary_left t': _(u"Ovary, Left Tenderness"),
            'ovary_left g': _(u"Ovary, Left Tenderness with Guarding"),
            'ovary_right t': _(u"Ovary, Right Tenderness"),
            'ovary_right g': _(u"Ovary, Right Tenderness with Guarding"),
            'pancreas t': _(u"Pancreas Tenderness"),
            'bladder t': _(u"Urinary Bladder Tenderness"),
            'hepatomegaly n': _(u"Hepatomegaly"),
            'splenomegaly n': _(u"Splenomegaly"),
            'enlarged_bladder n': _(u"Enlarged Urinary Bladder"),
        }
        
        self.case_text = casetext.CaseText()
        
        self.case_list = [
            'none n', 'hepatomegaly n', 'splenomegaly n', 'enlarged_bladder n',
            'appendix t', 'appendix g', 'appendix r', 'appendix gr', 'bladder t',
            'colon t', 'colon g', 'gallbladder t', 'gallbladder g',
            'ugi t', 'ovary_left t', 'ovary_left g',
            'ovary_right t', 'ovary_right g', 'pancreas t']
            
    def get_random_case(self, with_vignette=False):
        if with_vignette:
            case = random.sample(self.case_text.cases, 1)
            return case[0]
        else:
            case_index = random.randint(0, len(self.case_list) - 1)
            return self.case_list[case_index]

    def get_random_other_organ_case(self, current_case):
        current_organ = current_case.split()[0]
        while current_organ in current_case:
            current_case = self.get_random_case()
        return current_case
    
    def get_case_commands(self, case):
        guarding = False
        pushback = False
        ailment = case.split(' ')[0]
        bladder_command = case.split(' ')[1]
        if(bladder_command in ['g', 'gp', 'gr']):
            guarding = True
        if(bladder_command in ['p', 'gp']):
            pushback = True
            
        command_list = self.command_list[ailment](guarding)
        command_list['pushback'] = pushback
        command_list['ailment'] = ailment
        
        return command_list
        
    def none(self, guarding=False, pushback=False):
        return {
            'cnc_commands': ['none'],
            'bladder_commands': ['clear']
        }
    
    def hepatomegaly(self, guarding=False, pushback=False):
        return {
            'cnc_commands': ['hepatomegaly'],
            'bladder_commands': ['clear', 'hepatomegaly']
        }
    
    def splenomegaly(self, guarding=False, pushback=False):
        return {
            'cnc_commands': ['splenomegaly'],
            'bladder_commands': ['clear', 'splenomegaly']
        }
        
    def enlarged_bladder(self, guarding=False, pushback=False):
        return {
            'cnc_commands': ['enlarged_bladder'],
            'bladder_commands': ['clear', 'enlarged_bladder']
        }
        
    def appendix(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['appendix']
        if (guarding):
            if (pushback):
                commands['bladder_commands'] = ['clear', 'RLQ']
            else:
                commands['bladder_commands'] = ['clear', 'RLQ']
        else:
            commands['bladder_commands'] = ['clear']
        return commands
        
    def gallbladder(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['gallbladder']
        if (guarding):
            if (pushback):
                commands['bladder_commands'] = ['clear', 'RUQ']
            else:
                commands['bladder_commands'] = ['clear', 'RUQ']
        else:
            commands['bladder_commands'] = ['clear']
        return commands
        
    def ovary_right(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['ovary_right']
        if (guarding):
            if (pushback):
                commands['bladder_commands'] = ['clear', 'RLQ']
            else:
                commands['bladder_commands'] = ['clear', 'RLQ']
        else:
            commands['bladder_commands'] = ['clear']
        return commands
        
    def ovary_left(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['ovary_left']
        if (guarding):
            if (pushback):
                commands['bladder_commands'] = ['clear', 'LLQ']
            else:
                commands['bladder_commands'] = ['clear', 'LLQ']
        else:
            commands['bladder_commands'] = ['clear']
        return commands
        
    def ugi(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['ugi']
        if (pushback):
                commands['bladder_commands'] = ['clear', 'UGI']
        else:
            commands['bladder_commands'] = ['clear']
        return commands
        
    def bladder(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['bladder']
        if (pushback):
            commands['bladder_commands'] = ['clear', 'enlarged_bladder']
        else:
            commands['bladder_commands'] = ['clear']
        return commands
        
    def colon(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['colon']
        if (guarding):
            if (pushback):
                commands['bladder_commands'] = ['clear', 'LLQ']
            else:
                commands['bladder_commands'] = ['clear', 'LLQ']
        else:
            commands['bladder_commands'] = ['clear']
        return commands
        
    def pancreas(self, guarding=False, pushback=False):
        commands = dict()
        commands['cnc_commands'] = ['pancreas']
        commands['bladder_commands'] = ['clear']
        return commands
