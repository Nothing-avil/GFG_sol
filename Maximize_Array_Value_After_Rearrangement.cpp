class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // const int mod= 1e9+7;
        sort(arr.begin(), arr.end());
        long sum=0;
        long mod=1000000007;
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=((arr[i]%mod)*i)%mod;
            sum=((sum%mod)+arr[i])%mod;
        }
        return sum;
    }
};
