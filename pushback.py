#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

import time, logging

from gi.repository import GObject
GObject.threads_init

import questmaster
import sim_constants


class PushbackController:
    def __init__(self, state_watcher, pressurepoints, ailments, pushback_callback):
        self.pressurepoints = pressurepoints
        self.ailments = ailments
        self.pushback_callback = pushback_callback


        self.time_of_last_pushback = time.time()
        
        self.questmaster = questmaster.QuestMaster()
        self.pushback_quests = sim_constants.pushback_quests
        state_watcher.connect('state-change', self.OnStateChange)
        
    def OnStateChange(self, object, state):
        pressurelist = self.pressurepoints.get_pressure_list()
        ailment = 0
        # Check for task completion
        self.questmaster.update_quest(pressurelist, ailment)
        if self.pushback_case:
            task = self.questmaster.current_quest.any_task_just_completed
            if task:
                self.request_pushback(self.questmaster.current_quest, task)
    
    def new_case(self, case):
        ailment, pushback_string = case.split()
        pushback_case = 'p' in pushback_string
        self.pushback_case = pushback_case
        
        if pushback_case:
            if ailment in sim_constants.pushback_quests:
                logging.debug("setting up pushback quest for " + ailment)
                self.questmaster.begin_new_quest(sim_constants.pushback_quests[ailment], True)
        else:
            logging.debug("no pushback for case " + case + ", disabling pushback")
            self.questmaster.end_quest()
        
    def request_pushback(self, quest, task_completed):
        # only pushback every half-second
        if time.time() - self.time_of_last_pushback > 2:
            self.time_of_last_pushback = time.time()
            self.pushback_callback()
