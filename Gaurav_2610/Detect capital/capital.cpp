class Solution {
public:
    bool detectCapitalUse(string word) {
        
      int n=word.length();
        int cnt=0;
        int x;
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i])) 
            {
                cnt++;
                x=i;
            }
        }
        if(cnt==0 || (cnt==1 && x==0) ||cnt==word.size())return 1;
        return 0;
    }
};
