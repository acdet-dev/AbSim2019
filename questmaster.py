#!/usr/bin/env python
# vim: set fileencoding=utf-8 :

class QuestMaster:
    """This class holds the text that will create Quests. Eventually it'll get them from data files, but I am too
    busy. """
    def __init__(self, quest_data_list=[]):
        
        # quest data format
        '''
            {
                'name': '',
                'id': '',
                'case': '',
                'description': '',
                'completion_text': '',
                'tasks': [
                    {
                        'description':      '',
                        'type':             'any', # Can be any or all
                        'data_source:       'pressure', #Can be ailment or pressure
                        'data_indexes':     [200, 201, 215, 216],
                        'required_value':   'down', # Any valid data type of the requested data above
                    },
                ],
            },
        '''
        # print quest_data_list
        self.quests = {n['id']: Quest(n) for n in quest_data_list}
        
    def begin_quest(self, quest_id):
        self.current_quest = self.quests[quest_id]
        
    def begin_new_quest(self, quest_data, repeatable=False):
        # quest data format
        '''
            {
                'name': '',
                'id': '',
                'case': '',
                'description': '',
                'completion_text': '',
                'tasks': [
                    {
                        'description':      '',
                        'type':             'any', # Can be any or all
                        'data_source:       'pressure', #Can be ailment or pressure
                        'data_indexes':     [200, 201, 215],
                                            # indexes 0-215 are points on the pressure pad
                        'required_value':   'down', # Any valid data type of the requested data above
                    },
                ],
            },
        '''
        # print quest_data
        self.current_quest = Quest(quest_data, repeatable)
        
    def end_quest(self):
        self.current_quest = None
        
    def update_quest(self, pressure, ailment):
        if hasattr(self, 'current_quest'):
            self.current_quest.new_data(pressure, ailment)
    
    def quest_list(self):
        return self.quest_data_list
    
        
class Quest:
    def __init__(self, quest_data, repeatable=False):
        # Listen to ailment state changes and pressure state changes
        self._tasks = []

        # print quest_data
        self.description = quest_data['description']
        self.completion_text = quest_data['completion_text']
        self.case = quest_data['case']
        task_data = quest_data['tasks']
        self.repeatable = repeatable

        
        self._tasks = [Task(t, repeatable)for t in task_data]
        
    def new_data(self, new_data, ailment):
        checked_tasks_complete = True
        self.any_task_just_completed = False
        # print "quest new_data"
        for task in self._tasks:
            # print task.description
            task.new_data(new_data, ailment)
            if task.complete:
                self.any_task_just_completed = task
            if checked_tasks_complete and not task.complete:
                checked_tasks_complete = False
        
        self.complete = checked_tasks_complete
        if self.complete and not self.repeatable:
            # print "Quest complete!"
            pass
        
        
class Task:
    def __init__(self, task_data, repeatable=False):
        self.description = task_data['description']
        self._required_value = task_data['required_value']
        self._data_indexes = task_data['data_indexes']
        self.type = task_data['type']
        self.complete = False
        
        self.repeatable = repeatable
        if(repeatable):
            self.severity = task_data['severity']
            self.allowed_cry_types = task_data['allowed_cry_types']
    
    def new_data(self, data_set, ailment):
        # print 'task new_data"
        if self.repeatable or not self.complete:
            if self.repeatable:
                self.complete = False
            if(self.type is 'any'):
                # print "type any"
                for i in self._data_indexes:
                    if data_set[i].get_state() is self._required_value:
                        self.complete = True
                        # print "task complete: ", self.description
                        return
            elif(self.type is 'all'):
                self.complete = True
                for i in self._data_indexes:
                    if data_set[i].get_state() is not self._required_value:
                        self.complete = False
                        return
            elif(self.type is 'rebound'):
                for i in self._data_indexes:
                    if data_set[i].rebound:
                        self.complete = True
                        data_set[i].rebound = False
                        # print "rebound task complete! index ", i
                        return
