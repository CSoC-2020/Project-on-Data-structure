class Solution {
public:
   

 vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size()-1);
        return nums;
    }
    
    void quicksort(vector<int>& nums, int start, int end){
        if(start >= end) return;
        int pivot = nums[start];
        int left = start, right = end;
        
        while(left < right){
            while(left < right && nums[right] >= pivot){
                right--;
            }
            
            if(left < right) nums[left++] = nums[right];
            
            while(left < right && nums[left] <= pivot){
                left++;
            }
            
            if(left < right) nums[right--] = nums[left];
        }
        
        nums[left] = pivot;
        quicksort(nums, start, left-1);
        quicksort(nums, left+1, end);
    }
};