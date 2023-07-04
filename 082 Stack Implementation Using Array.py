from os import *
from sys import *
from collections import *
from math import *

# Stack class.
class Stack:
    
    def __init__(self, capacity: int):
        self.l = []
        self.n = capacity

    def push(self, num: int) -> None:
        if len(self.l)==self.n:
            return
        self.l.append(num)

    def pop(self) -> int:
        if not self.l:
            return -1
        return self.l.pop()
    
    def top(self) -> int:
        if not self.l:
            return -1
        return self.l[-1]
    
    def isEmpty(self) -> int:
        return (len(self.l)==0)+0
    
    def isFull(self) -> int:
        return (len(self.l)==self.n)+0
        
