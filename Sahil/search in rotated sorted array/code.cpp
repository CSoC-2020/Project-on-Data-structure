class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator itr;
        itr=find(nums.begin(),nums.end(),target);
        if(itr-nums.begin()<nums.size())
            return itr-nums.begin();
        else
            return -1;
    }
};