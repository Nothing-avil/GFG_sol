class Solution {
  public:
    int countWays(int n, int sum) {
        vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
        for (int i = 1; (i <= 9 && i <= sum); i++) {
            dp[1][i] = 1;
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                for (int d = 0; d <= 9; d++) {
                    if (j >= d) {
                        dp[i][j] += dp[i-1][j-d];
                    }
                }
            }
        }
        return (dp[n][sum] == 0) ? -1 : dp[n][sum];
    }
};
