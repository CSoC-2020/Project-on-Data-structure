class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) return 0;
        unordered_map<int,int> s;
        for(int n: nums) ++s[n];
        int count = 0;
        for(auto &kv: s)
            count += (k != 0 && s.count(kv.first-k)) || (k == 0 && kv.second >= 2);
        return count;
    }
};