class Solution {
public:
    bool isValid(string s) {
        string a;
        int z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                a.push_back(s[i]);
                z++;
            }
            else if(z==0)
            {
                return false;
            }
            else if(s[i]=='}')
            {
                if(a[z-1]=='{') {a.pop_back();  z--;}
                else    return false;
            }
            else if(s[i]==']')
            {
                if(a[z-1]=='[') {a.pop_back();   z--;}
                else    return false;
            }
            else if(s[i]==')')
            {
                if(a[z-1]=='(') {a.pop_back();  z--;}
                else    return false;
            }
        }
        if(z==0) return true;
        else return false;
    }
};
