#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };
************************************************************/
int ans;
int f(TreeNode<int>* root, int& x, int& y)
{
    if (root == nullptr)
        return 0;
    
    int tsm = 0;
    if (root->data == x)
        tsm++;
    if (root->data == y)
        tsm += 2;

    int l = f(root->left, x, y);
    int r = f(root->right, x, y);

    if ((tsm + l + r) > 2 && ans == -1) 
        ans = root->data;
    
    return (tsm + l + r);
}

int lowestCommonAncestor(TreeNode<int>* root, int x, int y)
{
    ans = -1;
    f(root, x, y);
    return ans;
}
