
# Binary tree node class for reference
class BinaryTreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def diameterOfBinaryTree(root):
	
    if not root:
        return 0
    
    ans = 0
    def f(root):
        nonlocal ans
        cnt = 0
        l = r = 0
        if root.left:
            l = 1+f(root.left)
        if root.right:
            r = 1+f(root.right)
        ans = max(ans,l+r)
        return max(l,r)
    
    l = r = 0
    if root.left:
        l = f(root.left)+1
    if root.right:
        r = f(root.right)+1
    return max(ans,l+r)
