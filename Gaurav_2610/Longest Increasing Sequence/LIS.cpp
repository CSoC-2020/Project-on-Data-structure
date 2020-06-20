class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        
       if(n == 0)
            return 0;
        
        vector<int> dp;
        
        dp.push_back(nums[0]);
        for(int i=1; i<n; i++)
        {
            int pos = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
            
            if(pos == dp.size()) dp.push_back(nums[i]);
            else dp[pos] = nums[i];
        }
        
        return dp.size();
        }
};
//Bottom -Up Approach in DP 
