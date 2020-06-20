class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return i;
            }
            else if((nums[i]<nums[i+1]) && ((i+1)==nums.size()-1))
                return i+1;
        }
        return 0;
    }
};