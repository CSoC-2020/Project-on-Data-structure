class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& nums) {
        int p=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            p+=nums[i][0];
        }
        vector<int> s={};
        for(int i=0;i<nums.size();i++)
        {
            s.push_back(nums[i][1]-nums[i][0]);
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()/2;i++)
        {
            c+=s[i];
        }
        return p+c;
    }
};