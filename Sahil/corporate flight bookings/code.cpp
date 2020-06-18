class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& nums, int n) {
        vector<int> p(n+1);
    for(int i=0;i<nums.size();i++)
    {
        p[nums[i][0]-1]+=nums[i][2];
        p[nums[i][1]]-=nums[i][2];
    }
        vector<int> r(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
                r[i]=p[i];
            else
                r[i]=p[i]+r[i-1];
        }
return r;
    }
};