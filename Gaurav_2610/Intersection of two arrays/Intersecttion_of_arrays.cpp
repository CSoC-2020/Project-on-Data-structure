class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int a=nums1.size();
        int b=nums2.size();
        
        vector<int>result;
        unordered_map<int,int>mp;
        for(const auto& i:nums1)
        {
            mp[i]++;
        }
        for(const auto &i:nums2)
        {
            mp[i]--;
            if(mp[i]>=0)
                result.push_back(i);
        }
        return result;
    }
};s
