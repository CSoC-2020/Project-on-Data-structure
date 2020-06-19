class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> a(A[0].size(),vector<int>(A.size()));
        for(int i=0;i<A[0].size();i++)
        {
            for(int j=0;j<A.size();j++)
            {
                a[i][j]=A[j][i];
            }
        }
        return a;
    }
};