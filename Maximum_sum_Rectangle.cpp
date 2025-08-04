class Solution {
  public:
    int maxRectSum(vector<vector<int>> &mat) {
        int n = mat.size(), m = mat[0].size();
        int maxi = INT_MIN;
        for(int left = 0; left < m; left++) {
            for(int right = left; right < m; right++) {
                int curSum = 0;
                for(int i=0; i<n; i++) {
                    for(int j=left; j<=right; j++) curSum += mat[i][j];
                    maxi = max(maxi, curSum);
                    if(curSum < 0) curSum = 0;
                }
            }
        }
        return maxi;
    }
};
