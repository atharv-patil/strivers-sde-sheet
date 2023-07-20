#include <bits/stdc++.h>
int dp[501][501];
int f(int i,int j,string word1,string word2)
{
    int n=word1.size(),m=word2.size();
    if (j==m)
        return n-i;
    if (i==n)
        return m-j;
    if (dp[i][j]!=-1)
        return dp[i][j];
    
    int ans = INT_MAX;
    
    if (word1[i]==word2[j])
        ans = min(ans,f(i+1,j+1,word1,word2));
    else
    {
        ans = min(ans,1+f(i,j+1,word1,word2));
        ans = min(ans,1+f(i+1,j+1,word1,word2));
        ans = min(ans,1+f(i+1,j,word1,word2));
    }
    return dp[i][j] = ans;
}

int editDistance(string word1, string word2) {
    
    memset(dp,-1,sizeof dp);
    return f(0,0,word1,word2);
}
