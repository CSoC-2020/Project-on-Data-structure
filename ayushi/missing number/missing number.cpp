class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int result;
        sort(nums.begin(),nums.end());
        if(nums[0]!=0)
        {
            result =0;
            return result;
        }
            
        int j=0;
        for(j=1;j<nums.size();j++)
        {
        if(nums[j]!=j)
        {   result=j;
        return result;
            break;
        }
        }
        result=j;
        return result;
    }
};