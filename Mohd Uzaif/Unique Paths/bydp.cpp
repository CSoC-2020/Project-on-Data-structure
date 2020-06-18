class Solution {
public:
    int uniquePaths(int m, int n) {
        int A[n][m];
        for(int j=0;j<m;j++)    A[0][j]=1;
        for(int i=0;i<n;i++)    A[i][0]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                A[i][j]=A[i][j-1]+A[i-1][j];
            }
        }
        return A[n-1][m-1];
    }
};