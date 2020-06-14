class Solution 
{
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        if(grid.size() == 0) 
            return 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++) 
            {
                if(i == 0 && j==0) 
                    continue;
                int up  = INT_MAX;
                int lef = INT_MAX;
                if(i>0)
                    up  = grid[i-1][j];
                if(j>0)
                    lef = grid[i][j-1];
                grid[i][j] += min(up,lef);
            }
        }
        return grid[m-1][n-1];
    }
};