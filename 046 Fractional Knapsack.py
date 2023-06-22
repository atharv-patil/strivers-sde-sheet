from os import *
from sys import *
from collections import *
from math import *
from heapq import *
def maximumValue(items, n, W):

	# Write your code here.
	# ITEMS contains [weight, value] pairs.
	hq = []
	for i in range(n):
		heappush(hq,(-items[i][1]/items[i][0],items[i][0]))
	ans = 0
	while W and hq:
		pts,cnt = heappop(hq)
		allowed = min(W,cnt)
		W-=allowed
		ans-=allowed*pts
	return ans
