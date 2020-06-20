class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=nums[0],mn=nums[0],ans=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            int y,z;
            y=nums[i]*mx;
            z=nums[i]*mn;
            mx=max(nums[i],y);
            mx=max(mx,z);
            
            mn=min(nums[i],y);
            mn=min(mn,z);
            
            if(mx>ans)
                ans=mx;
        }
        return ans;
    }
};