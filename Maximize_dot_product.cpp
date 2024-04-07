class Solution{
		
	public:
	int code(int n, int m, int a[], int b[], int i, int j, int k, vector<vector<int>>& dp){
	    int res=INT_MIN;
	    if(i>=n || j>=m){
	        return 0;
	    }
	    if(dp[i][j]!=-1){
	        return dp[i][j];
	    }
	    if((n-m)> k){
	        res= max(res, code(n, m, a, b, i+1, j, k+1, dp));
	    }
	    res= max(res, (a[i]*b[j])+code(n, m, a, b, i+1, j+1, k, dp));
	    return dp[i][j]=res;
	}
	
	int maxDotProduct(int n, int m, int a[], int b[]) { 
	    int i=0;
	    int j=0;
	    int k=0;
	    vector<vector<int>> dp(n, vector<int>(m, -1));
	    return code(n, m, a, b, 0, 0, 0, dp);
	} 
};
