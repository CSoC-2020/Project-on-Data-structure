class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),greater<int>());
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1] < nums[i])
                count++;
            if(count == 2)
                return nums[i+1];
        }
        return nums[0];
    }
};
