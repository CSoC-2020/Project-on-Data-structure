class Solution {
public:
    int maxProfit(vector<int>& s) {
        vector<int> dp(s);
        int ans=0;
        for(int i=1;i<s.size();i++)
        {
            if(dp[i]>dp[i-1])
            {
                ans=max(ans,dp[i]-dp[i-1]);
            }
            dp[i]=min(dp[i],dp[i-1]);
        }
        return ans;
        }
};