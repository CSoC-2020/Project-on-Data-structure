class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int dp[nums.size() + 1];
        dp[0] = 0;
        dp[1] = nums.front();
        for(int i = 1; i < nums.size(); ++ i){
            dp[i+1] = max(dp[i-1] + nums[i], dp[i]);
        }
        return dp[nums.size()];
    }
};