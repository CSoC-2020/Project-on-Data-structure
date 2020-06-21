class Solution {
public:
    int findSpecialInteger(vector<int>& A) {
        map<int,int> map;
        int n = A.size(), result;
        for (int i = 0; i < n; i++) {
            map[A[i]]++;
            if (map[A[i]] > n / 4) {
                return A[i];
            }
        }
        return -1;
    }
};