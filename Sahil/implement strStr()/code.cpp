class Solution {
public:
    int strStr(string haystack, string needle) {
        int f=0;
        f=haystack.find(needle);
        if(f<=haystack.size())
            return f;
        else
            return -1;
    }
};