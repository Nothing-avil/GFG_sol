class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int mod=1e9+7;
    long f(int n, vector<int>&dp){
        if(n<0){
            return 0;
        }
        if(n==1|| n==0){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n]%mod;
        }
        else{
            long a= f(n-1,dp)%mod;
            long b= f(n-2,dp)%mod;
            long c= f(n-3,dp)%mod;
            return dp[n]=(a+b+c)%mod;
        }
    }
    long long countWays(int n)
    {
        int count=0;
        
        vector<int>dp(n+1,-1);
        return f(n,dp)%mod;
    }
};
