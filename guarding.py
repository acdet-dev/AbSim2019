#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

"""
Guarding models the guarding balloons
"""


class Guarding:
    def __init__(self):
        self.guarding_locations = [
            'none', 'hepatomegaly', 'splenomegaly',
            'enlarged_bladder', 'ruq', 'luq', 'rlq', 'llq']
        self._active_location = 'none'
        
        self.ailment_locations = {
            'none': 'none',
            'hepatomegaly': 'hepatomegaly',
            'splenomegaly': 'splenomegaly',
            'enlarged_bladder': 'enlarged_bladder',
            'appendix': 'rlq',
            'colon': 'llq',
            'gallbladder': 'ruq',
            'ugi': 'none',
            'ovary_left': 'llq',
            'ovary_right': 'rlq',
            'pancreas': 'none',
        }
        
        self.megalys = {
            'hepatomegaly': 'hepatomegaly',
            'splenomegaly': 'splenomegaly',
            'enlarged_bladder': 'enlarged_bladder',
        }

    def get_active_location(self):
        return str(self._active_location)
    
    def set_active_location(self, new_ailment):
        new_location = self.ailment_locations[new_ailment]
        if(new_location in set(self.guarding_locations)):
            self._active_location = new_location
            return self._active_location
        else:
            raise Exception(new_location)
            
    def new_case_selected(self, new_case):
        case_words = new_case.split(' ')
        if 'g' in case_words[1] or case_words[0] in self.megalys:
            self.set_active_location(case_words[0])
        else:
            self.set_active_location('none')
