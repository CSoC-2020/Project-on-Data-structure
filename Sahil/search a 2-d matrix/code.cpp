class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
       if(nums.size()==0 || nums[0].size()==0 || target>nums[nums.size()-1][nums[0].size()-1])
           return 0;
        else{
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i][nums[0].size()-1]>=target)
            break;
        }
        for(int j=0;j<nums[0].size();j++)
        {
            if(nums[i][j]==target)
                return 1;
        }
        return 0;
    }}
};