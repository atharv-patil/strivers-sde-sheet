#include <bits/stdc++.h>
int weight;
int dp[1001][1001];

int f(int i,int wt,vector<int> &values,vector<int> &weights)
{
	int n = values.size();
	if (i==n)
		return 0;
	if (dp[i][wt]!=-1)
		return dp[i][wt];
	int ans = 0;
	for (int j=i;j<n;j++)
	{
		if (wt+weights[j]<=weight)
		{
			ans = max(ans,values[j]+f(j+1,wt+weights[j],values,weights));
			ans = max(ans,f(j+1,wt,values,weights));
		}
	}
	return dp[i][wt] = ans;
}


int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	memset(dp,-1,sizeof dp);
	weight = w;
	return f(0,0,values,weights);
}
