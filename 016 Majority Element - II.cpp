#include <bits/stdc++.h>
// used Boyer–Moore majority vote algorithm
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    int cnt1 = 0,cnt2 = 0,num1 = 0,num2 = 0;


    for (auto i:arr)
    {
        if (num1 == i)
            cnt1++;
        else if (num2==i)
            cnt2++;
        else if (cnt1==0)
        {
            num1 = i;
            cnt1++;
        }
        else if (cnt2==0)
        {
            num2 = i;
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    int sm1 = 0,sm2 = 0;
    for (auto i:arr)
    {
        if (i==num1)
            sm1++;
        if (i==num2)
            sm2++;
    }
    vector<int>ans;
    if (sm1>n/3)
        ans.push_back(num1);
    if (sm2>n/3)
        ans.push_back(num2);
    return ans;
}
