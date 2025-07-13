class Solution {
  public:
    int nonLisMaxSum(vector<int>& arr) {
        int n  = arr.size();
        vector<pair<int,int>>dp(n);
        int maxLen = 0;
        int minSum = 0;
        int totalSum = 0;
        for(int i = 0 ;  i < n ; i++){
            int len = 0;
            int sum = 0;
            totalSum += arr[i];
            for(int j = i-1 ; j >= 0 ; j--)
            {
                if(arr[i] > arr[j] && dp[j].first >= len){
                    if(dp[j].first > len){
                        len = dp[j].first;
                        sum = dp[j].second;
                    }
                    else if(dp[j].second < sum){
                        sum = dp[j].second;
                    }
                }
            }
            len++;
            sum += arr[i];
            dp[i] = {len,sum};
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(dp[i].first >= maxLen){
                if(dp[i].first > maxLen){
                    minSum = dp[i].second;
                    maxLen = dp[i].first;
                }
                else{
                    minSum = min(minSum, dp[i].second);
                }
            }
        }
        return totalSum - minSum;
    }
};
