class Solution {
  public:
    int LCIS(vector<int> &a, vector<int> &b) {
        int n = a.size(), m = b.size();
        vector<int> dp(m);
        for (int i = 0; i < n; i++) {
            int currentMax = 0;
            for (int j = 0; j < m; j++) {
                if (a[i] == b[j]) {
                    dp[j] = currentMax + 1;
                } 
                else if (b[j] < a[i]) {
                    currentMax = max(currentMax, dp[j]);
                }
            }
        }
        int ans = 0;
        for (int v : dp) ans = max(ans, v);
        return ans;
    }
};
