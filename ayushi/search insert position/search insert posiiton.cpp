class Solution {
public:
int searchInsert(vector<int>& nums, int target)
{
      int mid;
        int low = 0;
        int high = nums.size();
    int n=nums.size()-1;
        if(target > nums[n])
            return nums.size();
        if(target < nums[0])
            return 0;
      
        while(low < high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid-1] < target && nums[mid] > target)
                return mid;
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        return 0;
    }
};
