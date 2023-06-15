#include <bits/stdc++.h>
int uniqueSubstrings(string input) { 
    int ans = 1,start = -1;
    vector<int> d(26, -1);

     for (int i = 0; i<input.size(); i++) {
        if (d[input[i]-'a'] > start)
            start = d[input[i]-'a'];
        d[input[i]-'a'] = i;
        ans = max(ans, i - start);
    }
    return ans;
}
