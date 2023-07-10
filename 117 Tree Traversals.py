from os import *
from sys import *
from collections import *
from math import *

# Following is the Binary Tree node structure:
class BinaryTreeNode :
    def __init__(self, data) :
        self.data = data
        self.left = None
        self.right = None

def getTreeTraversal(root):
    
    if not root:
        return []
    ans = [[],[],[]]

    def f(root):
        nonlocal ans
        ans[1].append(root.data)

        if root.left:
            f(root.left)
        ans[0].append(root.data)

        if root.right:
            f(root.right)
        
        ans[2].append(root.data)
    f(root)
    return ans
        
