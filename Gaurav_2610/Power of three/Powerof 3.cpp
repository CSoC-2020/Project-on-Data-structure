class Solution {
public:
    bool isPowerOfThree(int n) {
        
       if(n==0)return false;
        if(n==1)return true;
        
        double val=(double)log10(n)/log10(3);
return ceil(val)==floor(val);
    }
};
