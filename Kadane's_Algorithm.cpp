class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int c=0;
        int sumd = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            c+=arr[i];
            if(c<arr[i]){
                c=arr[i];
            }
            sumd= max(sumd, c);
        }
        return sumd;
    }
};
