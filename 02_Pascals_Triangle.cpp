#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans = {{1}};
  while (ans.size()<n)
  {
    vector<long long>temp = {1};
    for (int i=1;i<ans[ans.size()-1].size();i++)
    {
      temp.push_back(ans[ans.size()-1][i]+ans[ans.size()-1][i-1]);
    }
    temp.push_back(1);
    ans.push_back(temp);
  }
  return ans;
}
