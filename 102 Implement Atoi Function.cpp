#include <bits/stdc++.h> 
int atoi(string s) {

    int n = s.length();
    bool neg=false;
    string  ans ="";
    for(int i=0; i<n; i++){
        if(s[i]=='-')
            neg=true;
        if(s[i]<65 && s[i]!='-'){
            ans = ans+s[i];
        }
    }
    if(neg==true)return -stoi(ans);

    return stoi(ans);
}
