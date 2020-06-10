class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int t=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]==t) || (nums[i]*2<=t))
                continue;
            else
                return -1;
        }
        vector<int>::iterator itr;
        itr=find(nums.begin(),nums.end(),t);
        return itr-nums.begin();
        
    }
};