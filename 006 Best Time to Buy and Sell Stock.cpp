#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int mn=prices[0];
    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans = max(ans, prices[i] - mn);
      mn= min(mn,prices[i]);
    }
    return ans;
}
