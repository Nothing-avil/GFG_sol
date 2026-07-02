class Solution {
	public:
	bool divisibleByK(vector<int>& arr, int k) {
		vector<bool> dp(k, false);
		for (int &val: arr) {
			int rem = val % k;
			if (rem == 0) {
				return true;
			}
			vector<bool> next(dp);
			next[rem] = true;
			for (int i = 0; i < k; i++) {
				if (dp[i]) {
					int rem2 = (rem + i) % k;
					if (rem2 == 0) {
						return true;
					}
					next[rem2] = true;
				}
			}
			dp = next;
		}
		return dp[0];
	}
};
