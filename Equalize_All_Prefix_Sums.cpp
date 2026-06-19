class Solution {
  public:
    vector<int> optimalArray(vector<int> &arr) {
        int n = arr.size();
        vector<long long> pref(n);
        pref[0] = arr[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + arr[i];
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int m = i / 2;
            long long leftCost =
                1LL * arr[m] * (m + 1) - pref[m];
            long long rightCost =
                (pref[i] - pref[m]) -
                1LL * arr[m] * (i - m);
            ans[i] = (int)(leftCost + rightCost);
        }
        return ans;
    }
};
