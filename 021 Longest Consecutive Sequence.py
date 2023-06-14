from math import *
from collections import *
from sys import *
from os import *

def lengthOfLongestConsecutiveSequence(arr, n):
    s = set(arr)

    ans = 0
    for i in s:

        if i+1 in s:
            continue
        else:

            j = i
            cnt = 0
            while j in s:
                cnt+=1
                j-=1
            ans = max(ans,cnt)
    return ans
