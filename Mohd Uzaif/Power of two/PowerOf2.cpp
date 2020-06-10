class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n&&((log10(n)/log10(2))==floor(log10(n)/log10(2)));
    }
};
