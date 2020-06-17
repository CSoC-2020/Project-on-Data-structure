class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return 0;
        else{
        float t=log10(n)/log10(3);
        if(pow(3,t)==n)
            return 1;
        return 0;
    }}
};