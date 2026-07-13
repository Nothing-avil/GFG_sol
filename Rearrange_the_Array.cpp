class Solution {
  static const int mod = 1e9 + 7;
    
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        
        return gcd(b, a%b);
    }
  public:
    int minOperations(vector<int> &b) {
        // code here
        int ans = 0, lcm = 1, n = b.size();
        
        vector<bool> visited(n+1, false);
        
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                int len = 0, curr = i;
                
                while (!visited[curr]) {
                    visited[curr] = true;
                    len++;
                    curr = b[curr-1];
                }
                
                lcm = (lcm / gcd(lcm, len)) * len;
            }
        }
        
        return lcm%mod;
    }
};
