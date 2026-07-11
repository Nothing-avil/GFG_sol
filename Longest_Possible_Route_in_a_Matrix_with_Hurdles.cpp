class Solution {
  public:
  int n, m;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int dfs(vector<vector<int>>& mat, vector<vector<bool>>& vis,
        int x, int y, int xd, int yd) {
        if (x == xd && y == yd)
            return 0;
        vis[x][y] = true;
        int ans = -1;
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx >= 0 && nx < n &&
                ny >= 0 && ny < m &&
                mat[nx][ny] == 1 &&
                !vis[nx][ny]) {
                int cur = dfs(mat, vis, nx, ny, xd, yd);
                if (cur != -1)
                    ans = max(ans, cur + 1);
            }
        }
        vis[x][y] = false;
        return ans;
    }
    int longestPath(vector<vector<int>>& mat, int xs, int ys, int xd, int yd) {
        n = mat.size();
        m = mat[0].size();
        if (mat[xs][ys] == 0 || mat[xd][yd] == 0)
            return -1;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        return dfs(mat, vis, xs, ys, xd, yd);
    }
};
