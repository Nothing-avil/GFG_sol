class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat){
        vector<int> res;
        int n = mat.size();
        for (int sum = 0; sum < n + n - 1; ++sum) {
            if (sum % 2 == 0) {
                for (int i = min(sum, n - 1); i >= max(0, sum - n + 1); --i) {
                    res.push_back(mat[i][sum - i]);
                }
            } else {
                for (int i = max(0, sum - n + 1); i <= min(sum, n - 1); ++i) {
                    res.push_back(mat[i][sum - i]);
                }
            }
        }
        return res;
    }
};
