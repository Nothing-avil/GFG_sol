// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        set<int> zeros[3];
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 0){
                    zeros[1].insert(i);
                    zeros[2].insert(j);
                }
            }
        }
        for(int r : zeros[1]){
            for(int i=0; i<m; i++){
                mat[r][i] = 0;
            }
        }
        for(int c : zeros[2]){
            for(int i=0; i<n; i++){
                mat[i][c] = 0;
            }
        }
    }
};
