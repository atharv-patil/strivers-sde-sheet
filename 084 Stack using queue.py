from os import *
from sys import *
from collections import *
from math import *

from sys import stdin, setrecursionlimit
setrecursionlimit(10**7)

class Stack:
    def __init__(self):
        self.l = deque()

    def getSize(self):
        return len(self.l)

    def isEmpty(self):
        if len(self.l)==0:
            return "true"
        else:
            return "false"

    def push(self,ele):
        self.l.append(ele)

    def pop(self):
        temp = deque()
        ans = -1
        while self.l:
            if len(self.l)==1:
                ans = self.l.popleft()
            else:
                temp.append(self.l.popleft())
        while temp:
            self.l.append(temp.popleft())
        return ans

    def top(self):
        temp = deque()
        ans = -1
        while self.l:
            if len(self.l)==1:
                ans = self.l.popleft()
                temp.append(ans)
            else:
                temp.append(self.l.popleft())
        while temp:
            self.l.append(temp.popleft())
        return ans






def takeInput():
    values = list(map(int,stdin.readline().strip().split(" ")))
    return values




#  main
st = Stack()
queries = int(input().strip())
for _ in range(queries):
    values = takeInput()
    if values[0] == 1:
        st.push(values[1])
    elif values[0] == 2:
        print(st.pop())
    elif values[0] == 3:
        print(st.top())
    elif values[0] == 4:
        print(st.getSize())
    else:
        print(st.isEmpty().lower())
