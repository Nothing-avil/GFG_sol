class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit=0, buy =INT_MAX;
        for(int i=1; i<prices.size(); i++){
            buy = min(buy, prices[i-1]);
            profit = max(profit, (prices[i] - buy));
        }
        return profit;
    }
};
