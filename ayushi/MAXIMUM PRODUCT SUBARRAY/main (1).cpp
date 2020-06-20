class Solution
{
public:
    int maxProduct(vector<int>& nums)
    {
        if(nums.empty())
            return 0;
        int currmax=nums[0],currmin=nums[0],Ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=currmax;
            currmax=max({temp*nums[i],currmin*nums[i],nums[i]});
            currmin=min({temp*nums[i],currmin*nums[i],nums[i]});
            Ans=max(currmax,Ans);
            
        }
        return Ans;
    }
};