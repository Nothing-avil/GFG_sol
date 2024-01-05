class Solution{
	int M = 1000000007;
    
	public:
	int TotalWays (int n) {
	    long long a = 1, b = 1;
	    
	    for (int i = 1; i <= n; i++) {
	        long long cur = (a + b) % M;
	        a = b;
	        b = cur;
	    }
	    
	    return (b * b) % M;
	}
};
