class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz=nums.size(),sum=0;
        for(int i=0;i<sz;i++)
        {
            sum+=nums[i];
        }
        sz=(sz*(sz+1))/2;
        return sz-sum;
    }
};
