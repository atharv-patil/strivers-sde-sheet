from sys import stdin
import sys 
from bisect import *
sys.setrecursionlimit(10**7)
def longestIncreasingSubsequence(arr, n) :

    l = []
    for i in arr:

        idx = bisect_left(l,i)
        if idx==len(l):
            l.append(i)
        else:
            l[idx] = i
    return len(l



#taking inpit using fast I/O
def takeInput() :
    n = int(input())

    if n==0 :
        return list(), n
        
    arr = list(map(int, stdin.readline().strip().split(" ")))

    return arr, n


#main
arr, n = takeInput()
print(longestIncreasingSubsequence(arr, n))
