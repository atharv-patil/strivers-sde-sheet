#include <bits/stdc++.h>
bool isValidParenthesis(string exp)
{
   vector<char>l;
unordered_map<char, char> d = { 
  { '{', '}' },
  { '[', ']' },
  { '(', ')' }
};
   for (auto i : exp) {
     if (l.size() == 0) {
       l.push_back(i);
     } else {
       if (d.find(l.back())!=d.end() and d[l.back()]==i) {
        //  cout << l.back() << endl;
         l.pop_back();
       } else {
         l.push_back(i);
       }
     }
   }
   if (l.size()) return 0;
   return 1;
}
