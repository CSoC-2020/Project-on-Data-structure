class Solution {
public:
    bool checkValidString(string s) {
        int Diff=0;
        for(char c:s)
        {
            Diff+=(c=='(' || c=='*')?1:-1;
            if(Diff<0)  return false;
        }
        Diff=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            Diff+=(s[i]==')' || s[i]=='*')?1:-1;
            if(Diff<0)  return false;
        }
        return true;
    }
};
