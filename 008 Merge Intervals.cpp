#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &itv)
{
    vector<vector<int>> v;
    int n=itv.size();
    for (int i=0;i<n;i++)
        v.push_back({itv[i][1],itv[i][0]});
    sort(v.begin(),v.end());

    vector<vector<int>>ans;
    int mx = v[0][0],mn = v[0][1];
    for (int i=1;i<n;i++)
    {
        if (mx>=v[i][1])
        {
            mn = min(mn,v[i][1]);
            mx = max(mx,v[i][0]);
        }
        else
        {
            while (!ans.empty())
            {
                vector<int> k = ans.back();
                if (mn<=k[0] or mn<=k[1])
                {
                    ans.pop_back();
                    mn = min(mn,k[0]);
                }
                else
                    break;
            }
            ans.push_back({mn,mx});
            mn = v[i][1];
            mx = v[i][0];
        }
    }
    while (!ans.empty())
    {
        vector<int> k = ans.back();
        if (mn<=k[0] or mn<=k[1])
            {
                ans.pop_back();
                mn = min(mn,k[0]);
            }
        else
            break;
    }
    ans.push_back({mn,mx});
    return ans;
}
