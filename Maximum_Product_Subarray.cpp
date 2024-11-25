// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        int l =1;
        int r = 1;
        int ans = arr[0];
        for(int i=0; i<n; i++){
            if(l == 0){
                l = 1;
            }
            if(r == 0){
                r= 1;
            }
            l*=arr[i];
            r*= arr[n-i-1];
            ans = max(ans, max(l, r));
        }
        return ans;
    }
};
