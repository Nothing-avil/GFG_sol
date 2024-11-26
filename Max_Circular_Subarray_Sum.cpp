class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int sum=0;
        int maxi = 0;
        int mini = 0;
        int maxisum = INT_MIN;
        int minisum = INT_MAX;
        for(int i : arr){
            sum += i;
            maxi += i;
            mini += i;
            maxisum = max(maxisum, maxi);
            minisum = min(minisum, mini);
            if(maxi < 0 ){
                maxi = 0;
            }
            if(mini > 0){
                mini = 0;
            }
        }
        return max(sum - minisum, maxisum);
    }
};
