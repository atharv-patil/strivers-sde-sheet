int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int ans = 1;
    queue<int>q;
    q.push(dt[0]);

    for (int i=1;i<n;i++)
    {
        int ar = at[i];
        int dpt = dt[i];

        while (!q.empty() and q.front()<ar)
            q.pop();
        q.push(dpt);
        int s = q.size();
        ans = max(ans,s);

    }
    return ans;

}
