class Solution{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    int ans=0;
	    vector<int> dp(n, -1);
	    dp[0]=arr[0];
	    
	    for(int i=0; i<n; i++){
	        dp[i]= arr[i];
	        for(int j=0; j<i; j++){
	            if(arr[j]< arr[i]){
	                dp[i]= max(dp[i], dp[j]+arr[i]);
	            }
	        }
	        ans= max(ans, dp[i]);
	    }
	    return ans;
	}  
};
