'''

    Following is the representation for the Binary Tree Node:

    class BinaryTreeNode :
    def __init__(self, data) :
        self.data = data
        self.left = None
        self.right = None
'''

def isSymmetric(root):
    if not root:
        return True
    if not root.left and not root.right:
        return True

    def f(x, y):
        if not x and not y:
            return True

        if x and y:
            if x.data == y.data:
                return f(x.left, y.right) and f(x.right, y.left)
        
        return False

    return f(root.left, root.right)
        
