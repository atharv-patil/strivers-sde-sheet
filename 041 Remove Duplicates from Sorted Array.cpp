int removeDuplicates(vector<int> &arr, int n) {
	int cnt = 1;
	int last = arr[0];
	for (int i=1;i<n;i++)
	{
		if (arr[i]==arr[i-1])
			continue;
		else
			cnt++;
	}
	return cnt;
}
