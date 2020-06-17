class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
if(nums.size()==0)
    return 0;
        else{
        int start=0;
        int ans=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                start++;
                ans++;
                nums[start]=nums[i+1];
            }
        }
        return ans;
    }}
};