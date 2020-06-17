class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i = m - 1; i > 0; i--){
            for(int j = n - 1; j > 0; j--){
                if(matrix[i][j] != matrix[i -1][j - 1])
                    return false;
            }
        }
        return true;
    }
};
