class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
            int n = costs.size();
            int dp[n + 1][n + 1];
             memset(dp, 127, sizeof(dp));

             dp[0][0] = 0;
            for (int i = 1; i <= n; ++i) {
                 for (int j = 0; j <= i; ++j) {
                    if (j == 0) {
                        dp[i][j] = dp[i - 1][j] + costs[i - 1][1];
                    } else {
                        dp[i][j] = min(dp[i - 1][j - 1] + costs[i - 1][0], dp[i - 1][j] + costs[i - 1][1]);
                 }
                }
            }

             return dp[n][n / 2];
    }
};

/* another solution which is brute force approach
static bool cmp(vector <int> a, vector <int> b){
      return abs(a[0] - a[1]) > abs(b[0] - b[1]);
   }
   int twoCitySchedCost(vector<vector<int>>& costs) {
      int n = costs.size();
      int a = n/2;
      int b = n/2;
      sort(costs.begin(), costs.end(), cmp);
      int ans = 0;
      for(int i = 0; i < n; i++){
         if(b == 0 || (costs[i][0] <= costs[i][1] && a > 0)){
            a--;
            //cout << a << " " << costs[i][0] << endl;
            ans += costs[i][0];
         } else {
            //cout << costs[i][1] << endl;
            b--;
            ans += costs[i][1];
         }
      }
      return ans;
      /*
