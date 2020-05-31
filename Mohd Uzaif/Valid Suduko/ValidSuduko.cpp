class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
    
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a.size();j++)
            {
                if(a[i][j]!='.')
                {
                    for(int k=0;k<a.size();k++)
                    {
                        if(k!=j && a[i][k] == a[i][j])  return false;
                    }
                    for(int k=0;k<a.size();k++)
                    {
                        if(k!=i && a[k][j] == a[i][j])  return false;
                    }
                    
                    int topLeftSubgridRow = i/3*3;
                    int topLeftSubgridCol = j/3*3;
                    for(int m=0;m<3;m++)
                    {
                        for(int n=0;n<3;n++)
                        {
                            if(i!=m + topLeftSubgridRow && j != n + topLeftSubgridCol && a[i][j] == a[m + topLeftSubgridRow][n + topLeftSubgridCol])    return false;
                        }
                    }
                }
            }
        }
    return true;
    }
};
