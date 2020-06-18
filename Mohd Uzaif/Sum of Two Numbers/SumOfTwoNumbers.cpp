class Solution {
public:
    int getSum(int a, int b) {
        if(b==0)
        {
            return a;
        }
        else if(a==0)
        {
            return b;
        }

        else
        {
            int sum = a^b;
            int  carry = (unsigned int)(a&b)<<1;
             return getSum(sum,carry);
            
        }
    }
};