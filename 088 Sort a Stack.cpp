#include <bits/stdc++.h>
void insert(stack<int> &stack,int num){
   if(stack.empty()){
       stack.push(num);
       return;
   }
   if(stack.top()>num){
       int lol = stack.top();
       stack.pop();
     insert(stack,num);
       stack.push(lol);
   }else{
       stack.push(num);
   }
}

void sortStack(stack<int> &stack)
{
  if(stack.empty()){
      return ;
  }
   int num = stack.top();
   stack.pop();
   sortStack(stack);
   insert(stack,num);
}
