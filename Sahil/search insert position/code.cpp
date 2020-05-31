class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     vector<int>::iterator  itr;
        itr=find(nums.begin(),nums.end(),target);
        if(itr<nums.end())
        {
            return distance(nums.begin(),itr);
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>target)
                    return i;
            }
            return nums.size();
        }
    }
};