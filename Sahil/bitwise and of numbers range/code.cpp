class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int c=0;
        while(m!=n)
        {
            m=m>>1;
            n=n>>1;
            c++;
        }
        return m<<c;
}};