#include <bits/stdc++.h>

int cutRod(vector<int> &price, int n)
{
	vector<int>v(n+1,0);
	
	for (int i=0;i<n;i++)
	{
		if (v[i]==0 and i)
			continue;
		for (int j=1;j<=n;j++)
		{
			if (i+j<=n)
			{
				v[i+j] = max(v[i+j],v[i]+price[j-1]);
			}
			else
				break;
		}
	}
	return v[n];


}
