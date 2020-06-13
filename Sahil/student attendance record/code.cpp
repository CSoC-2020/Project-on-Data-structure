class Solution {
public:
    bool checkRecord(string s) {
        if(s.find("LLL")<=s.size())
            return 0;
        else
        {
            if(count(s.begin(),s.end(),'A')>1)
            return 0;
         }
         return 1;   
    }
};