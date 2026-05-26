class Solution {
  public:
    int minToggle(vector<int>& arr) {
        int tot = accumulate(arr.begin(), arr.end(), 0);
        int cnt = 0;
        int toggles = INT_MAX;
        for(int i = 0;i<arr.size();i++){
            cnt += arr[i];
            toggles = min(toggles, cnt + ((int(arr.size()) - i - 1) - (tot - cnt)));
        }
        toggles = min(toggles, min(cnt, int(arr.size()) - cnt));
        return toggles;
    }
};
