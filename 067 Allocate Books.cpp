#include <bits/stdc++.h> 
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long i = 0,j = 1e18,mid;

	for (auto ii:time)
		i = max(i,(long long)ii);
	
	while (i<=j)
	{
		mid = i+(j-i)/2;

		long long sm = 0;
		int cnt = 1;

		for (auto ii:time)
		{
			if (sm+ii > mid)
			{
				sm = ii;
				cnt++;
			}
			else
			{
				sm+=ii;
			}
		}

		if (cnt>n)
		{
			i = mid+1;
		}
		else
		{
			j = mid-1;
		}
	}
	return i;
}
