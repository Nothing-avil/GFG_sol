class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int>pre(n+1);
        pre[0]=0;
        for(int i=1;i<=n;i++) pre[i]=pre[i-1]+arr[i-1];
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int low=arr[i];
            int high=arr[i]+k;
            int ub=upper_bound(arr.begin(),arr.end(),high)-arr.begin();
            int left=pre[i];
            int right=(pre[n]-pre[ub]-(n-ub)*high);
            ans=min(ans,left+right);
        }
        return ans;
    }
};
