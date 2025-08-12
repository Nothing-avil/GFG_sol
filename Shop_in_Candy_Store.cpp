class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size();
        int buy = (n + k)/(k + 1);
        sort(prices.begin(), prices.end());
        int mini = 0, maxi = 0;
        for(int i=0; i<buy; i++){
            mini += prices[i];
        }
        for(int i = n-1; i >= n - buy; i--){
            maxi += prices[i];
        }
        return {mini, maxi};
    }
};
