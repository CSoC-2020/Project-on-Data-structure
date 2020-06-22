class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                s.insert(s.begin(),nums[i]);
            else
                s.push_back(nums[i]);
        }
        return s;
    }
};