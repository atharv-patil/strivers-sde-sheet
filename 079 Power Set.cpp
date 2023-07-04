#include <bits/stdc++.h> 
vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>> ans;

    for (int i=0;i<1<<v.size();i++)
    {
        vector<int>t;
        for (int k=0;k<v.size();k++)
        {
            if (i&(1<<k))
                t.push_back(v[k]);
        }
        ans.push_back(t);
    }
    return ans;

}
