#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getMaxWidth(TreeNode<int>* root)
{
    if (root == nullptr) {
        return 0;
    }

    queue<TreeNode<int>*> q;
    q.push(root);
    map<int, int> mn, mx;
    int ans = 1;

    while (!q.empty())
    {
        int qq=q.size();
        ans = max(ans,qq);
        while (qq--) {
          auto temp = q.front();
          q.pop();


          if (temp->left != nullptr)
            q.push(temp->left);
          if (temp->right != nullptr)
            q.push(temp->right);
        }
    }

    return ans;
}

