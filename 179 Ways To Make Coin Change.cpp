#include <bits/stdc++.h>

long countWaysToMakeChange(int *d, int n, int value) {
    sort(d, d + n);
    vector<long long> v(value + 1,0);
    v[0] = 1;
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<=value;j++)
        {
            if (j-d[i]>=0)
            {
                v[j]+=v[j-d[i]];
            }
        }
    }
    return v[value];

}
