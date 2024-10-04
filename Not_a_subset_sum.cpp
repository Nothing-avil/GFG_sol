class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        long long ans = 1;
        for(int i=0; i<arr.size() && arr[i]<=ans; i++){
            ans += arr[i];
        }
        return ans;
    }
};
