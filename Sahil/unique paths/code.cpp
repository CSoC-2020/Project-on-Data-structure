class Solution {
public:
    int uniquePaths(int m, int n) {
         int nums[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    nums[i][j]=1;
  }

  for(int i=1;i<n;i++)
  {
    for(int j=1;j<m;j++)
    {
      nums[i][j]=nums[i-1][j] + nums[i][j-1];
    }
  }
        return nums[n-1][m-1];
    }
};