class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s={};
        vector<int>::iterator itr;
        for(int i=0;i<nums.size();i++)
        {
            int t=target-nums[i];
            itr=find(nums.begin()+i+1,nums.end(),t);
            if(itr!=nums.end())
            {
                s.push_back(i);
                s.push_back(itr-nums.begin());
                break;
            }
        }
        return s;
    }
};