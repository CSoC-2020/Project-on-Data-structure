#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
    bool cases(string s)
    {
        if(s.length() >1 )return false;
        char c =s[0];
        if(c== '+' or c== '-' or c== '*' or c== '/')return true;
        else return false;
    }
   
    int evalRPN(vector<string>s)
    {
        stack<int>ss;
        for(int i=0;i<s.size();i++)
        {
            if(cases(s[i]))
            {
                int a=ss.top();
                ss.pop();
                int b=ss.top();
                ss.pop();
                if(s[i] == "+")
                    ss.push(a+b);
                if(s[i] == "-")
                    ss.push(b-a);
                if(s[i] == "*")
                    ss.push(a*b);
                if(s[i] == "/")
                    ss.push(b/a);
            }
            else
            {
                ss.push(stoi(s[i]));
            }
            
            
        }
        return ss.top();
        
    }
};
