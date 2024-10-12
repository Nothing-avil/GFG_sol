class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        int n= arr.size();
        int ans = -1;
        for(int i=1; i<n; i++){
            ans = max(ans, arr[i]+arr[i-1]);
        }
        return ans;
    }
};
