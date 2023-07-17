from os import *
from sys import *
from collections import *
from math import *

'''
    Following is the Binary Tree node structure:

	class BinaryTreeNode :
	    def __init__(self, data) :
	        self.data = data
	        self.left = None
	        self.right = None

'''

def searchInBST(root, x):
	
	def f(root):
		if not root:
			return 0
		if root.data==x:
			return 1
		return f(root.left)|f(root.right)
	if f(root):
		return "True"
	return "False"
