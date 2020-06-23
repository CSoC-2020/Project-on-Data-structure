class Solution 
{
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int count=0;
        int i=0,j=grid[0].size()-1;
        while(i<grid.size()&&j>=0)
        {
            if(grid[i][j]<0)
            {
               count+=grid.size()-i;
               j--; 
            } 
            else
               i++; 
        }
        return count;
    }
};