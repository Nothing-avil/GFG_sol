class Solution
{
public:
    int dp[501][501];
    int result(int i, int j){
        if(i<0 || j<0){
            return 0;
        }
        if(i==0 && j==0){
            return 1;
        }
        if(dp[i][j]!= -1){
            return dp[i][j];
        }
        int left= result(i-1, j);
        int right = result(i, j-1);
        return dp[i][j] = (left+ right) % 1000000007;
    }
    
    int ways(int x, int y)
    {
        memset(dp, -1, sizeof(dp));
        result(x, y);
        return dp[x][y];
    }
};
