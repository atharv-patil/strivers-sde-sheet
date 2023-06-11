from os import *
from sys import *
from collections import *
from math import *

cnt = 0

def mergesort(arr):
    global cnt
    if len(arr)==1:
        return arr

    elif len(arr)==2:
        if arr[0]>arr[1]:
            cnt+=1  
            return [arr[1],arr[0]]
        else:
            return arr
    else:
        left = mergesort(arr[:len(arr)//2])[::-1]
        right = mergesort(arr[len(arr)//2:])[::-1]
        
        l = []
        while left and right:
            if left[-1]<right[-1]:
                l.append(left.pop())
            else:
                cnt+=len(left)
                l.append(right.pop())
        while left:
            l.append(left.pop())
        while right:
            l.append(right.pop())
        return l




def getInversions(arr, n) :
	mergesort(arr)
	return cnt

# Taking inpit using fast I/O.
def takeInput() :
    n = int(input())
    arr = list(map(int, stdin.readline().strip().split(" ")))
    return arr, n

# Main.
arr, n = takeInput()
print(getInversions(arr, n))
