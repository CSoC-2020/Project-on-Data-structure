
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int temp=0;
        
        temp=haystack.find(needle);
        
        if(temp<=haystack.size())
           
        {
            return temp;
        }
        else
        {
           return -1;
     
        }   
    }
};