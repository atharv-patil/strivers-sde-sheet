#include <bits/stdc++.h> 
bool check(int x,int y,int n)
{
  if (0<=x and 0<=y and x<n and y<n)
    return true;
  return false;
}
void f(int i,int j,vector<vector<int>>&maze,vector<vector<int>>&v,vector<vector<int>>&ans)
{
  int n=maze.size();
  v[i][j] = 1;
  if (i==n-1 and j==n-1)
  {
    vector<int>t;
    for (auto ii:v)
    {
      for (auto jj:ii)
        t.push_back(jj);
    }
    ans.push_back(t);
  }
  vector<vector<int>>dir = {{0,1},{1,0},{-1,0},{0,-1}};

  for (auto ii:dir)
  {
    int x=ii[0], y=ii[1];

    if (check(i-x,j-y,n) and maze[i-x][j-y] and v[i-x][j-y]==0)
    {
      f(i-x,j-y,maze,v,ans);
    }
  }
  v[i][j] = 0;
}

vector<vector<int>> ratInAMaze(vector<vector<int> > &maze, int n){
  if (maze[0][0]==0 or maze[n-1][n-1]==0) return {};
  vector<vector<int>>ans,v(n,vector<int>(n,0));
  f(0,0,maze,v,ans);
  return ans;

  
}
