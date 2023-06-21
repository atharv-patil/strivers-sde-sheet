from math import *
from collections import *
from sys import *
from os import *

class LinkedListNode:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.random = None
        

def cloneRandomList(head):
    if not head:
        return None
    new = head 

    d = defaultdict(LinkedListNode)

    while new:
        d[new] = LinkedListNode(new.data)
        new = new.next

    k = d[head]
    new1 = head
    ans = d[head]

    while new1:
        if new1.next:
            k.next = d[new1.next]
        else:
            k.next = None
            
        if new1.random:
            k.random = d[new1.random]
        else:
            k.random = None
        
        k = k.next
        new1 = new1.next
    return ans
