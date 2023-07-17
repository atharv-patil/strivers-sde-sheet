from os import *
from sys import *
from collections import *
from math import *

# Following is the Binary Tree Node class structure
class BinaryTreeNode:
    
    def __init__(self, data):
        
        self.data = data
        self.left = None
        self.right = None
              
        
def identicalTrees(root1, root2):
    
    if not root1 and not root2:
        return "True"
    if not root1 or not root2:
        return "False"
    
    def f(root1,root2):

        if not root1 and not root2:
            return 1
        if not root1 or not root2:
            return 0

        flag = 1
        flag &= root1.data==root2.data
        flag &= f(root1.left,root2.left)
        flag &= f(root1.right,root2.right)

        return flag
    if f(root1,root2):
        return "True"
    return "False"


    
