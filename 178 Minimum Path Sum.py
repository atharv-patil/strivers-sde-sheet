from os import *
from sys import *
from collections import *
from math import *

import sys
sys.setrecursionlimit(10**7)

def minSumPath(grid):
    n = len(grid)
    m = len(grid[0])
    l = [[float("inf") for i in range(m)] for i in range(n)]
    l[0][0] = grid[0][0]
    for i in range(n):
        for j in range(m):
            if 0<=i+1<n:
                l[i+1][j] = min(l[i+1][j], grid[i+1][j]+l[i][j])
            if 0<=j+1<m:
                l[i][j+1] = min(grid[i][j+1]+l[i][j],l[i][j+1])
    return l[-1][-1]

# Main.
t = int(input())
while (t > 0):
    l = list(map(int, input().split()))
    n,m = l[0], l[1]
    grid = []
    for i in range(n):
        ll = list(map(int, input().split()))
        grid.append(ll)
    print(minSumPath(grid))
    t -= 1
