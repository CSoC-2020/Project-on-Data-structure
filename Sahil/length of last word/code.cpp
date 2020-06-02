class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int t=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && t>1)
                break;
            else if(s[i]==' ' && t==1){}
            else 
            {
                c+=1;
            t+=1;
            }
        }
        return c;
    }
};