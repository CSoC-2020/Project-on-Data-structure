class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp;
        cost.push_back(0);
        dp.push_back(cost[0]);
        dp.push_back(cost[1]);
        for(int i=2;i<cost.size();i++)
        {
            dp.push_back(cost[i]+min(dp[i-1],dp[i-2]));
        }
        return dp[dp.size()-1];
    }
};