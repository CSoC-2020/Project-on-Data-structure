class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int m=prices[0],prof=0;
        for(int i=1;i<prices.size();i++){
            m = min(m,prices[i]);
            prof = max(prof,prices[i]-m);
        }
        return prof;
    }
};