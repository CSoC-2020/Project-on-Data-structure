class Solution {
public:
    bool checkRecord(string s) {
        
        if( s.find("LLL" ) <=s.size())
            return false;
        
        
        else
        {
           if(count (s.begin() ,s.end() ,'A') > 1)
               return false;
        }
        return true;
        
        
        
    }
};
