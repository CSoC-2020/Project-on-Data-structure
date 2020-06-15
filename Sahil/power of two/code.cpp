class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return 0;
        else{
        float t=log(n)/log(2);
        
        if(pow(2,t)==n)
            return 1;
        return 0;
    }}
};