class Solution {
  public:
  
    void solve(vector<int>& val, int n){
        int i=0;
        while(n>0){
            int r=n%2;
            if(r==1){
                val[i]+=1;
            }
            n=n/2;
            i++;
        }
    }
    
    long long call(vector<int>& val){
        long long res=0LL;
        long long ans=1LL;
        for(int i=0;i<32; i++){
            if(val[i]>=1){
                res+=ans;
            }
            ans= ans*2LL;
        }
        return res;
    }
    
    long long reversedBits(long long x) {
        vector<int>val(32, 0);
        solve(val, x);
        reverse(val.begin(), val.end());
        long long res= call(val);
        return res;
    }
};
