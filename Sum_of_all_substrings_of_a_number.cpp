class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        int mod= 1e9+7;
        long long count=0;
        int n=s.size();
        vector<long long> sum(n);
        sum[0]=s[0]-'0';
        count= sum[0];
        for(int i=1; i<n; i++){
            sum[i] = ((sum[i-1]*10)%mod + ((s[i]-'0')*(i+1))%mod)%mod;
            count=(count+sum[i])%mod;
        }
        return count;
    }
};
