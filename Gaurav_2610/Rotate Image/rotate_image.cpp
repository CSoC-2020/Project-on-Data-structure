class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
    int n=matrix.size();
for(int i=0;i<matrix.size()/2;i++)
{
int x;
for(int j=0;j<matrix.size()-2*i-1;j++)
{
x=matrix[i+j][n-i-1];
matrix[i+j][n-i-1]=matrix[i][i+j];
    
swap(x,matrix[n-i-1][n-(i+j)-1]);
    
swap(x,matrix[n-(j+i)-1][i]);
    
swap(x,matrix[i][i+j]);
}
}    
        
    }
};
