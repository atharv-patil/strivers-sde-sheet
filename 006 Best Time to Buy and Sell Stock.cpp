#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    vector<int>a(n);
    for (int i=n-1;i>=0;i--)
    {
        if (i==n-1)
            a[i] = prices[i];
        else
            a[i] = max(a[i+1],prices[i]);
    }
    int ans = 0;
    for (int i=0;i<n;i++)
        ans = max(ans,-prices[i]+a[i]);
    return ans;
}
