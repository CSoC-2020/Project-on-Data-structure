class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>s(nums.begin(),nums.end());
        return s.size() != nums.size();
    }
};
