class Solution 
{
public:
    string removeOuterParentheses(string s) 
    
{
 stack<char> stk;
  string result="";

  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='(' && stk.empty()==true)
    {
      stk.push('(');
    }
       else if(s[i]==')' && stk.size()==1)
    {
    stk.pop();
      }
    else if(s[i]=='(' && stk.empty()==false)
    {
      result=result+'(';
      stk.push('(');
    }
   
    else if(s[i]==')')
    {
      result=result+')';
      stk.pop();
    }

  }
        return result;
    }
};



  
