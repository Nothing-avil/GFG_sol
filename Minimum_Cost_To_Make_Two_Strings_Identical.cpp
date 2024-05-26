class Solution {

  public:
    int findMinCost(string x, string y, int costX, int costY) {
        int n = x.size();
        int m = y.size();
        
        vector<int> dp0(m+1, 0), dp1(m+1,0);
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(x[i-1] == y[j-1]) dp1[j]=dp0[j-1]+1;
                else dp1[j] = max(dp1[j-1], dp0[j]);
            }
            dp0 = dp1;
        }
        
        return costX * (n-dp1[m]) + costY * (m-dp1[m]);
    }
};
