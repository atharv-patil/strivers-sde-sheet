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


void f(int i,vector<string>&dict,string &s,vector<string>&ans,string &t)
{
    int n=s.size();
    if (i==n)
    {
        ans.push_back(t);
        return;
    }

    for (auto ii:dict)
    {
        if (!check(i,s,ii)) continue;
        string tt = t+" "+ii;
        if (t=="")
            tt = ii;
        f(i+ii.size(),dict,s,ans,tt);
    }

    
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    vector<string>ans;
    string t;
    f(0,dictionary,s,ans,t);
    return ans;
}
};
