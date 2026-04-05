class Solution {
  public:
    int totalWays(vector<int>& arr, int target) {
        int total=0;
        for(int num:arr)
            total+=num;
        if(abs(target)>total) return 0;
        if((total+target)%2!=0) return 0;
        int req=(target+total)/2;
        vector<int> dp(req + 1);
        dp[0]=1;
        for(int num:arr){
            for(int sum=req;sum>=num;sum--){
                dp[sum]+=dp[sum-num];
            }
        }
       return dp[req];
    }
};
