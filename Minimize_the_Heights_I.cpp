// User function Template for C++

class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int ans = arr[n-1] - arr[0];
        int ma, mi;
        for(int i=1; i<n; i++){
            ma = max(arr[n-1]-k, arr[i-1]+k);
            mi = min(arr[0]+k, arr[i]-k);
            ans = min(ans, ma-mi);
        }
        return ans;
    }
};
