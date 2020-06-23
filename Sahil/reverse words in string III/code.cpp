class Solution {
public:
    string reverseWords(string s) {
     string t="";
        string p="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(p.begin(),p.end());
                t+=p;
                t+=' ';
                p="";
            }
            else
            {
                p+=s[i];
            }
        }
        if(p.size()!=0)
        {
            reverse(p.begin(),p.end());
            t+=p;
        }
        return t;
    }
};