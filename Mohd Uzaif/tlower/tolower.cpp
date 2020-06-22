class Solution {
public:
    string toLowerCase(string str) {
        for(auto & x:str)
        x=tolower(x);
        return str;
    }
};