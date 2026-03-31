class Solution {
  public:
    int maxProfit(vector<int>& arr, int k) {
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(2));
        for(int i=n-1; i>=0; i--){
            dp[i][1] = max(dp[i+1][0]-k-arr[i], dp[i+1][1]);
            dp[i][0] = max(dp[i+1][1]+arr[i], dp[i+1][0]);
        }
        return dp[0][1];
    }
};
