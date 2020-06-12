class MyStack {
 public:
  queue<int> q1;
  queue<int> q2;
 public:
  MyStack(){
  }

  void push(int x) 
  {
    q2.push(x);
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    while (!q2.empty()) 
    {
      q1.push(q2.front());
      q2.pop();
    }
  }

  int pop()
  {
    int top = q1.front();
    q1.pop();
    return top;
  }

  int top()
  {
    return q1.front();
  }

  bool empty() 
  {
    return q1.empty();
  }

};