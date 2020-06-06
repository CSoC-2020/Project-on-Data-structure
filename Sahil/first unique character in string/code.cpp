class Solution {
public:
    int firstUniqChar(string s) {
map<char,int> nums;
        for(int i=0;i<s.size();i++)
        {
            nums[s[i]]+=1;
        }
        map<char,int>::iterator itr;
        for(int i=0;i<s.size();i++)
        {
        itr=nums.find(s[i]);
            if((*itr).second==1)
                return i;
        }
        return -1;
    }
};