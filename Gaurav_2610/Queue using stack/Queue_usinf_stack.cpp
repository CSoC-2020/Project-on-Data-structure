#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    /** Initialize your data structure here. */
     stack<int> q;
     stack<int> tmp_q;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        
     
    while (!q.empty()) {
      tmp_q.push(q.top());
      q.pop();
    }
        tmp_q.push(x);
    while (!tmp_q.empty()) {
      q.push(tmp_q.top());
      tmp_q.pop();
    }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
    int top = q.top();
    q.pop();
    return top;
    }
    
    /** Get the front element. */
    int peek() {
        return q.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
       return q.empty(); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */




