class Solution {
public:
    int tribonacci(int n) {
        
        vector<int>t(50);
        
        t[0]=0;
        t[1]=1;
        t[2] =1;
        for(int i=3;i<=n;i++)
        {
            t[i] =t[i-3]+t[i-2] +t[i-1];
        }
        return t[n];
        
        
    }
};
 // dp approach 
