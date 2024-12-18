class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
         int n = arr.size();
        if (k > n) return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0ll);
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int cnt = 1;
            int sum = 0;
            for (int i = 0; i < arr.size(); ++i) {
                if (sum + arr[i] <= mid) {
                    sum += arr[i];
                } else {
                    sum = arr[i];
                    cnt++;
                }
            }
            if (cnt <= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
