class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return 0;
        }
        else{
        map<char,int> nums;
        map<char,int> nums1;
        for(int i=0;i<s.size();i++)
        {
            nums[s[i]]+=1;
            nums1[t[i]]+=1;
        }
        map<char,int>::iterator itr=nums.begin();
        map<char,int>::iterator itr1=nums1.begin();
        while(itr!=nums.end() && itr1!=nums1.end())
        {
            if(((*itr).first!=(*itr1).first) || ((*itr).second!=(*itr1).second))
            {
                return 0;
            }
            itr++;
            itr1++;
        }
            return 1;
        }
    }
};