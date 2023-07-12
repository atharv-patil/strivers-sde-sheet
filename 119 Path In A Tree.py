from os import *
from sys import *
from collections import *
from math import *

from typing import List


class TreeNode:   
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def pathInATree(root: TreeNode, x: int) -> List[int]:
    if not root:
        return []

    def f(root):
        
        if root.data==x:
            return [x]

        if root.left:
            k = f(root.left)
            if k:
                return [root.data]+k
        if root.right:
            k = f(root.right)
            if k:
                return [root.data]+k
        
        return []
    return f(root)

        

