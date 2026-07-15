class Solution {
  public:
    int bitonic(vector<int> &arr) {
         int n = arr.size();
        vector<int> incr(n,0);
        for(int i=1; i<n; i++) {
            if(arr[i]>=arr[i-1]) incr[i] = incr[i-1];
            else incr[i] = i;
        }
        int curr = n-1;
        int ans = curr-incr[n-1]+1;
        for(int i=n-2; i>=0; i--) {
            if(arr[i]<arr[i+1]) curr = i;
            ans = max(ans, curr-incr[i]+1);
        }
        return ans;
    }
};
