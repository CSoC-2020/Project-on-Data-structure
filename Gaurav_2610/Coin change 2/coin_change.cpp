class Solution {
public:
     int change(int amount, vector<int>& coins) {
        
       if (amount == 0) return 1;
        if (coins.size() == 0) return 0;
        vector<vector<int>> dp (coins.size()+1,vector<int>(amount+1,0));
        for (int i = 0; i < coins.size(); i++){
            for(int j = 0; j <= amount; j++){
                if(j == 0){
                    dp[i][0] = 1;
                }
                else if (i == 0){
                    if (j % coins[0] == 0)
                        dp[i][j] = 1;
                }
                else{
                    dp[i][j] = dp[i-1][j] + (j-coins[i] >= 0? dp[i][j-coins[i]];                                                                            : 0);
                }
            }
        }
        return dp[coins.size()-1][amount];   
         
         
    }
    
};

// Dp approach Added (TOp-Down )

 
