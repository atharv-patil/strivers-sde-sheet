from os import *
from sys import *
from collections import *
from math import *

def maximumProduct(nums, n):
    l = []
    l_neg = -1
    t_last = -1
    
    ans = float('-inf')
    p = 1
    for i in range(n):
        p *= nums[i]
        l.append(p)
        ans = max(ans,p)
        if p == 0:
            l_neg = -1
            t_last = -1
            p = 1
        elif p < 0:

            t_last = i
                
            if l_neg != -1:
                ans = max(ans,p//l[l_neg])
                
            if l_neg==-1:
                l_neg = t_last
        else:

            ans = max(ans,p)
    return ans
                
