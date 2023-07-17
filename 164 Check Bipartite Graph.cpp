#include <bits/stdc++.h>
bool isGraphBirpatite(vector<vector<int>> &edges) {
	int n=edges.size();
	vector<vector<int>> flag(n,vector<int>(n,-1));
	vector<int> state(n,-1);

	for (int i=0;i<n;i++)
	{
		if (state[i]!=-1) continue;

		queue<int> q;
		q.push(i);
		int f = 0;

		while (!q.empty())
		{
			int qq=q.size();
			f = 1-f;
			for (int j=0;j<qq;j++)
			{
				int k = q.front();
				q.pop();
				
				if (state[k]!=-1)
				{
					if (state[k]!=f)
						return false;
				}
				else
				{
					state[k] = f;

					for (int ii=0;ii<n;ii++)
					{
						if (edges[ii][k] or edges[k][ii])
						{
							if (state[ii]==-1)
								q.push(ii);
							else if (state[ii]==state[k])
								return false;
						}
					}
				}
			}
		}
	}
	return true;
}
