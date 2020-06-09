class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        
      int n=A.size();
        
      int i = 0;
        if (n < 3) {
            return false;
        }
        while (i < n-1 && A[i] < A[i+1]) {
            ++i;
        }
        if (!i || i == n - 1) {
            return false;
        }
        while (i < n-1 && A[i] > A[i+1]) {
            ++i;
        }
        return i == n-1;
        
    }
};
