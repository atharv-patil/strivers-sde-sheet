from os import *
from sys import *
from collections import *
from math import *

def countDistinctElements(arr, k):
    
    ans = 1
    l = []
    d = {}
    for i in range(len(arr)):
        if arr[i] not in d:
            d[arr[i]]=1
        else:
            d[arr[i]]+=1

        if i>=k:
            d[arr[i-k]]-=1
            if d[arr[i-k]]==0:
                d.pop(arr[i-k])
            l.append(len(d))
        if i==k-1:
            l.append(len(d))

    return l
