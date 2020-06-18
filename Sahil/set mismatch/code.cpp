class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     vector<int> r;
        sort(nums.begin(),nums.end());
        int p=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                p=nums[i];
                break;
            }
        }
        int sum=(nums.size()+1)*nums.size()/2;
        for(int i=0;i<nums.size();i++)
        sum-=nums[i];
        r.push_back(p);
        r.push_back(sum+p);
        return r;
    }
};