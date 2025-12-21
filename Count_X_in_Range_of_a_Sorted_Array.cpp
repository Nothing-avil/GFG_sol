class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];
            int x = q[2];
            auto leftItr  = lower_bound(arr.begin() + l, arr.begin() + r + 1, x);
            auto rightItr = upper_bound(arr.begin() + l, arr.begin() + r + 1, x);
            res.push_back(rightItr - leftItr);
        }
        return res;
    }
};
