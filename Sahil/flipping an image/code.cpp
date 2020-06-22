class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& nums) {
    for(int i=0;i<nums.size();i++)
    {
        reverse(nums[i].begin(),nums[i].end());
    }
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(nums[i][j]==0)
                    nums[i][j]=1;
                else
                    nums[i][j]=0;
            }
        }
        return nums;
    }
};