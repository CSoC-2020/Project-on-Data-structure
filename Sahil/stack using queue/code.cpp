class MyStack {
public:
    queue<int> nums;
    queue<int> s;
    int t;
    /** Initialize your data structure here. */
    MyStack() {
      t=0;  
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        while(nums.empty()!=true)
        {
            s.push(nums.front());
            nums.pop();
        }
        nums.push(x);
        while(s.empty()!=true)
        {
            nums.push(s.front());
            s.pop();
        }
        t++;
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(t==0)
            return 0;
        else
        {
            int x=nums.front();
            nums.pop();
            t--;
            return x;
        }
    }
    
    /** Get the top element. */
    int top() {
        if(t==0)
            return 0;
        else
            return nums.front();
        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(t==0)
            return 1;
        else
            return 0;
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