#!/usr/bin/env python
# vim: set fileencoding=utf-8 :
"""
Observer allows objects to alert other objects to changes.
"""
import donottouch


class Observer(object):
    def __init__(self):
        self._handlers = []

    def connect(self, handler):
        self._handlers.append(handler)

    def connect_first(self, handler):
        self._handlers.insert(0, handler)

    def alert(self, *args):
        for handler in self._handlers:
            handler(*args)

    def disconnect(self, handler):
        while handler in self._handlers:
            self._handlers.remove(handler)
