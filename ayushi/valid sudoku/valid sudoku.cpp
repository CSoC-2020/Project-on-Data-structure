class Solution
{
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
           int k=0;
        vector<vector<int>> row(9,vector<int>(9,0)); 
        vector<vector<int>> column(9,vector<int>(9,0)); 
        vector<vector<int>> box(9,vector<int>(9,0)); 
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int num=board[i][j]-'0'-1;
                    k=i/3*3+j/3;
                    if(row[num][i] || column[num][j] || box[num][k])
                        return false;
                    row[num][i]=1;
                    column[num][j]=1;
                    box[num][k]=1;
                }
            }
        
        return true;
    }

    
};