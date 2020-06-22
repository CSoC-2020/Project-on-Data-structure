class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> row_sum(n,0),col_sum(m,0);
        for(vector v : indices){
            row_sum[v[0]]++;
            col_sum[v[1]]++;
        }
        int res = 0;
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j++)
                res += (row_sum[i]+col_sum[j])%2;
        return res;
    }
};