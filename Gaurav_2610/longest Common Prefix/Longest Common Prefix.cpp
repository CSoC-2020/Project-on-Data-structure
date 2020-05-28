class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        if(strs.empty())
            return "";
         
        int minlen=strs[0].length();
        for(int i=0;i<n;i++)
        {
            if(strs[i].length()<minlen)
            {
                minlen=strs[i].length();
            }
        }
        string res;
        char curr;
        for(int i=0;i<minlen;i++)
        {
            curr=strs[0][i];
            for(int j=1;j<n;j++)
            {
                if(strs[j][i]!=curr)
                {
                    return res;
                }
            }
            res.push_back(curr);
        }
        return res;
        
    }
};



