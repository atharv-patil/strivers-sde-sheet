class Solution {
public:
    
    bool f(int i,map<int,vector<int>>&d,vector<int>&done)
    {
        if (done[i]==-1)
            return 0;
        if (done[i]==1)
            return 1;
        
        done[i] = -1;
        int ans = 1;
        for (auto j:d[i])
        {
            ans &= f(j,d,done);
        }
        done[i] = 1;
        return ans;
        
        
    }
    
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>done(n,0);
        map<int,vector<int>>d;
        
        for (auto i:p)
        {
            d[i[1]].push_back(i[0]);
        }
        
        for (int i=0;i<n;i++)
        {
            if (f(i,d,done)==0)
                return 0;
        }
        return 1;
    }
};
