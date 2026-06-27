class Solution {
  public:
    int countWays(int n, int m) {
        vector<int>dp(n+m+1,0);
        
        const int mod = (int)(1e9)+7;
        dp[n] = 1;
        for(int i = n-1;i>=0;i--)
        {
            dp[i] = (dp[i+1]%mod + dp[i+m]%mod)%mod;
        }
        return dp[0];
    }
};
