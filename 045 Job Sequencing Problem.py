from os import *
from sys import *
from collections import *
from math import *
from heapq import *

def jobScheduling(jobs):    
    l = []
    mx = 0
    for j,k in  jobs:
        mx = max(mx,j)
        heappush(l,(-j,-k))
    
    time = mx
    profit = 0
    hq = []
    
    while time:
        
        while l:
            a,b = heappop(l)
            if -a < time:
                heappush(l,(a,b))
                break
            else:
                heappush(hq,(b,a))
                
        if hq:
            a,b = heappop(hq)
            profit-=a
        time-=1
    return profit
        
