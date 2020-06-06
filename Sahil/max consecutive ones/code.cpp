class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int ans=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                c=0;
            else 
                c+=1;
            if(ans<c)
                ans=c;
        }
        return ans;
    }
};