#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

import time, logging
import winsound

from gi.repository import GObject
GObject.threads_init

import threading
import queue as Queue
import questmaster
import random
import sim_constants
import copy
from sim_constants import generic_sound_quests


class Sounds:
    def __init__(self, state_watcher, pressurepoints, ailments, touchalerter):
        self.pressurepoints = pressurepoints
        self.ailments = ailments

        self.enable_sound = False
    
        self.time_of_last_played_sound = time.time()
        self.sound_queue = Queue.Queue()
        self.sound_player = SoundPlayer(self.sound_queue)
        self.sound_player.start()
        
        self.voices_available = {
            'male': {
                'ruffin': {
                    'gasp': {
                        'mild': 6,
                        'moderate': 6,
                        'severe': 4,
                    },
                    'groan': {
                        'mild': 6,
                        'moderate': 4,
                        'severe': 4,
                    },
                    'wail': {
                        'mild': 6,
                        'moderate': 5,
                        'severe': 7,
                    },
                },
            },
            'female': {
                'jamie': {
                    'gasp': {
                        'mild': 4,
                        'moderate': 5,
                        'severe': 4,
                    },
                    'groan': {
                        'mild': 4,
                        'moderate': 4,
                        'severe': 4,
                    },
                    'wail': {
                        'moderate': 5,
                        'severe': 5,
                    },
                },
            },
        }
        
        self.questmaster = questmaster.QuestMaster()
        self.build_sound_quests()
        state_watcher.connect('state-change', self.OnStateChange)
        touchalerter.connect('emergency_stop', self.do_not_palpate)
        
    def OnStateChange(self, object, state):
        if self.enable_sound:
            pressurelist = self.pressurepoints.get_pressure_list()
            ailment = 0
            # Check for task completion
            self.questmaster.update_quest(pressurelist, ailment)
            if hasattr(self.questmaster, 'current_quest'):
                task = self.questmaster.current_quest.any_task_just_completed

                if task:
                    self.request_sound(self.questmaster.current_quest, task)

    def check_gender(self, case):
        to_check = generic_sound_quests[case.split(' ', 1)[0]]
        if to_check['female_voice_required']:
            gender = 'female'
        else:
            gender = ''
        return gender

    def do_not_palpate(self, arg1):
        time_since_last_played_sound = time.time() - self.time_of_last_played_sound
        if time_since_last_played_sound > .1:
            self.sound_queue.queue.clear()
            self.sound_queue.put('voices/donotpalpate.wav')
            self.time_of_last_played_sound = time.time()
    
    def new_generic_case(self, case, case_block={'gender': ''}):
        if hasattr(self, 'voice'):
            del self.voice
        
        if case_block and case_block['gender'] is not '':
            self.gender = case_block['gender']

        elif case_block['gender'] is '':
            self.gender = self.check_gender(case)

            if self.gender is not '':
                self.gender = self.gender
                self.voice_name ='jamie'
                self.voice = dict(self.voices_available[self.gender][self.voice_name])

            else:
                self.gender = random.choice(list(self.voices_available.keys()))
        else:
            self.gender = random.choice(list(self.voices_available.keys()))
        
        self.voice_name = random.choice(list(self.voices_available[self.gender].keys()))
        logging.debug(self.voice_name)
        self.voice = dict(self.voices_available[self.gender][self.voice_name])

        case_parts = case.split()
        ailment = case_parts[0]
        modifier = case_parts[1]
        
        if ailment in self.generic_sound_quests:
            self.enable_sound = True
            quest = copy.deepcopy(self.generic_sound_quests[ailment])
            if 'r' in modifier:
                quest['tasks'].append(copy.deepcopy(self.rebound_tasks[ailment]))
            self.questmaster.begin_new_quest(quest, True)
        else:
            logging.debug('Not enabling sound. No meaningful case selected.')

    def request_sound(self, quest, task_completed):
        # print "sound requested"
        # only play every three seconds, max
        # rebound is a special case that can occur more often
        time_since_last_played_sound = time.time() - self.time_of_last_played_sound
        if task_completed.type is 'rebound' and time_since_last_played_sound > 0.2 or time_since_last_played_sound > 3:
            filename = self.select_sound_file(quest, task_completed)
            self.time_of_last_played_sound = time.time()
            self.sound_queue.put(filename)
            
    def select_sound_file(self, quest, task_completed):
        if not hasattr(self, 'voice'):
            logging.debug('no voice')
            if quest.female_voice_required:
                self.gender = 'female'
            else:
                self.gender = random.choice(list(self.voices_available.keys()))
            self.voice_name = random.choice(list(self.voices_available[self.gender].keys()))
            self.voice = dict(self.voices_available[self.gender][self.voice_name])
        cry_types = list(set(task_completed.allowed_cry_types) & set(self.voice.keys()))
        cry_type_name = random.choice(cry_types)
        chosen_cry_type = self.voice[cry_type_name]

        severity = random.choice(list(set(chosen_cry_type.keys()) & set(task_completed.severity)))

        file_num = random.choice(range(1, chosen_cry_type[severity]))

        path_seq = ['voices', self.gender, self.voice_name, cry_type_name, severity, str(file_num)]
        filename = '/'.join(path_seq) + '.wav'

        return filename
            
    def build_sound_quests(self):
        self.generic_sound_quests = sim_constants.generic_sound_quests
        self.rebound_tasks = sim_constants.rebound_tasks
    
    def stop_sound_player(self):
        self.sound_player.stop()
        self.sound_player.stopped()


class SoundPlayer(threading.Thread):
    def __init__(self, sound_file_queue):
        threading.Thread.__init__(self)
        self.daemon = True
        self.sound_queue = sound_file_queue
        self._stop = threading.Event()
        
    def run(self):
        while not self.stopped():
            new_sound = 0
            try:
                new_sound = self.sound_queue.get(True, 0.01)
            except:
                pass  # no-op
            if new_sound:
                self.play_sound(new_sound)
        self.enable_sound = False
        logging.debug('disabling sounds')
        self.play_sound(None)
        winsound.SND_PURGE

    def stop(self):
        self._stop.set()
    
    def stopped(self):
        return self._stop.isSet()
        
    def play_sound(self, filename):
        winsound.PlaySound(filename, winsound.SND_FILENAME)


