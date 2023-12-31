class Solution{
public:
int find(int i , int arr[],int target,vector<vector<int>>&dp){
        if(target==0) return true;
     if(i==0){
         return arr[0]==target;
     }
     if(dp[i][target]!=-1) return dp[i][target];
     int pick = 0;
     if(target>=arr[i]){
        pick= find(i-1,arr,target-arr[i],dp);
     }
     int notpick = find(i-1,arr,target,dp);
     return  dp[i][target]=pick || notpick;
 }
    int equalPartition(int n, int arr[])
    {
       int sum =0;
       for(int i=0;i<n;i++){
           sum+=arr[i];
       }
       if(sum%2!=0) return 0;
       vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
      return find(n-1,arr,sum/2,dp);
    }
