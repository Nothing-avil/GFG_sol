class Solution {
  public:
    int countWays(string &digits) {
        int mod = 1e9+7;    
        int n = digits.size();
        int dp[n + 2] = {0};
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <=n; i++){
            if(digits[i-1] != '0'){
                dp[i] = dp[i-1];
            }
            if((digits[i-2] == '1') || (digits[i-2] == '2' && digits[i-1] <= '6')){
                dp[i] = (dp[i]+ dp[i-2])%mod;
            }
        }
        return dp[n];
    }
};
