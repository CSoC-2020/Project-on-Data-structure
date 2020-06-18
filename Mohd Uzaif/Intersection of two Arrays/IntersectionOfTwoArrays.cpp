class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int bucket[10000] = {0};
        for(int i : nums1) {
            bucket[i] = 1;
        }
        for(int i : nums2) {
            if(bucket[i]) {
                res.push_back(i);
                bucket[i] = 0;
            }
        }
        return res;
    }
};