class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> matrix2=matrix;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                matrix[i][j]=matrix2[j][i];
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int x=0,y=matrix.size()-1;x<y;x++,y--)
            {
                int temp = matrix[i][x];
                matrix[i][x]=matrix[i][y];
                matrix[i][y]=temp;
            }
        }
    }
};
