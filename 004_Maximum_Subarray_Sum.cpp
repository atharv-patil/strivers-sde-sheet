#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
   long long ans = 0, t = 0;
   
   for (int i=0;i<n;i++)
   {
       t+=(long long)arr[i];
       ans = max(ans,t);
       t = max((long long)0, t);
   }
   return ans;
   
}
