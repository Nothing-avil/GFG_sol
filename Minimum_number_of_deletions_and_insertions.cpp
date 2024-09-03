class Solution{
	public:
	int minOperations(string str1, string str2) 
	{
	    vector<vector<int>> dp(str1.size()+1, vector<int>(str2.size()+1, 0));
	    for(int i=1; i<dp.size(); i++){
	        for(int j=1; j<dp[0].size(); j++){
	            if(str1[i-1] == str2[j-1]){
	                dp[i][j] = 1 + dp[i-1][j-1];
	            }else{
	                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	            }
	        }
	    }
	    int commonLen = dp[str1.size()][str2.size()];
	    return (str1.length()-commonLen) + (str2.length()-commonLen);
	} 
};
