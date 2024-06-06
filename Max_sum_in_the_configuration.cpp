class Solution {
  public:
    long long max_sum(int a[], int n) {
        long totalSum = 0;
        for (int i = 0; i < n; ++i) {
            totalSum += a[i];
        }
        
        // Calculate the initial value of the sum of i * arr[i]
        long currentValue = 0;
        for (int i = 0; i < n; ++i) {
            currentValue += (long) i * a[i];
        }
        
        // Initialize maxSum to the initial value
        long maxSum = currentValue;
        
        // Iterate to find the maximum sum using the derived relationship
        for (int i = 1; i < n; ++i) {
            currentValue = currentValue + totalSum - (long) n * a[n - i];
            maxSum = max(maxSum, currentValue);
        }
        
        return maxSum;
    }
};
