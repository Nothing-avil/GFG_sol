class Solution {
  public:
    int maxSumSubarray(vector<int>& arr) {
        if (arr.size() == 0) {
            return 0;
        }
        int n = arr.size();
        int maxEndNoSkipping = arr[0];
        int maxEndSkipping = arr[0];
        int overallMax = arr[0];
        for (int i = 1; i < n; i++) {
            maxEndSkipping = max(maxEndNoSkipping, maxEndSkipping + arr[i]);
            maxEndNoSkipping = max(arr[i], maxEndNoSkipping + arr[i]);
            overallMax = max(overallMax, max(maxEndNoSkipping, maxEndSkipping));
        }
        return overallMax;
    }
};
