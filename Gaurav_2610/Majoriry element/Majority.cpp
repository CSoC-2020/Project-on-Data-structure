class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
        int count=0;
        int major = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==major){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                major=nums[i];
                count++;
            }
        }
        return major;
    }
};
