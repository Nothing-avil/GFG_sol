class Solution
{
    public:
    
    int mod= 1e9+7;
    int padovanSequence(int n){
        int res[1000001]={0};
        res[0]=1;
        res[1]=1;
        res[2]=1;
        for(int i=3; i<=n; i++){
            res[i] = (res[i-2]+res[i-3])%mod;
        }
        return res[n];
    }
    
};
