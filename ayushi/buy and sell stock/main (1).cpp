class Solution
{
public:
 
    
        int maxProfit(vector<int>& prices)
        {
        int n=prices.size();
        if(n<=1) 
            return 0;
        int profit=0,small=prices[0];
        for(int i=1;i<n;i++)
        {
            if(prices[i]<small) 
                small=prices[i];
            else
                profit=max(profit,prices[i]-small);
        }
        return profit;
    
        
    }
};