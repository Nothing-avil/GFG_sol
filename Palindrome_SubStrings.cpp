class Solution {
  public:
    int countPS(string &s) {
        int n=s.size();
        int count=0;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = 1;
                count++;
            }
        }
        for (int len = 3; len <= n; len++) {  
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;  
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = 1;
                    count++;
                }
            }
        }
        return count;
    }
};
