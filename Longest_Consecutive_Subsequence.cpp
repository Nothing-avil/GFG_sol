class Solution {
  public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int maxi = *max_element(arr.begin(), arr.end());
        int dp[maxi] = {0};
        for(int i : arr){
            dp[i]++;
        }
        int ans = 0, c=0;
        for(int i =0; i<=maxi; i++){
            if(dp[i] > 0){
                c++;
            }
            else{
                ans = max(ans, c);
                c=0;
            }
        }
        ans = max(ans, c);
        return ans;
    }
};
