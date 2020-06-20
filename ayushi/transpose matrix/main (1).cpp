class Solution 
{
public:
    vector<vector<int>> transpose(vector<vector<int>>& A)
    {
              int x=A.size();
        int y=A[0].size();
          vector<vector<int>> result(y,vector<int>(x));
  
        for(int i=0;i<y;i++)
            {
                for(int j=0;j<x;j++)
                {
                    result [i][j]=A[j][i];
                }
            }
        return result;
           
        
    }
};
