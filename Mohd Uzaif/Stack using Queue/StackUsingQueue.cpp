class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
     
        queue<int> temp;
        while(q.size()!=0)
        {
            temp.push(q.front());
            q.pop();
        }
        
        q.push(x);
        while(temp.size()!=0)
        {
            q.push(temp.front());
            temp.pop();
        }
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        
        int k=q.front();
        q.pop();
        return k;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q.size()==0)
            return true;
        else
            return false;
    }
};