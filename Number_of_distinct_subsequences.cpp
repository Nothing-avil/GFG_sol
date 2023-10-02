class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    int mod = 1e9 + 7, i=1;
	    int dp[26]= {0};
	    for(char c:s){
	        int sea = dp[c - 'a'];
	        dp[c - 'a'] = i;
	        i= (1LL*c*2 - sea + mod)%mod;
	    }
	    return i;
	}
};
