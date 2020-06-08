class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int s=accumulate(nums.begin(),nums.end(),0);
    int sum=0;
        for(int i=1;i<=nums.size();i++)
        {
            sum+=i;
        }
        return sum-s;
    }
};