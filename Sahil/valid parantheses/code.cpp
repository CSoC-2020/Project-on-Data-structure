class Solution {
public:
    bool isValid(string s) {
if(s.size()==1)
    return 0;
        
else
{
stack<char> nums;
for(int i=0;i<s.size();i++)
{
  if(s[i]=='(' || s[i]=='[' || s[i]=='{')
  {
    nums.push(s[i]);
  }
  else if(s[i]==')')
  {
    if(nums.empty()==true)
      return 0;
    else if(nums.top()=='(')
      nums.pop();
    else
    return 0;
  }
  else if(s[i]==']')
  { if(nums.empty()==true)
        return 0;
  
    else if(nums.top()=='[')
        nums.pop();
    else
        return 0;
    }
    else if(s[i]=='}')
  {
    if(nums.empty()==true)
    return 0;
    else if(nums.top()=='{')
    {
      nums.pop();
    }
    else
    return 0;
  }}
    if(nums.empty()!=true)
        return 0;
        return 1;
    
    }}
};