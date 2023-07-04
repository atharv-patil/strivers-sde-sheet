#include <bits/stdc++.h> 
int distinctSubstring(string &word) {
    unordered_map<string,int>d;
    // a better approach is using trie to optimize space complexity
    for (int i=0;i<word.size();i++)
    {
        string s;
        s+=word[i];
        d[s]+=1;
        for (int j = i + 1; j < word.size(); j++) {
          s += word[j];
          d[s] += 1;
        }
    }
    return d.size();
}
