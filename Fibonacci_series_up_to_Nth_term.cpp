class Solution {
  public:
    vector<int> Series(int n) {
        int mod=1e9+7;
        vector<int> res{0,1};
        int a=0, b=1, c=0;
        for(int i=2; i<=n; i++){
            c=(a+b)%mod;
            a=b%mod;
            b=c%mod;
            res.push_back(b);
        }
        return res;
    }
};
