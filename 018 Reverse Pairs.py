from os import *
from sys import *
from collections import *
from math import *
from bisect import *

ans = 0


def mergeSort(a):
    global ans
    if len(a) == 1:
        return a
    elif len(a) == 2:
        if a[0] > 2 * a[1]:
            ans += 1
        if a[0] > a[1]:
            return [a[1], a[0]]
        else:
            return [a[0], a[1]]
    else:
        left = mergeSort(a[:len(a) // 2])
        right = mergeSort(a[len(a) // 2:])

        i = 0
        while i < len(left):
            ans += bisect_left(right,left[i]/2)
            i += 1

        new = []
        while left and right:
            if right[-1] > left[-1]:
                new.append(right.pop())
            else:
                new.append(left.pop())
        while left:
            new.append(left.pop())
        while right:
            new.append(right.pop())

        return new[::-1]


def reversePairs(arr, n):
    global ans
    ans = 0
    mergeSort(arr)
    return ans
