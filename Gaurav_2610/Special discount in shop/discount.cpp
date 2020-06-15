class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        
        vector<int>res;
        for (int i = 0; i < n; i++) { 
            int p=0;
  
        for (int j = i+1; j < n; j++) { 

            if (prices[i] >= prices[j]) { 
                
                p=prices[j] ;
                break;
            }
        }
          res.push_back(prices[i]-p);  
        }
        return res;
    }
};
