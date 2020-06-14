class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int> dp(n, n + 1);
        
        int i = -1, j = -1;
        int curr_sum = 0;
        while (i < n) {
            i++;
            if (i > 0) {
                curr_sum -= arr[i - 1];
            }
            while (curr_sum < target and j + 1 < n) {
                curr_sum += arr[j + 1];
                j++;
            }
            if (curr_sum == target) {
                dp[j] = j - i + 1;
            }
        }
        
    }
};
