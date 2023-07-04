from os import *
from sys import *
from collections import *
from math import *

class Queue :

    def __init__(self):
        self.l = deque()




    '''----------------- Public Functions of Queue -----------------'''

   
    def isEmpty(self) :
        return len(self.l)==0



    def enqueue(self, data) :
        self.l.append(data)


    def dequeue(self) :
        if not self.l:
            return -1
        else:
            return self.l.popleft()


    def front(self) :
        if not self.l:
            return -1
        return self.l[0]
