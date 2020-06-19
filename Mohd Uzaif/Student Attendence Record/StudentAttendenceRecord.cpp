class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A'){
                count++;
                if(count>1) return false;
            }
            if(s[i]=='L')
            {
                if(s[i+1]=='L' && s[i+2]=='L')
                    return false;
            }
        }
        return true;
    }
};