#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&a, int k)
{
    vector<int>b(k,0);
    vector<int>ans;
    
    while (true)
    {
        int mn = 0;
        int idx = -1;

        for (int i=0;i<k;i++)
        {
            if (b[i]!=a[i].size())
            {
                if (idx==-1 or a[i][b[i]]<mn)
                {
                    mn = a[i][b[i]];
                    idx = i;
                }
            }
        }
        if (idx==-1) break;

        ans.push_back(mn);
        b[idx]++;
    }
    return ans;
}
