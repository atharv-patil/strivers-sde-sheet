#include <vector>
int lcs(string& s,string& t)
{
    int n = s.size();
    int m = t.size();

    vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
                v[i][j] = v[i - 1][j - 1] + 1;
            else
                v[i][j] = max(v[i - 1][j], v[i][j - 1]);
        }
    }

    return v[n][m];
}
