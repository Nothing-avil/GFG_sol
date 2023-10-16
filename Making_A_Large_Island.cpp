class Solution
{
public:
    void dfs(int i, int j, int n, vector<vector<int>>& grid, vector<vector<int>>& vis, int color)
    {
        if(i<0 || i==n || j<0 || j==n || grid[i][j]==0 || vis[i][j])
        {
             return;
        }
        grid[i][j] = color;
        vis[i][j] = 1;
        dfs(i-1,j,n,grid,vis,color);
        dfs(i,j+1,n,grid,vis,color);
        dfs(i+1,j,n,grid,vis,color);
        dfs(i,j-1,n,grid,vis,color);
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size(), color = 1, ans = 0;
        unordered_map<int,int> m;
        vector<vector<int>> vis(n,vector<int>(n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] && !vis[i][j]){
                    dfs(i,j,n,grid,vis,color++);
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
              if(grid[i][j]){
                m[grid[i][j]]++;
                ans = max(ans,m[grid[i][j]]);
              }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0){
                    unordered_map<int,int> done;
                    int curr = 1;
                    if(i > 0 && done.count(grid[i-1][j]) == 0){
                        curr += m[grid[i-1][j]];
                        done[grid[i-1][j]] = 1;
                    }
                    if(j<n-1 && done.count(grid[i][j+1]) == 0){
                         curr += m[grid[i][j+1]];
                         done[grid[i][j+1]] = 1;
                    }
                    if(i<n-1 && done.count(grid[i+1][j]) == 0){
                         curr += m[grid[i+1][j]];
                         done[grid[i+1][j]] = 1;
                    }
                    if(j>0 && done.count(grid[i][j-1]) == 0)
                    {
                         curr += m[grid[i][j-1]];
                         done[grid[i][j-1]] = 1;
                    }
                    ans = max(ans,curr);
                }
            }
        }
        return ans;
    }
};
