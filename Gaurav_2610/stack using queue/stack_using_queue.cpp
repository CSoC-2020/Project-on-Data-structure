#include<bits/stdc++.h>
using namespace std;
class MyStack{ 
public:
    /** Initialise the data structure **/
  queue<int> q;
  queue<int> tmp_q;
 public:
  MyStack(){
  }
    
/** Push element stack on the stack **/

  void push(int x) {
    tmp_q.push(x);
    while (!q.empty()) {
      tmp_q.push(q.front());
      q.pop();
    }
    while (!tmp_q.empty()) {
      q.push(tmp_q.front());
      tmp_q.pop();
    }
  }
/** Return the element on the top of stack and return it elements **/
  int pop() {
    int top = q.front();
    q.pop();
    return top;
  }

    /** Get the top element **/
  int top() {
    return q.front();
  }

    /** return whether the stack is empty **/
  bool empty() {
    return q.empty();
  }

};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

