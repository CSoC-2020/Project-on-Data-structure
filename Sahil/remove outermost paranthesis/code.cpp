class Solution {
public:
    string removeOuterParentheses(string s) {
         stack<char> nums;
  string t="";

  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='(' && nums.empty()==true)
    {
      nums.push('(');
    }
    else if(s[i]=='(' && nums.empty()==false)
    {
      t+='(';
      nums.push('(');
    }
    else if(s[i]==')' && nums.size()==1)
    {
    nums.pop();}
    else if(s[i]==')')
    {
      t+=')';
      nums.pop();
    }

  }return t;
    }
};