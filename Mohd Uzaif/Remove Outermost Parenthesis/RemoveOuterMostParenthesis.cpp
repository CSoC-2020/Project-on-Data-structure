class Solution {
public:
    string removeOuterParentheses(string s) {
        int i=0,j=0,left_count=0,right_count=0;
        string res;
        while(i<s.size())
        {
            if(left_count==0 && s[i]=='(')   {i++;  left_count++;}
            else if(s[i]=='(')  {res.push_back('('); i++; left_count++;}
            else if(s[i]==')' && left_count-1==right_count)   {i++;left_count=0;right_count=0;} 
            else if(s[i]==')')
            {
                res.push_back(')');
                right_count++;
                i++;
            }
        }
        return res;
    }
};
