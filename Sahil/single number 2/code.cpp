class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> s;
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]+=1;
        }
        for(map<int,int>::iterator itr=s.begin();itr!=s.end();itr++)
        {
            if((*itr).second==1)
                return (*itr).first;
        }
        return 0;
    }
};