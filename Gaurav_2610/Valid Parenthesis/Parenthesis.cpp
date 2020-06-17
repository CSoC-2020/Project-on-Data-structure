class Solution {
public:
    bool isValid(string s) {
        
        stack<int>q;
        if(s.size() ==1 )return false;
        for(char c: s)
        {
            if(c== '{' or c== '(' or c== '[') 
                q.push(c);
            else{
                if(!q.empty())
                {
                    if(c== ')')
                    {
                        if(q.top() != '(')return false;
                        q.pop();
                        }
                    else if(c== '}')
                    {
                        if(q.top() != '{')return false;
                        q.pop();
                        }
                      else if(c== ']')
                    {
                        if(q.top() != '[')return false;
                        q.pop();
                        }
                    else
                    {
                        return false;
                    }
                    
                    
                }
                else
                {
                    return false;
                }
            }
        }
        if(q.empty())return true;
        else return false;
    }
};


