#include <bits/stdc++.h>
// Implement class for minStack.
class minStack {
  stack<pair<int, int>> s;

public:
  minStack() {}

  void push(int num) {
    if (s.empty())
      s.push({num, num});
    else if (s.top().second < num)
      s.push({num, s.top().second});
    else
      s.push({num, num});
  }

  int pop() {
    if (s.empty())
      return -1;
    auto t = s.top();
    s.pop();
    return t.first;
  }

  int top() { 
	  return s.empty() ? -1 : s.top().first; 
	  }
  int getMin() 
  { 
	  return s.empty() ? -1 : s.top().second; 
	  }
};
