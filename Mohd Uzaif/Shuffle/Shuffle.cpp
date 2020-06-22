class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0, j = (2*n-1)/2 + 1;
        vector<int>res(2*n, 0);
        int k = 0;
        
        while (i < (2*n-1)/2 + 1) {
            res[k++] = nums[i];
            res[k++] = nums[j];
            i++; j++;
        }
        
        return res;
    }
};