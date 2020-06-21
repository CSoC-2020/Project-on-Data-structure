class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> s;
        s.push_back(1);
        for(int i=1;i<nums.size();i++)
            s.push_back(s[i-1]*nums[i-1]);
        
        int t=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            s[i]=(t*s[i]);
            t*=nums[i];
        }
        return s;
    }
};