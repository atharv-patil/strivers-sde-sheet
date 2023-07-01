#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    unordered_map<int,int>d;
    for (auto i:arr)
        d[i]++;
    vector<int>ans;
    priority_queue<vector<int>>pq;

    for (auto i:d)
    {
        pq.push({i.second,-i.first});
    }
    while (!pq.empty() and k--)
    {
        vector<int>t = pq.top();
        ans.push_back(-t[1]);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
