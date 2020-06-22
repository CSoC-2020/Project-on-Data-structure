class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
    if(nums.size()<3)
        return 0;
        int i=0,j=nums.size()-1;
        while(i<nums.size()-1 && nums[i]<nums[i+1])
            i++;
        while(j>0 && nums[j]<nums[j-1])
            j--;
        
        if(i!=0 && j!=nums.size()-1 && i==j)
            return 1;
        return 0;
    
}
};