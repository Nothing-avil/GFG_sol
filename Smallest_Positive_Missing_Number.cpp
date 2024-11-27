class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        int dp[100001] = {0};
        for(int i : arr){
            if(i < 0){
                continue;
            }
            else{
                dp[i]++;
            }
        }
        for(int i= 1; i<100001; i++){
            if(dp[i] < 1){
                return i;
            }
        }
    }
};
