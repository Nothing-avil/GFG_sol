class Solution {
  public:
    // Function to find a solved Sudoku.
    int N = 9;
    bool isPossible(int currRow, int currCol, vector <vector <int>> &mat, int val){
        for(int i = 0; i < N; i++){
            if(mat[currRow][i] == val || mat[i][currCol] == val) return false;
        }
        
        for(int i = 0; i < N; i++){
            if(mat[3*(currRow/3) + i/3][3*(currCol/3) + (i%3)] == val) return false;
        }
        return true;
    }
    
    bool solve(vector<vector<int>> &mat){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(mat[i][j] == 0){
                    for(int val = 1; val <= 9; val++){
                        if(isPossible(i, j, mat, val)){
                            mat[i][j] = val;
                            bool nextCall = solve(mat);
                            if(nextCall){
                                return true;
                            }
                            else{
                                mat[i][j] = 0;
                            }
                        }
                    }
                    if(!mat[i][j]) return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        solve(mat);
    }
};
