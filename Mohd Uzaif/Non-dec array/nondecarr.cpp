class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool needModification = false;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(needModification){
                    return false;
                } else {
                    if(i>0 && nums[i-1]>nums[i+1]){
                        nums[i+1] = nums[i];
                    }
                    needModification = true;
                }
            }
        }
        return true;
    }
};