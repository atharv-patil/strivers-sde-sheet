#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	if (n==1)
		return x%m;
	if (n%2==0)
	{
		long long k = modularExponentiation(x,n/2,m)%m;
		return (k*k)%m;
	}
	else
	{
		long long k = modularExponentiation(x,n/2,m)%m;
		long long temp = (k*k)%m;
		return (temp*x)%m;
	}
}
