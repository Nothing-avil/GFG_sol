class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        vector<int> result;
        int n = matrix.size();
        for (int j = 0; j < n; ++j) {
            int row = 0;
            int col = j;
            while (row < n && col >= 0) {
                result.push_back(matrix[row][col]);
                ++row;
                --col;
            }
        }
        for (int i = 1; i < n; ++i) {
            int row = i;
            int col = n - 1;
            while (row < n && col >= 0) {
                result.push_back(matrix[row][col]);
                ++row;
                --col;
            }
        }
        return result;
    }
};
