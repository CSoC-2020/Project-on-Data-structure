class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
        if(m== 0) 
            return 0;
        int ans=0;
        int count=0;
        while(m != n)
        {
            m >>=1;
            n >>=1;count++;
        }
        ans= m << count;
        return ans;
    }
};


