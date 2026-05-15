class Solution {
  public:
    int optimalKeys(int n) {
         int dp[n + 1];
        
        if(n <= 6) return n;
        
        for(int i = 0; i <= 6; i++){
            dp[i] = i;
        }
        
        for(int i = 7; i <= n; i++){
            dp[i] = 0;
            for(int j = 1; j <= i - 3; j++){
                dp[i] = max(dp[i], dp[j] * (i - j - 1));
            }
             
        }
        return dp[n];
    }
};
