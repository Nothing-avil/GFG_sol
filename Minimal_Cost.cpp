class Solution {
    public:
  int solve(int k,int i,vector<int>& arr,vector<int>&dp){  // Initialize dp array with -1){
       
        if(i == 0) return 0; // Base case: No cost to be at the start
    if(dp[i] != -1) return dp[i]; // Return cached result
         int ans=INT_MAX;
        int n=k;
        for(int j=i-1;n!=0 && j>=0;j--){
            
           ans=min(ans,solve(k,j,arr,dp)+abs(arr[i]-arr[j]));
            n--;
        

        }
        return dp[i]=ans;
    }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n=arr.size();
    vector<int> dp(n, -1);  // Initialize dp array with -1
        return solve(k,n-1,arr,dp);
    }
};
