class Solution {
public:
    bool isPowerOfFour(int n) {
        return n&&(log10(n)/log10(4)==ceil(log10(n)/log10(4)));
    }
};
