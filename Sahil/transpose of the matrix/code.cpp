class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
          int n=A.size();
        int m=A[0].size();
        
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                ans[i][j]=A[j][i];
            }
        }
        
        return ans;
    }
};