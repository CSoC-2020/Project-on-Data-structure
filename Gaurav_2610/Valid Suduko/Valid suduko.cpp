class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
         bool rows[9][9]={false};
        bool cols[9][9]={false};
        bool grid[3][3][9]={false};
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.')
                    continue;
                int val=board[i][j]-'0'-1;
                if(rows[i][val]||cols[j][val]||grid[i/3][j/3][val])
                    return false;
                rows[i][val]=true;
                cols[j][val]=true;
                grid[i/3][j/3][val]=true;
            }
        }
        return true;
        
    }
};
