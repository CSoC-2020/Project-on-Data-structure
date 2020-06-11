class MyQueue {
public:
    stack<int> nums;
    stack<int> s;
    int t;
    /** Initialize your data structure here. */
    MyQueue() {
        t=0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(nums.empty()!=true)
        {
            s.push(nums.top());
            nums.pop();
        }
        nums.push(x);
        t++;
        while(s.empty()!=true)
        {
            nums.push(s.top());
            s.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(t==0)
            return 0;
        else
        {    int x=nums.top();
            nums.pop();
        t--;
        return x;}
    }
    
    /** Get the front element. */
    int peek() {
        if(t==0)
            return 0;
        else
            return nums.top();
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(t==0)
            return 1;
        else 
            return 0;
        
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