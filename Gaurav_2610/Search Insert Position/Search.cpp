class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
       int n=nums.size();
            if(n < 1) {
            return 0;
        }
        
        int low = 0;
        int high = n-1;
        int mid;
        int pos;
        while(low <= high) {
            mid = low + (high-low)/2;
            
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] > target) {
                high = mid - 1;
                pos = mid;
            } else {
                low = mid + 1;
                pos = mid + 1;
            }
        }
        
        return pos;

     
        
    }
};
