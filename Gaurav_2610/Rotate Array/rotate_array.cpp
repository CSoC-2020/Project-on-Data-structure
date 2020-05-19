class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
         int pip = k%nums.size();
        
        vector<int>swap(nums);

        nums.insert(nums.begin(),swap.end()-pip,swap.end());
        nums.erase(nums.end()-pip,nums.end());
    }
};
