#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(),arr.end());
	int i=0,j=n-1;
	while (i<=j)
	{
		int mid=i+(j-i)/2;

		if (arr[mid]>mid)
			i = mid+1;
		else
			j = mid-1;
	}
	return arr[i];

}
