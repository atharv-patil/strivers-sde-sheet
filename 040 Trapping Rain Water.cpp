#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    vector<long>ltr(n),rtl(n);

    long mx = 0;
    for (int i=0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        ltr[i] = mx;
    }
    mx = 0;
    for (int i=n-1;i>=0;i--)
    {
        mx = max(mx,arr[i]);
        rtl[i] = mx;
    }

    long ans = 0;
    long zero = 0;
    for (int i=0;i<n;i++)
    {
        ans+= max(zero,min(ltr[i],rtl[i])-arr[i]);
    }
    return ans;


}
