class Solution
{
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> S;
        for(string s : tokens)
        {
            if(s == "+" || s == "-" || s == "/" || s=="*")
            {
                int b = S.top();
                S.pop();
                int a = S.top();
                S.pop();
                if(s == "+")
                    S.push(a+b);
                else if(s == "-")
                    S.push(a-b);
                else if(s == "/") 
                    S.push(a/b);
                else 
                    S.push(a*b);
            }
            else
                S.push(stoi(s));
        }
        return S.top();
    }
};

  
