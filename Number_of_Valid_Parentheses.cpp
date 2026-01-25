class Solution {
  public:
     int cnt(int open, int close, vector<vector<int>>& dp){
        if(close < open) return 0;
        
        if(open == 0) return 1;
        
        if(dp[open][close] != -1) return dp[open][close];
        
        return dp[open][close] = cnt(open-1, close, dp) + cnt(open, close-1, dp);
    }
    
    int findWays(int n) {
        if(n%2) return 0;
        int k = n/2+1;
        vector<vector<int>> dp(k, vector<int>(k,0));
        dp[0][0] = 1;
        for(int i=1;i<k;i++)
            dp[0][i] = 1;
            
        for(int i=1;i<k;i++){
            for(int j=i;j<k;j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[k-1][k-1];
    }
};
