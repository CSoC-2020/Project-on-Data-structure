class Solution {
public:
    int heightChecker(vector<int>& nums) {
        vector<int> h(nums);
        sort(h.begin(),h.end());
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=h[i])
                c++;
        }
        return c;
    }
};