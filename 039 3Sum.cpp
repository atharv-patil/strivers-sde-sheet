#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K)
{

	sort(arr.begin(),arr.end());

	vector<vector<int>>ans;
	int last = 1e6+1;
	for (int i=0;i<n;i++)
	{
		if (arr[i]!=last)
			last = arr[i];
		else
			continue;
		int a = arr[i];
		int ii = i+1;
		int jj = n-1;

		while (ii<jj)
		{
			if (a+arr[ii]+arr[jj]>K)
			{
				int temp = arr[jj];
				while (temp==arr[jj] and ii<jj)
					jj--;
			}
			else if (a+arr[ii]+arr[jj]<K)
			{
				int temp = arr[ii];
				while (temp==arr[ii] and ii<jj)
					ii++;
			}
			else{
				ans.push_back({a,arr[ii],arr[jj]});
				int temp = arr[ii];
				while (temp==arr[ii] and ii<jj)
					ii++;
				temp = arr[jj];
				while (temp==arr[jj] and ii<jj)
					jj--;
			}
		}
	}
	return ans;

}
