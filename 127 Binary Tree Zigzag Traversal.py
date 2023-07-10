from os import *
from sys import *
from collections import *
from math import *

# BinaryTreeNode class definition
# class BinaryTreeNode:
#     def __init__(self, data):
#         self.data = data
#         self.left = None
#         self.right = None
#

def zigZagTraversal(root):
    def sol(root,ans):
        if root==None:
            return []
        stack=[]
        queue=[]
        queue.append(root)
        lefttoright=True
        while queue:
            for i in range(len(queue)):
                temp=queue[0]
                queue.pop(0)
                if lefttoright:
                    ans.append(temp.data)
                else:
                    stack.append(temp)
                if temp.left:
                    queue.append(temp.left)

                if temp.right:
                    queue.append(temp.right)

            if lefttoright==False:
                while len(stack):
                    ans.append(stack.pop().data)
            lefttoright=not lefttoright
    ans=[]
    sol(root,ans)
    return ans
