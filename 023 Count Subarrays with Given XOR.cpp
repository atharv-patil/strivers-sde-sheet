#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int,int>d;
    d[0] = 1;
    
    int ans = 0;
    int pre = 0;
    for (int i=0;i<arr.size();i++)
    {
        pre = pre^arr[i];
        ans += d[pre^x];
        d[pre]+=1;

    }

    return ans;
}
