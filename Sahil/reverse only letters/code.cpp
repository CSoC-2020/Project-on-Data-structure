class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> nums={};
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                nums.push_back(s[i]);
        }
        reverse(nums.begin(),nums.end());
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
            {
                s[i]=nums[k];
                k++;
            }
        }
        return s;
    }
};