class Solution {
  public:
    int solve(int i, int sum, vector<int>&coins, vector<vector<int>>&dp){
        if(sum==0) return 0;
        if(i<0) return 1e9;
        if(dp[i][sum]!=-1) return dp[i][sum];
        int take=1e9;
        if(sum>=coins[i]) take=1+solve(i, sum-coins[i], coins, dp);
        return dp[i][sum]=min(take, solve(i-1, sum, coins, dp));
    }
  
    int minCoins(vector<int> &coins, int sum) {
        // code here
        int n=coins.size();
        vector<vector<int>>dp(n, vector<int>(sum+1, -1));
        int ans=solve(n-1, sum, coins, dp);
        return ans==1e9?-1:ans;
    }
};
