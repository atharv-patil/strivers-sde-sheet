#include <bits/stdc++.h>


// used Moore's Voting Algorithm

int findMajorityElement(int arr[], int n) {
	int cnt=1,curr=arr[0];

	for (int i=1;i<n;i++)
	{
		if (cnt==0)
		{
			curr = arr[i];
			cnt = 1;
			continue;
		}
		if (arr[i]!=curr)
			cnt--;
		else
			cnt++;

	}
	cnt = 0;
	for (int i=0;i<n;i++)
	{
		if (arr[i]==curr)
			cnt++;
	}
	if (cnt>n/2)
		return curr;
	return -1;
}
