class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            if(i==nums.size()-1)    return nums[i];
            if(nums[i]!=nums[i+1])  return nums[i];
            if(nums[i]==nums[i+1])
            {
                int j=i+1;
                while(nums[i]==nums[j])
                {
                    j++;
                }
                i=j;
            }
        }
        return 0;
    }
};