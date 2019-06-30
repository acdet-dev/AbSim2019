#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

ailment_locations = {
    'appendix': [48, 49, 60, 61, 72, 73],
    'colon': [4, 5, 6, 7, 16, 17, 18, 19],
    'gallbladder': [114, 115, 126, 127],
    'ugi': [130, 131, 142, 143],
    'ovary_left': [2, 3, 14, 15],
    'ovary_right': [24, 25, 26, 36, 37, 38],
    'pancreas': [105, 106, 116, 117, 118, 129, 128],
    'bladder': [0, 1, 2, 12, 13, 14],
    'hepatomegaly': [
        113, 114, 115, 116, 117, 118,
        123, 124, 125, 126, 127, 128, 129, 130,
        135, 136, 137, 138, 139, 140, 141, 142],
    'splenomegaly': [
        46, 47, 58, 59, 69, 70, 71,
        81, 82, 83, 94, 95, 106, 107, 119],
    'enlarged_bladder': [
        0, 1, 2, 3, 12, 13, 14, 15, 24, 25, 26, 36, 37],
}

generic_sound_quests = {
    'none': {
        'description': 'no ailment active',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'none t',
        'tasks': [
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard',  # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    
    'hepatomegaly': {
        'description': 'generic hepatomegaly',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'hepatomegaly t',
        'tasks': [
            {
                'description':      'Main coverage of the hepatomegaly zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down',  # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'hepatomegaly curtilage',
                'type':             'any',
                'data_indexes':     [],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'too hard in hepatomegaly zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard',  # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard',  # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    
    'splenomegaly': {
        'description': 'generic splenomegaly',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'splenomegaly t',
        'tasks': [
            {
                'description':      'Main coverage of the splenomegaly zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down', # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'splenomegaly curtilage',
                'type':             'any',
                'data_indexes':     [],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'way too hard in splenomegaly zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    
    'enlarged_bladder': {
        'description': 'generic enlarged_bladder',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'enlarged_bladder t',
        'tasks': [
            {
                'description':      'Main coverage of the enlarged_bladder zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [0, 1, 2, 3, 12, 13, 14, 15, 24, 25, 26, 36, 37],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down', # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'enlarged_bladder curtilage',
                'type':             'any',
                'data_indexes':     [4, 16, 27, 38, 48, 49],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'way too hard in enlarged_bladder zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [0, 1, 2, 3, 12, 13, 14, 15, 24, 25, 26, 36, 37],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    
    'appendix': {
        'description': 'generic appendix',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'appendix t',
        'tasks': [
            {
                'description':      'Main coverage of the appendix zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [48, 49, 60, 61, 72, 73],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down', # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'Appendix curtilage',
                'type':             'any',
                'data_indexes':     [36, 37, 50, 62, 74, 84, 85],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'way too hard in appendix zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [48, 49, 60, 61, 72, 73],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'colon': {
        'description': 'generic colon',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'colon t',
        'tasks': [
            {
                'description':      'Main coverage of the colon',
                'type':             'any',
                'data_indexes':     [4, 5, 6, 7, 16, 17, 18, 19],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'Colon curtilage',
                'type':             'any',
                'data_indexes':     [3, 8, 15, 20, 28, 29, 30],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'Way too hard in colon zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [4, 5, 6, 7, 16, 17, 18, 19],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'gallbladder': {
        'description': 'generic gallbladder',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'gallbladder t',
        'tasks': [
            {
                'description':      'Main coverage of the gallbladder',
                'type':             'any',
                'data_indexes':     [114, 115, 126, 127],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'gallbladder curtilage',
                'type':             'any',
                'data_indexes':     [113, 116, 125, 128, 138, 139],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'Way too hard in gallbladder zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [114, 115, 126, 127],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'ugi': {
        'description': 'generic ugi',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'ugi t',
        'tasks': [
            {
                'description':      'Main coverage of the ugi',
                'type':             'any',
                'data_indexes':     [130, 131, 142, 143],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'ugi curtilage',
                'type':             'any',
                'data_indexes':     [117, 118, 119, 129, 141],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'Way too hard in ugi zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [130, 131, 142, 143],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'ovary_left': {
        'description': 'generic ovary_left',
        'completion_text': 'generic completion',
        'female_voice_required': True,
        'case': 'ovary_left t',
        'tasks': [
            {
                'description':      'Main coverage of the ovary_left',
                'type':             'any',
                'data_indexes':     [2, 3, 14, 15],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'ovary_left curtilage',
                'type':             'any',
                'data_indexes':     [1, 4, 13, 16, 25, 26, 27, 28],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'Way too hard in ovary_left zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [2, 3, 14, 15],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'ovary_right': {
        'description': 'generic ovary_right',
        'completion_text': 'generic completion',
        'female_voice_required': True,
        'case': 'ovary_right t',
        'tasks': [
            {
                'description':      'Main coverage of the ovary_right',
                'type':             'any',
                'data_indexes':     [24, 25, 26, 36, 37, 38],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'ovary_right curtilage',
                'type':             'any',
                'data_indexes':     [12, 13, 26, 38, 48, 49],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'Way too hard in ovary_right zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [24, 25, 26, 36, 37, 38],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'pancreas': {
        'description': 'generic pancreas',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'pancreas t',
        'tasks': [
            {
                'description':      'Main coverage of the pancreas',
                'type':             'any',
                'data_indexes':     [105, 106, 116, 117, 118, 129, 128],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'pancreas curtilage',
                'type':             'any',
                'data_indexes':     [93, 94, 95, 104, 107, 115, 119, 127, 130, 131, 140, 141, 142, 143],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'Way too hard in pancreas zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [105, 106, 116, 117, 118, 129, 128],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'bladder': {
        'description': 'generic bladder',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'bladder t',
        'tasks': [
            {
                'description':      'Main coverage of the bladder',
                'type':             'any',
                'data_indexes':     [0, 1, 2, 12, 13, 14],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
            {
                'description':      'bladder curtilage',
                'type':             'any',
                'data_indexes':     [3, 15, 24, 25, 26],
                'required_value':   'down',
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan'],
            },
            {
                'description':      'Way too hard in bladder zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [0, 1, 2, 12, 13, 14],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['severe'],
                'allowed_cry_types': ['groan', 'wail'],
            },
            {
                'description':      'yelp when pressed too hard anywhere on the pad',
                'type':             'any', # Can be any or all
                'data_indexes':     range(0, 144),
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'too_hard', # Any valid data type of the requested data above
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
}

rebound_tasks = {
    'appendix': {
                'description':      'rebound tenderness opposite appendix',
                'type':             'rebound',
                'data_indexes':     [4, 5, 6, 7],
                'required_value':   True,
                'severity':         ['mild', 'moderate'],
                'allowed_cry_types': ['groan', 'wail'],
            },
}


pushback_quests = {
    'none': {
        'description': 'no ailment active',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'none t',
        'tasks': [
        ],
    },
    
    'hepatomegaly': {
        'description': 'generic hepatomegaly',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'hepatomegaly t',
        'tasks': [
            {
                'description':      'Main coverage of the hepatomegaly zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [113, 114, 115, 116, 117, 118, 
                                        123, 124, 125, 126, 127, 128, 129, 130,
                                        135, 136, 137, 138, 139, 140, 141, 142],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down', # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    
    'splenomegaly': {
        'description': 'generic splenomegaly',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'splenomegaly t',
        'tasks': [
            {
                'description':      'Main coverage of the splenomegaly zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [46, 47, 58, 59, 69, 70, 71, 81, 82, 83, 94, 95, 106, 107, 119],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down', # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    
    'enlarged_bladder': {
        'description': 'generic enlarged_bladder',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'enlarged_bladder t',
        'tasks': [
            {
                'description':      'Main coverage of the enlarged_bladder zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [0, 1, 2, 3, 12, 13, 14, 15, 24, 25, 26, 36, 37],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down', # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    
    'appendix': {
        'description': 'generic appendix',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'appendix t',
        'tasks': [
            {
                'description':      'Main coverage of the appendix zone',
                'type':             'any', # Can be any or all
                'data_indexes':     [48, 49, 60, 61, 72, 73],
                                    # indexes 0-143 are points on the pressure pad
                                    # index 144 is the distance measurement on the ailment
                'required_value':   'down', # Any valid data type of the requested data above
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'colon': {
        'description': 'generic colon',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'colon t',
        'tasks': [
            {
                'description':      'Main coverage of the colon',
                'type':             'any',
                'data_indexes':     [4, 5, 6, 7, 16, 17, 18, 19],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'gallbladder': {
        'description': 'generic gallbladder',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'gallbladder t',
        'tasks': [
            {
                'description':      'Main coverage of the gallbladder',
                'type':             'any',
                'data_indexes':     [114, 115, 126, 127],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'ugi': {
        'description': 'generic ugi',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'ugi t',
        'tasks': [
            {
                'description':      'Main coverage of the ugi',
                'type':             'any',
                'data_indexes':     [130, 131, 142, 143],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'ovary_left': {
        'description': 'generic ovary_left',
        'completion_text': 'generic completion',
        'female_voice_required': True,
        'case': 'ovary_left t',
        'tasks': [
            {
                'description':      'Main coverage of the ovary_left',
                'type':             'any',
                'data_indexes':     [2, 3, 14, 15],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'ovary_right': {
        'description': 'generic ovary_right',
        'completion_text': 'generic completion',
        'female_voice_required': True,
        'case': 'ovary_right t',
        'tasks': [
            {
                'description':      'Main coverage of the ovary_right',
                'type':             'any',
                'data_indexes':     [24, 25, 26, 36, 37, 38],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'pancreas': {
        'description': 'generic pancreas',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'pancreas t',
        'tasks': [
            {
                'description':      'Main coverage of the pancreas',
                'type':             'any',
                'data_indexes':     [105, 106, 116, 117, 118, 129, 128],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            },
        ],
    },
    'bladder': {
        'description': 'generic bladder',
        'completion_text': 'generic completion',
        'female_voice_required': False,
        'case': 'bladder t',
        'tasks': [
            {
                'description':      'Main coverage of the bladder',
                'type':             'any',
                'data_indexes':     [0, 1, 2, 12, 13, 14],
                'required_value':   'down',
                'severity':         ['moderate'],
                'allowed_cry_types': ['gasp', 'groan', 'wail'],
            }
        ],
    },
}