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

void f(TreeNode<int>*root,vector<int>&ans,set<int>&s,int i)
{
    if (s.find(i)==s.end())
    {
        s.insert(i);
        ans.push_back(root->data);
    }
    TreeNode<int>*l = root->left,*r = root->right;
    if (l!=NULL)
        f(l,ans,s,i+1);
    if (r!=NULL)
        f(r,ans,s,i+1);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    set<int>s;
    if (root==NULL) return ans;

    f(root,ans,s,0);
    return ans;
}
