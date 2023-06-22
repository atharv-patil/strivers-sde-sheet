from os import *
from sys import *
from collections import *
from math import *

def maximumMeetings(start, end):
    l = []
    cnt = 1
    for i,j in zip(start,end):
        l.append((j,cnt,i))
        cnt+=1
    l.sort()
    ans = []
    mx = -1
    for j,k,i in l:
        if mx<i:
            mx = j
            ans.append(k)
    return ans

    
