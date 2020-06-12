class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        vector<string>res;
        string s1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]== '(')
            {
                s1=s1+s[i];
                st.push(s[i]);
            }
            else
            {
                if(!st.empty() && st.top()== '(')
                {
                    s1=s1+s[i];
                    st.pop();
                }if(st.empty())
                {
                    res.push_back(s1);
                    s1.clear();
                }
            }
        }
        
        for(string &x:res)
        {
            if(x.length()>=2)
            {
                x.erase(x.end()-1);
                x.erase(x.begin());
            }
        }
        string final_res;
        for(string x:res)
        {
            final_res+=x;
        }
        return final_res;
        
    }
};

