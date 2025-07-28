class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        int n = mat.size(), sum = 0;
        int maxi= INT_MIN;
        for(int i=0; i<n; i++){
            int x = 0, y = 0;
            for(int j=0;  j<n; j++){
                x += mat[i][j];
                y += mat[j][i];
                sum += mat[i][j];
            }
            maxi = max(maxi, max(x, y));
        }
        return n*maxi - sum;
    }
};
