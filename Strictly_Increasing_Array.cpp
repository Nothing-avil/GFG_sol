class Solution {
  public:

    int min_operations(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        vector<int> dp(n, 1);
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j] && (nums[i]-nums[j])>=(i-j)){
                    dp[i]=max(1+dp[j],dp[i]);
                    count=max(count, dp[i]);
                }
            }
        }
        return (n-count);
    }
};
