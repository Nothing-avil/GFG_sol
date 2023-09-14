class Solution{

	public:
	int mod=1e9+7;
	 int f(int i,int v[],int n,int k,vector<vector<int>>&dp){
        if(i==n) return !k;
        if(dp[i][k] != -1) return dp[i][k]%mod;
        return dp[i][k] = (((v[i]<=k)?(f(i+1,v,n,k-v[i],dp)%mod):0) + f(i+1,v,n,k,dp)%mod)%mod;
    }
    int perfectSum(int v[], int n, int sum)
    {
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return f(0,v,n,sum,dp)%mod;
    }
	  
};
