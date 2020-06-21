class Solution {
public:
    int xorOperation(int n, int start) {
        
        
        vector<int>nums(n);
      
         for(int i = 1; i <= n; i++){
             nums.push_back(start);
             start += 2;
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
         ans = ans ^ nums[i];
        }
        return ans;
        
    }
};
