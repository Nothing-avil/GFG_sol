// User function Template for C++

class Solution {
  public:
    int nCr(int n, int r) {
        const int mod = 1e9 + 7;
        if(r > n){
            return 0;
        }
        vector<int> prev(r + 1), pres(r + 1);
        prev[0] = pres[0] = 1;
        if(r == 0 || r == n){
            return 1;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=r; j++){
                pres[j] = (prev[j-1] + prev[j])%mod;
            }
            prev = pres;
        }
        return prev[r];
    }
};
