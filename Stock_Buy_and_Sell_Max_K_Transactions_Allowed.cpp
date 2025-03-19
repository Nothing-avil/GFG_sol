#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>

class Solution {
public:
    int help(int idx, bool purchase, int k, vector<int> &prices, vvvi &dp) {
        if (k == 0) return 0;
        if (idx >= prices.size()) return 0;
        if (dp[idx][k][purchase] != -1e8) return dp[idx][k][purchase];
        int choose = 0, notChoose = 0;
        if (purchase) {
            choose = -prices[idx] + help(idx + 1, false, k, prices, dp);
            notChoose = help(idx + 1, true, k, prices, dp);
        } else {
            choose = prices[idx] + help(idx + 1, true, k - 1, prices, dp);
            notChoose = help(idx + 1, false, k, prices, dp);
        }
        return dp[idx][k][purchase] = max(choose, notChoose);
    }
    
    int maxProfit(vector<int>& prices, int k) {
        int n = prices.size();
        vvvi dp(n + 1, vvi(k + 1, vi(2, -1e8)));
        return help(0, true, k, prices, dp);
    }
};
