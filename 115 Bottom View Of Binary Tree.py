from os import *
from sys import *
from collections import *
from math import *

from sys import stdin, setrecursionlimit
import queue
import sys
from collections import OrderedDict
setrecursionlimit(10**6)


# Following is the structure used to represent the Binary Tree Node.
class BinaryTreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

	
def bottomView(root):
    

    
    if not root:
        return []
    d = defaultdict(int)
    mn = float("inf")
    mx = float("-inf")
    
    q = deque([(root,0)])
    while q:
        node,i = q.popleft()
        
        mn = min(mn,i)
        mx = max(mx,i)
        
        d[i] = node.data
        
        if node.left:
            q.append((node.left,i-1))
        if node.right:
            q.append((node.right,i+1))
    

    ans = []
    for i in range(mn,mx+1):
        ans.append(d[i])
    return ans



# Taking level-order input using fast I/O method.
def takeInput():
    levelOrder = list(map(int, stdin.readline().strip().split(" ")))
    start = 0

    length = len(levelOrder)

    if length == 1:
        return None

    root = BinaryTreeNode(levelOrder[start])
    start += 1

    q = queue.Queue()
    q.put(root)

    while not q.empty():
        currentNode = q.get()

        leftChild = levelOrder[start]
        start += 1

        if leftChild != -1:
            leftNode = BinaryTreeNode(leftChild)
            currentNode.left = leftNode
            q.put(leftNode)

        rightChild = levelOrder[start]
        start += 1

        if rightChild != -1:
            rightNode = BinaryTreeNode(rightChild)
            currentNode.right = rightNode
            q.put(rightNode)

    return root


# Main.
t = int(input())
while t:
    root = takeInput()
    answer = bottomView(root)
    print(*answer)
    t = t - 1
