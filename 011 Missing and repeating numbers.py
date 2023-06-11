from math import *
from collections import *
from sys import *
from os import *

def missingAndRepeating(arr, n):
    arr.sort()
    l = []
    i = 0
    cnt = 1
    for i in arr:
        if i==cnt:
            cnt+=1
        elif i<cnt:
            pass
        else:
            l.append(cnt)
            break
    else:
        l.append(cnt)

    for i in range(n):
        if i and arr[i]==arr[i-1]:
            l.append(arr[i])
            break
    return l
