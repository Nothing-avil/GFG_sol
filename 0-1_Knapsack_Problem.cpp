 class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    
    int knapSackRec(int W, vector<int>& wt, vector<int>& val, int index, int** dp)
    {
        if (index < 0)
            return 0;
        if (dp[index][W] != -1)
            return dp[index][W];
    
        if (wt[index] > W) {
            dp[index][W] = knapSackRec(W, wt, val, index - 1, dp);
            return dp[index][W];
        }
        else {
            dp[index][W] = max(val[index]
                               + knapSackRec(W - wt[index], wt, val,
                                             index - 1, dp),
                           knapSackRec(W, wt, val, index - 1, dp));
            return dp[index][W];
        }
    }
    
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int** dp;
        int n= val.size();
        dp = new int*[n];
        for (int i = 0; i < n; i++)
            dp[i] = new int[W + 1];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < W + 1; j++)
                dp[i][j] = -1;
        return knapSackRec(W, wt, val, n - 1, dp);
    }
};
