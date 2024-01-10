class Solution{
public:	
	int longSubarrWthSumDivByK(int nums[], int n, int k)
	{
	    unordered_map<int, int> dp;
        int sum = 0;
        dp[0] = -1;
        int result = 0;
        for(int i = 0; i<n; i++) {
            sum += nums[i];
            int rem = sum%k;
            if(rem < 0) {
                rem += k;
            }
            if(dp.find(rem) != dp.end()) {
                result = max(result, i - dp[rem]); //1
            } else {
                dp[rem] = i;
            }
        }
        return result;
	}
};
