class MyQueue
{
public:
stack <int>s1;
stack <int>s2;
int top;
MyQueue() {

}

void push(int x) {
    if(s1.empty())
    top = x;
    s1.push(x);
}

int pop()
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    int x = s2.top();
    s2.pop();
    if(!s2.empty())
    {
        top = s2.top();
    }
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return x;
}


int peek() 
{
    return top;
}


bool empty() 
{
    return s1.empty();
}
};