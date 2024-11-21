class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int maxProfit = 0;
        int n = prices.size();
        
        for (int i = 1; i < n; i++) {
            // If the price is higher than the previous day, accumulate the profit
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        
        return maxProfit;
    }
};
