class Solution {
  public:
    int findWinner(int n, int x, int y) {
        int dp[n+1]= {0};
        for(int i=0; i<n; i++){
            if(dp[i]==0){
                dp[i+1]=1;
                if(i+x <= n){
                    dp[i+x]=1;
                }
                if(i+y<=n){
                    dp[i+y]=1;
                }
            }
        }
        return dp[n];
    }
};
