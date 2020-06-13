class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0){
            return "";
        }
        string res;
        for(int i = 0; i < strs[0].size(); i++){
            char ch = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(ch != strs[j][i]){
                    return res;
                }
            }
            res += ch;
        }
        return res;
    }
};