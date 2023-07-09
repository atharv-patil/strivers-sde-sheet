#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    vector<int>a(26,0);
    int n=str1.size(),m=str2.size();
    if (n!=m) return 0;
    for (auto i:str1)
        a[i-'a']++;
    for (auto i:str2)
        a[i-'a']--;
    for (auto i:a)
        if(i!=0) return 0;
    return 1;

}
