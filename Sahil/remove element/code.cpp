class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                continue;
            }
            else
            {
                int c=nums[i];
                nums[i]=nums[start];
                nums[start]=c;
                start+=1;
            }
        }
        return start;
    }
};