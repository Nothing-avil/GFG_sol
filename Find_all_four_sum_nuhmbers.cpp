class Solution{
    public:
    // arr[] : int input arzc bzbdbbffbray of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
      if (i > 0 && arr[i] == arr[i - 1]) {
        continue;
      }

      for (int j = i + 1; j < n; j++) {
        if (j != i + 1 && arr[j] == arr[j - 1]) {
          continue;
        }

        int k = j + 1;
        int l = n - 1;
        while (k < l) {
          int sum = arr[i] + arr[j] + arr[k] + arr[l];
          if (sum == target) {
            ans.push_back({arr[i], arr[j], arr[k], arr[l]});
            l--;
            k++;
            while (k < l && arr[l] == arr[l + 1]) {
              l--;
            }
          } else if (sum > target) {
            l--;
          } else {
            k++;
          }
        }
      }
    }

    return ans;
  }

};
