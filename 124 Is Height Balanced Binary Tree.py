from os import *
from sys import *
from collections import *
from math import *

'''
  ----Binary tree node class for reference-----
    class BinaryTreeNode:
        def __init__(self, data):
            self.data = data
            self.left = None
            self.right = None

'''


def isBalancedBT(root):

    if not root:
      return 1
    flag = 1
    def f(root):
      nonlocal flag
      if not root:
        return 0
      l = 1+f(root.left)
      r = 1+f(root.right)
      # print(root.data,l,r)
      if abs(l-r)>1:
        flag = 0
      return max(l,r)
    f(root)
    if not flag:
      return "False"
    else:
      return "True"
