class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()%2!=0){
            return false;
        }
        vector<int> dp(k+1, 0);
        int n= nums.size();
        for(int i=0; i<n; i++){
            int x= nums[i]%k;
            dp[x]++;
            dp[k-x]--;
        }
        for(int i=1; i<k; i++){
            if(dp[i]!=0){
                return false;
            }
        }
        return true;
    }
};
