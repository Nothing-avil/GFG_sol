class Solution {
public:
    
    long long solve(int i,int j,int n,int k,vector<vector<int>> &arr,vector<vector<vector<int>>>&dp){
         if(i>=n or j>=n or k<0)return 0;
         if(i==n-1 and j==n-1)return k==arr[i][j];
         if(dp[i][j][k]!=-1)return dp[i][j][k];
         
         long long left=solve(i,j+1,n,k-arr[i][j],arr,dp);
         long long down=solve(i+1,j,n,k-arr[i][j],arr,dp);
         return dp[i][j][k]=left+down;
    }
    
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(n,vector<int>(k+1,-1)));
        long long ans = solve(0,0,n,k,arr,dp);
        return ans;
    }
};
