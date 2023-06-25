#include <bits/stdc++.h> 


    bool ispal(string a)
    {
        int i=0,j=a.size()-1;
        while (i<j)
        {
            if (a[i]!=a[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    void f(int i,string &s,vector<vector<string>>&ans,vector<string>&t)
    {
        int n=s.size();
        if (i==n)
        {
            ans.push_back(t);
            return;
        }
        string a;
        for (int j=i;j<n;j++)
        {
            a+=s[j];
            
            if (!ispal(a))
                continue;
            t.push_back(a);
            f(j+1,s,ans,t);
            t.pop_back();
            
        }
    }
    
    
    
    vector<vector<string>> partition(string &s) {
        vector<vector<string>>ans;
        vector<string>t;
        f(0,s,ans,t);
        return ans;
    }
