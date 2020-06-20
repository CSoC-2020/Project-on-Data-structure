class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int scount=0,count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
                scount++;
        }
        if(scount==s.size())
            return 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && count>0)
                return count;
            if(s[i]!=' ')
                count++;
        }
        return count;
    }
};
