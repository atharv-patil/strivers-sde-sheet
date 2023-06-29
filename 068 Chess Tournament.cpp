#include <bits/stdc++.h> 
int chessTournament(vector<int> positions , int n ,  int c){
	
	sort(positions.begin(),positions.end());
	int i=0,j=positions[n-1]-positions[0];

	while (i<=j)
	{
		int mid = i+(j-i)/2;
		
		int cnt = 1;
		int start = positions[0];

		for (int ii=1;ii<n;ii++)
		{
			if (positions[ii]-start > mid)
			{
				start = positions[ii];
				cnt++;
			}
		}

		if (cnt < c)
		{
			j = mid-1;
		}
		else
		{
			i = mid+1;
		}

	}
	return i;

}
