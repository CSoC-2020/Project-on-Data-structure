class Solution {
public:
    bool judgeCircle(string s) {
    int c=0,t=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U')
                c+=1;
            else if(s[i]=='D')
                c-=1;
            else if(s[i]=='R')
                t+=1;
            else
                t-=1;
        }
        if(c==0 && t==0)
            return 1;
        return 0;
    }
};