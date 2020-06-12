class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        else{
     vector<int> dp={};
        dp.push_back(0);
        dp.push_back(nums[0]);
        for(int i=2;i<=nums.size();i++)
        {
            dp.push_back(max(dp[i-1],dp[i-2]+nums[i-1]));
        }
        return dp[dp.size()-1];}
    }
};