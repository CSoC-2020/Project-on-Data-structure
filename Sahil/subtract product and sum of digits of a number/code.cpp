class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while(n!=0)
        {
            p*=n%10;
            s+=n%10;
            n=n/10;
        }
        return p-s;
    }
};