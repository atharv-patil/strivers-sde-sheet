#include <bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    int mn=INT_MAX;
    for (auto i : arr) 
    {
        int sz = i.size();
        mn = min(mn,sz);
    }

    int i = 0;
    while (i<mn)
    {
        char ch = arr[0][i];
        int flag = 1;
        for (auto j:arr)
        {
          if (j[i] != ch) {
            flag = 0;
            // cout<<j[i]<<" "<<ch<<endl;
          }
        }
        if (flag)
            i++;
        else
            break;
    }
    
    string a;
    for (int j=0;j<i;j++)
        a+=arr[0][j];
    return a;

}


