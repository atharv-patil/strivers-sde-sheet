#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int>d;
  int sm = 0;
  for (int i=0;i<arr.size();i++)
  {
    sm+=arr[i];
    d[sm] = i;
  }
  int ans = 0;
  if (d[0])
    ans = d[0]+1;

  sm = 0;
  for (int i=0;i<arr.size();i++)
  {
    sm+=arr[i];
    ans = max(ans,d[sm]-i);
  }
  return ans;
}
