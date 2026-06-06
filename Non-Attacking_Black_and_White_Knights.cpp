class Solution {
  public:
    int numOfWays(int n, int m) {
        long long totalSquares = (long long)n * m;
        long long totalWays = totalSquares * (totalSquares - 1);
        long long attackingWays = 0;
        if (n >= 2 && m >= 3) {
            attackingWays += 4LL * (n - 1) * (m - 2);
        }
        if (n >= 3 && m >= 2) {
            attackingWays += 4LL * (n - 2) * (m - 1);
        }
        return totalWays - attackingWays;
    }
};
