class Solution{
public:
    long long mod= 1000000007;
    long long j=1;
    long long solve(int n){
        long long sum=1;
        for(int i=0; i<n; i++){
            sum = (sum*j)%mod;
            j++;
        }
        return sum%mod;
    }
    
    long long sequence(int n){
        long long sum=0;
        for(int i=1; i<=n; i++){
            sum = (sum + solve(i))%mod;
        }
        return sum%mod;
    }
};
