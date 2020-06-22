class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int n : nums) {
            int d = 0;
            while(n) {
                n /= 10;
                d++;
            }
            cnt += (d % 2 == 0);
        }
        return cnt;
    }
};