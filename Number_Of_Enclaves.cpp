class Solution {
  public:
    void dfs(vector<vector<int>> &grid,int i,int j,int n,int m)
    {
        if(grid[i][j]==2)return;
        grid[i][j]=2;
        
        if(i+1<n && grid[i+1][j]>0)dfs(grid,i+1,j,n,m);
        if(j+1<m && grid[i][j+1]>0)dfs(grid,i,j+1,n,m);
        if(i-1>=0 && grid[i-1][j]>0)dfs(grid,i-1,j,n,m);
        if(j-1>=0 && grid[i][j-1]>0)dfs(grid,i,j-1,n,m);
    }
    
  public:
    int numberOfEnclaves(vector<vector<int>> &grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][0]==1)dfs(grid,i,0,n,m);
                if(grid[i][m-1]==1)dfs(grid,i,m-1,n,m);
                if(grid[0][j]==1)dfs(grid,0,j,n,m);
                if(grid[n-1][j]==1)dfs(grid,n-1,j,n,m);
            }
        }
        
        int ans=0;
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends
