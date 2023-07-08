def minTimeToRot(grid, n, m):
    minTime = []
    for i in range(n):
        a = []
        for j in range(m):
            a.append(float('inf'))
        minTime.append(a)
    
    rotten = []
    fresh = []
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 2:
                rotten.append([i,j])
            elif grid[i][j] == 1:
                fresh.append([i,j])
    
    for i,j in rotten:
        def dfs(i,j,k=0):
            minTime[i][j] = min(minTime[i][j],k)
            o,p = [0,0,1,-1], [-1,1,0,0]
            for ll in range(4):
                ii,jj = o[ll],p[ll]
                if i+ii<n and i+ii>=0 and j+jj<m and j+jj>=0 and grid[i+ii][j+jj]==1 and minTime[i+ii][j+jj]>k+1:
                    dfs(i+ii,j+jj,k+1)
        dfs(i,j)
    mx = 0
    for i in range(n):
        for j in range(m):
            if grid[i][j]==1 and minTime[i][j]==float('inf'):
                return -1
            if grid[i][j]:
                mx=max(mx,minTime[i][j])
    return mx
