class Solution {
  public:
    int n,m;
    int col[3] = {-1,0,1};
    bool check(int i,int j){
        return (i>=0 && i<n && j>=0 && j<m);
    }
    
    int maxChocolate(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m, -1)));
        for(int j=0;j<m;j++){
            for(int r=0;r<m;r++){
                dp[n-1][j][r] = grid[n-1][j]+grid[n-1][r];
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                for(int r=0;r<m;r++){
                    int temp = 0;
                    for(int k=0;k<3;k++){
                        if(check(i+1,j+col[k])){
                            for(int l=0;l<3;l++){
                                if(check(i+1,r+col[l]) && ((r+col[l])!=(j+col[k]))){ 
                                    int a = dp[i+1][j+col[k]][r+col[l]];
                                    temp = max(temp,a);
                                }
                            }
                        }
                    }
                    dp[i][j][r]=temp+grid[i][j]+grid[i][r];
                }
            }
        }
        return dp[0][0][m-1];
    }
};
