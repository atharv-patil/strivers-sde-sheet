int longestSubSeg(vector<int> &arr , int n, int k){
    int i=0;
    int zeros = 0;
    int ans = 0;
    if (k==0)
    {
        int mx = 0;
        for (int i=0;i<n;i++)
        {   
            if (arr[i]==1)
                mx++;
            else{
                mx = 0;
            }
            ans = max(ans,mx);
        }
        return ans;
    }

    for (int j=0;j<n;j++)
    {
        if (arr[j]==0)
        {
          while (k and zeros >= k) {
            if (arr[i] == 0)
              zeros--;
            i++;
          }
          zeros++;
        }
        ans = max(ans, j - i + 1);
        // cout<<i<<" "<<j<<endl;
    }
    return ans;
}
