class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector output(nums.size(),1);
        for(int i = nums.size()-2; i>=0 ;i--)
        {
        output[i] = output[i+1] * nums[i+1];
        }
        int temp = 1;
        for(int i = 0; i<nums.size();i++)
        {
        output[i] = output[i] * temp;
        temp = nums[i]* temp;
        }
        return output;   
    }
};