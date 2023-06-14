#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   unordered_map<int,int>d;
   for (auto i:arr)
      d[i]++;

   sort(arr.begin(),arr.end());
   int i=0,j=arr.size()-1;

   vector<vector<int>>ans;

   for (auto i:arr)
   {
      int x=i;
      if (s-x==x)
      {
         int tot = d[x]-1;
         while (tot--)
         {
            ans.push_back({x,x});
         }
      }
      else
      {
         int tot = d[s-x];
         while (tot--)
         {
           ans.push_back({x, s - x});
         }
      }
      d[i]--;
   }
   return ans;


}
