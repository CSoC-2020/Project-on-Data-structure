class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n);
         for (int i = 0; i < n; i++) 
   {  
          pref[i]=nums[i] + (i==0 ? 0 :pref[i-1]); 
         }  
        
        
        int min_so_far=0;
        int answer =INT_MIN; 
   for (int j = 0; j<n; j++) 
   { 
      if(min_so_far != INT_MIN)
      {
          answer=max(answer,pref[j] -min_so_far);
          min_so_far=min(min_so_far,pref[j]);
      }
    
      
   } 
   return answer;
    }
};
