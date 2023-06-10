#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& num1, vector<int>& num2, int m, int n) {
	int i = m-1;
	int k = n+m-1;

	while (k>=0)
	{
		
		if (i==-1)
		{
			num1[k] = num2.back();
			num2.pop_back();
			k--;
		}
		else if (num2.empty())
		{
			break;
		}
		else
		{
			if (num1[i]>num2.back())
			{
				num1[k] = num1[i];
				num1[i] = -1;
				k--;
				i--;
			}
			else
			{
				num1[k] = num2.back();
				num2.pop_back();
				k--;
			}
		}


	}
	return num1;
}
