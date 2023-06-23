from os import *
from sys import *
from collections import *
from math import *

denominations = [1, 2, 5, 10, 20, 50, 100, 500, 1000]


def findMinimumCoins(amount):
	ans = 0
	for i in denominations[::-1]:
		ans+=amount//i
		amount%=i
	return ans
