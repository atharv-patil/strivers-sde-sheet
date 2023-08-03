from os import *
from sys import *
from collections import *
from math import *

from sys import stdin

def nextGreater(arr,n):
    
    ans = [-1]*n
    l = []
    for i in range(n-1,-1,-1):

        while l and l[-1]<=arr[i]:
            l.pop()
        if l:
            ans[i] = l[-1]
        l.append(arr[i])
    return ans
    
    
    
    
    
    
    
    
    
    
    
    
    



#Main

t = int(stdin.readline().rstrip())

while t>0:
    
    n=int(stdin.readline().rstrip())
    arr = list(map(int, stdin.readline().rstrip().split(" ")))
    z=(nextGreater(arr,n))
    for i in z:
        print(i,end=" ")
    print()
    
    t -= 1
