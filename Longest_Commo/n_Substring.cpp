class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        int n= str1.size(), m=str2.size(), ans=0;
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(str1[i]==str2[j]){
                    dp[i+1][j+1]=1+dp[i][j];
                    ans=max(ans, dp[i+1][j+1]);
                }
            }
        }
        return ans;
    }
};
