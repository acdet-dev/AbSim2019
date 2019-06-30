#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

"""
Ailments models the selection and depth of an ailment
"""
import logging

class Ailments:
    
    def __init__(self):
    
        # Set constant values for ailment depths.
        # These likely won't need field calibration.
        self._SLIGHTLY_DOWN = 20
        self._DOWN = 100
        self._TOO_HARD = 220



        self._depth = 0
        self._state = 'up'
        self._pushback = False
        
        self._max_depth = self._depth
        
        self._ailments_array = [
            'ugi', 'gallbladder', 'bladder', 'pancreas',
            'aorta', 'colon', 'appendix', 'ovary_left', 'ovary_right',
            'none', 'hepatomegaly', 'splenomegaly', 'enlarged_bladder']
        self._active_ailment = 'none'

    def get_active_ailment(self):
        return str(self._active_ailment)
        
    def get_pushback_state(self):
        return self._pushback
    
    def set_active_ailment(self, new_ailment_string):
        new_ailment_list = new_ailment_string.split(' ')
        if(new_ailment_list[0] in set(self._ailments_array)):
            self._active_ailment = new_ailment_list[0]
            self._max_depth = 0
            self._pushback = 'p' in new_ailment_list[1]
            return self._active_ailment
        else:
            logging.debug("Invalid ailment: " + new_ailment_list[0])
            # raise InvalidAilment(new_ailment_list[0])

    def get_depth(self):
        return self._depth
    
    def state_has_changed(self, new_depth):
        self._depth = new_depth
        if new_depth > self._max_depth:
            self._max_depth = new_depth
        new_state = self._calculate_state(new_depth)
        if (new_state != self.get_state()):
            self._state = new_state
            logging.debug("Ailment " + self.get_active_ailment() + ' ' + self._state)
            return True
        else:
            return False
        
    def _calculate_state(self, new_depth):
        if(new_depth >= self._DOWN):
            if(new_depth >= self._TOO_HARD):
                return 'too_hard'
            else:
                return 'down'
        else:
            if(new_depth >= self._SLIGHTLY_DOWN):
                return 'slightly_down'
            else:
                return 'up'
                
    def get_state(self):
        return str(self._state)
        
    def get_max_state(self):
        return str(self._calculate_state(self._max_depth))
