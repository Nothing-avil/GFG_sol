class Solution{
public:
    int solve(vector<vector<int>> &m,int i,int j,vector<vector<int>>&dp){
        int row=m.size();
        int col=m[0].size();
        if(i<0 || i>=row || j<0 || j>=col)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int r=m[i][j]+solve(m,i,j+1,dp);
        int ru=m[i][j]+solve(m,i-1,j+1,dp);
        int rd=m[i][j]+solve(m,i+1,j+1,dp);
        return dp[i][j]= max(r,max(ru,rd));
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int res=INT_MIN;
        for(int i=0;i<M.size();i++){
            res=max(res,solve(M,i,0,dp));
        }
        return res;
       
    }
};
