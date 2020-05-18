class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
          int num=nums[i];
            
          
            if(mp.count(target-num))
        {
          res.push_back(i);
         res.push_back(mp[target-num]);
        }
            else{
                mp.insert({num,i});
            }
        }
        return res;
    }
};
