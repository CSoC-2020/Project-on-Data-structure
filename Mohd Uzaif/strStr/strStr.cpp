class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()==0)    return 0;
        for(int i=0;i<haystack.size();i++)
        {
            string temp;
            if(haystack[i]==needle[0])
            {
                
                temp=haystack.substr(i,needle.size());
            }
            if(temp==needle)    return i;
        }
        return -1;
    }
};
