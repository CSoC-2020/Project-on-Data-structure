class Solution {
public:
    int maxArea(vector<int>& nums) {
  int p=0,i=0,k=nums.size()-1;
        while(i<=k)
        {
            int t=0;
            if(nums[i]<=nums[k])
                t=nums[i];
            else
                t=nums[k];
            if((k-i)*t>p)
                p=(k-i)*t;
            if(nums[i]<=nums[k])
                i++;
            else
                k--;
        }
        return p;
}};