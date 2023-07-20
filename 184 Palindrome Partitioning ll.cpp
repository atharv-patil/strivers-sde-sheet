#include <bits/stdc++.h> 

int dp[101];

bool check(string s)
{
    int i=0,j=s.size()-1;
    while (i<j)
    {
        if (s[i]!=s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int f(int i,string s)
{
    int n = s.size();
    if (i==n)
        return 0;
    if (dp[i]!=-1)
        return dp[i];
        
    int ans = INT_MAX;
    string a;

    for (int j=i;j<n;j++)
    {
        a+=s[j];
        if (check(a))
        {
            ans = min(ans,min(INT_MAX,1+f(j+1,s)));
        }
    }
    return dp[i] = ans;

}


int palindromePartitioning(string s) {
    memset(dp,-1,sizeof dp);
    return f(0,s)-1;
}
