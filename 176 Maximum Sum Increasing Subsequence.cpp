#include <bits/stdc++.h> 
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	vector<int>t(n,0);
	t[0] = rack[0];
	int ans = t[0];
	for (int i=1;i<n;i++)
	{
		t[i] = rack[i];
		for (int j=i-1;j>=0;j--)
		{
			if (rack[i]>rack[j])
			{
				t[i] = max(t[i],rack[i]+t[j]);
				ans = max(ans,t[i]);
			}
		}
	}
	return ans;

}
