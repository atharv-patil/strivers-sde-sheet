class Solution {
public:
    

bool check(int i,string s,string ss)
{
    int n=s.size(),m=ss.size();
    int j = 0;
    while (i<n)
    {
        if (s[i]!=ss[j]) return false;
        j++;
        i++;
        if (j==m) return true;
    }
    return false;

}


void f(int i,vector<string>&dict,string &s,vector<string>&ans,vector<string>&t)
{
    int n=s.size();
    if (i==n)
    {
        string a;
        a += t[0];
        for (int j=1;j<t.size();j++)
        {
            a+=" ";
            a+=t[j];
        }
        ans.push_back(a);
    }

    for (auto ii:dict)
    {
        if (!check(i,s,ii)) continue;
        t.push_back(ii);
        f(i+ii.size(),dict,s,ans,t);
        t.pop_back();
    }

    
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    vector<string>ans,t;
    f(0,dictionary,s,ans,t);
    return ans;
}
};
