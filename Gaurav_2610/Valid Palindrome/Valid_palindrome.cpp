class Solution {
public:
    bool isPalindrome(string s) {
       string s1,s2;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i])) 
                s1+=s[i];
            
        }
        for(int i=n-1;i>=0;i--)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
                s2+=s[i];
        }
        if(s1==s2)
            return true;
        else
            return false;
    }
};


