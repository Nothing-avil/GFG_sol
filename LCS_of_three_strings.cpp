class Solution{
    public:

        int LCSof3 (string A, string B, string C, int x, int y, int z)
        {
            int dp[x+1][y+1][z+1]= {0};
            for(int i=0; i<=x; i++){
                for(int j=0; j<=y; j++){
                    for(int k=0; k<=z; k++){
                        if(i==0 || j==0|| k==0){
                            dp[i][j][k]=0;
                        }
                        else if((A[i-1]==B[j-1]) && (B[j-1]==C[k-1])){
                            dp[i][j][k]= 1+ dp[i-1][j-1][k-1];
                        }
                        else{
                            dp[i][j][k]= max(max(dp[i-1][j][k], dp[i][j-1][k]), dp[i][j][k-1]);
                        }
                    }
                }
            }
            return dp[x][y][z];
        }
};
