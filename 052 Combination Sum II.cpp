#include <bits/stdc++.h>
void f(int i,vector<int>&arr,vector<vector<int>>&ans,int target,vector<int>&t)
{
  if (target == 0) ans.push_back(t);

  if (i==arr.size()) return;
  

  for (int j=i;j<arr.size();j++)
  {
		if (j!=i and arr[j-1]==arr[j])
			continue;
		
		if (arr[j]>target) break;
		
		t.push_back(arr[j]);
		f(j+1,arr,ans,target-arr[j],t);
		t.pop_back();		
  }
  
}




vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	vector<int>t;
	f(0,arr,ans,target,t);
	return ans;

}
