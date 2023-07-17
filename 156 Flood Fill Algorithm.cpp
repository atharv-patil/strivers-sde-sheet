    vector<pair<int,int>>dir={{0,1},{1,0},{-1,0},{0,-1}};
    void f(int x,int y,vector<vector<int>>& image,int color,int col,vector<vector<int>>&a)
    {
        image[x][y]=color;
        a[x][y] = 1;
        int n = image.size(),m = image[0].size();
        for (auto ii:dir){
            int i=ii.first,j=ii.second;
            if (x-i>=0 and x-i<n and y-j<m and y-j>=0 and image[x-i][y-j]==col and a[x-i][y-j]==0)
            {
                f(x-i,y-j,image,color,col,a);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(),m=image[0].size();
        vector<vector<int>>a(n,vector<int>(m,0));
        f(sr,sc,image,color,image[sr][sc],a);
        
        return image;
    }
