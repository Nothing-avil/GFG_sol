class Solution {
  public:
  const int mod= 1e9+7;
    long long int findMaxProduct(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        long long ans = 0;
        
        int n = arr.size();
        if(n==1) return arr[0];
        int i= n-1;
        for( ; i>=0; i--){
            if(arr[i] < 0) break;
            if(arr[i] == 0) continue;
            
            if(ans == 0) ans+=arr[i];
            else ans = (ans * arr[i]) % mod;
        }
        
        if((i+1)%2 != 0) i--;
        
        while(i>=0){
            if(ans == 0) ans+=abs(arr[i]);
            else ans = (ans * abs(arr[i])) % mod;
            i--;
        }
        
        return ans;
    }
};
