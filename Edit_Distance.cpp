class Solution {
  public:
    int editDistance(string str1, string str2) {
        int x=str1.size()-1;
        int y=str2.size()-1;
        vector<vector<int>> dp(x+5, vector<int>(y+5, -1));
        function<int(int, int)> solver =[&](int n, int m){
            if(n==-1){
                return m+1;
            }
            if(m==-1){
                return n+1;
            }
            if(dp[n][m] != -1){
                return dp[n][m];
            }
            if(str1[n] == str2[m]){
                return dp[n][m] = solver(n-1, m-1);
            }
            int v1= solver(n-1, m-1);
            int v2= solver(n, m-1);
            int v3= solver(n-1, m);
            return dp[n][m] = 1+  min(v1, min(v2,v3));
        };
        return solver(x, y);
    }
};
