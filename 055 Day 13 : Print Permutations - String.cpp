#include <bits/stdc++.h> 

void f(vector<int>flag,string s,vector<string>&ans,string &t)
{
    int n=s.size();
    if (n==t.size())
    {
        ans.push_back(t);
        return;
    }

    for (int i=0;i<n;i++)
    {
        if (flag[i]) continue;

        flag[i] = 1;
        t+=s[i];
        f(flag,s,ans,t);
        t.erase(t.size() - 1);
        flag[i] = 0;

    }
}

vector<string> findPermutations(string &s) {
    vector<string>ans;
    vector<int>flag(s.size(),0);
    string t;
    f(flag,s,ans,t);
    return ans;
}
