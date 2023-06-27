
bool check(int x,int col,vector<int>&color,vector<vector<int>>&mat)
{
    for (int i=0;i<mat.size();i++)
    {
        if (mat[x][i] and col==color[i]) return false;
    }
    return true;
}

int f(int x,vector<vector<int>>&mat,int m,vector<int>&color)
{
    int n=mat.size();
    if (x==n) return 1;
    int ans = 0;
    for (int i=0;i<m;i++)
    {
        if (!check(x,i,color,mat)) continue;

        color[x] = i;
        if (f(x+1,mat,m,color)) return 1;
        color[x] = -1;
    }
    return ans;
}



string graphColoring(vector<vector<int>> &mat, int m) {
    if (m>=4) return "YES";
    
    int n=mat.size();
    vector<int> color(n,-1);
    if (f(0,mat,m,color))
        return "YES";
    return "NO";

}
