class MyQueue {
public:
    
    stack <int> s1;
    stack <int> s2;
    
    /** Initialize your data structure here. */
    MyQueue() { 
        
        s1 = {};
        s2 = {};
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!s1.empty())
        {
            int tmp = s1.top();
            s2.push(tmp);
            s1.pop();
        }
        int ret = s2.top();
        s2.pop();
        while(!s2.empty())
        {
            int tmp = s2.top();
            s1.push(tmp);
            s2.pop();    
        }
        return ret;
        
    }
    
    /** Get the front element. */
    int peek() {
         while(!s1.empty())
        {
            int tmp = s1.top();
            s2.push(tmp);
            s1.pop();
        }
        int ret = s2.top();
        //s2.pop();
        while(!s2.empty())
        {
            int tmp = s2.top();
            s1.push(tmp);
            s2.pop();    
        }
        return ret;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
