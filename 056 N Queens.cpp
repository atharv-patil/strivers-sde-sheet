

bool check(vector<vector<int>>&done,int row,int col)
{
    for (int i=0;i<done.size();i++)
    {
        int x=done[i][0],y=done[i][1];
        if (x==row) return false;
        if (y==col) return false;
        if (abs(x-row)==abs(y-col)) return false;
    }
    return true;
}

void f(int row,int n,vector<int>&a,vector<vector<int>>&ans,vector<vector<int>>&done)
{
    if (row==n and done.size()==n)
    {
        ans.push_back(a);
        return;
    }
    for (int i=row*n;i<row*n+n;i++)
    {
        int r = row;
        int c = i-row*n;
        if (!check(done,r,c))
            continue;
        done.push_back({r,c});
        a[i] = 1;
        f(row+1,n,a,ans,done);
        a[i] = 0;
        done.pop_back();
    }
    return;
}


vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>>ans,done;
    vector<int>a(n*n,0);
    f(0,n,a,ans,done);

    return ans;

}
