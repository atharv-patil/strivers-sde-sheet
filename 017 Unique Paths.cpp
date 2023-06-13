#include <bits/stdc++.h> 


int uniquePaths(int m, int n) {

	// vector<vector<int>>a(m,vector<int>(n,0));

	// for (int i=0;i<n;i++)
	// 	a[0][i] = 1;
	
	// for (int i=1;i<m;i++)
	// {
	// 	for (int j=0;j<n;j++)
	// 	{
	// 		a[i][j] += a[i-1][j];
	// 		if (j)
	// 			a[i][j]+=a[i][j-1];
	// 	}
	// }
	// return a[m-1][n-1];

	// using PnC
	int N = n+m-2;
	int r = m-1;
	double res = 1;

	for (int i=1;i<=r;i++)
		res = res*(N-r+i)/i;
	return (int)res;

}
