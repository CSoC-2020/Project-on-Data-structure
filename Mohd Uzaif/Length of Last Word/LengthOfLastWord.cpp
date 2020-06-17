class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==0) return 0;
        int count=0;
       for(int i=s.size()-1;i>=0;i--)
       {
           if(s[i]!=' ')    count++;
           else if(s[i]==' ')
           {
               if(count==0) continue;
               else return count;
            }
       }
    
        return count;
    }
};