class Solution {
  public:
  
    vector<string> ans;

    void solve(int i, int j, int n, int m, string s, vector<vector<int>> &vis, vector<vector<int>> &mat) {
        // Base Case
        if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] == 1 || mat[i][j] == 0) {
            return;
        }
        if(i == n-1 && j == m-1) {
            ans.push_back(s);
            return;
        }

        // Mark as visited
        vis[i][j] = 1;
        
        // Recursive Case
        solve(i+1, j, n, m, s+'D', vis, mat); // Move Down
        solve(i, j+1, n, m, s+'R', vis, mat); // Move Right
        solve(i-1, j, n, m, s+'U', vis, mat); // Move Up
        solve(i, j-1, n, m, s+'L', vis, mat); // Move Left
        
        // Unmark the current cell
        vis[i][j] = 0;
    }
  
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        if(mat[0][0] == 0) {
            vector<string> result;
            result.push_back("-1");
            return result;
        }
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        solve(0, 0, n, m, "", vis, mat);
        
        if (ans.size() == 0) {
            ans.push_back("-1");
        }
        
        return ans;
    }
};
