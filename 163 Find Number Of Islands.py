def findIslands(grid, n, m):
	
	l = []
	for i in range(n):
		g = []
		for j in range(m):
			g.append(0)
		l.append(g)
	
	
	def dfs(i,j,ini):
		if l[i][j]:
			return
		if grid[i][j]==1:
			l[i][j] = ini
		else:
			return
		for ii,jj in [[1,0],[0,1],[-1,0],[0,-1],[1,1],[-1,-1],[1,-1],[-1,1]]:
			if 0<=i+ii<n and 0<=j+jj<m:
				dfs(i+ii,j+jj,ini)
			
	
	ini = 1
	for i in range(n):
		for j in range(m):
			if grid[i][j]==1 and l[i][j]==0:
				dfs(i,j,ini)
				ini+=1
	return ini-1
