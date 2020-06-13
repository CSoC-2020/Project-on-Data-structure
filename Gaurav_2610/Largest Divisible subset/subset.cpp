class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
      sort(begin(nums), end(nums));
        const int n = nums.size();
        vector<int> dp(n), parent(n), res; 
        int maxSize = 0;   
        int beginIdx = -1; 
        for(int i = n - 1; i >=0; i--)
            for(int j = i; j < n; j++) // i <= j;  // Note1
                if(nums[j] % nums[i] == 0 && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                    parent[i] = j; 
                    if(maxSize < dp[i]){
                        maxSize = dp[i]; 
                        beginIdx= i;
                    }
                }                                    
        
        while(maxSize--){ 
            res.push_back(nums[beginIdx]);
            beginIdx = parent[beginIdx];
        }            
        return res;
       
    
    
    }
};
// time complexity O(n^2); 


