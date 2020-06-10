class Solution {
public:
    int operand(int a,int b,string s)
    {
        if(s[0]=='*')
        {
            return a*b;
        }
        if(s[0]=='+')
        {
            return a+b;
        }
        if(s[0]=='-')
        {
            return a-b;
        }
        if(s[0]=='/')
        {
            return a/b;
        }
        return -1;
    }
    int evalRPN(vector<string>& s) {
        vector<int> p;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=="+" || s[i]=="-" || s[i]=="*" || s[i]=="/")
            {
                int a,b;
                a=p[p.size()-2];
                b=p[p.size()-1];
                p.pop_back();   p.pop_back();
                p.push_back(operand(a,b,s[i]));
            }
            else
            {
                p.push_back(stoi(s[i]));
            }
        }
        return p[0];
    }
};
