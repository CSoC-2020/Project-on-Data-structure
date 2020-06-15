class Solution {
public:
    int rob(vector<int>& nums) {
     
        if(nums.empty()) 
        return 0;
        
        int size = nums.size(), dp[size + 1];
        
        dp[size] = 0, dp[size - 1] = nums[size - 1];
        
        for(int i = size - 2; i >= 0; i--)
            dp[i] = max(nums[i] + dp[i + 2], dp[i + 1]);
        
        return dp[0];
    }
};
// simple dp approach to solve the problem by transferrng in another array called memoization
