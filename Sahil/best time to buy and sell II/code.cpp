class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int min=prices[0];
        int p;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            else
            {
                p+=(prices[i]-min);
                min=prices[i];
            }
        }
        return p;
    }
};