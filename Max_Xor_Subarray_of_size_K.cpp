class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int sum = 0;
        int n = arr.size();
        for(int i=0;i<k-1;i++){
            sum^=arr[i];
        }
        int ans = 0;
        int start = 0;
        int end = k-1;
        while(end<n){
            sum^=arr[end];
            ans=max(ans,sum);
            end++;
            sum^=arr[start];
            start++;
        }
        return ans;
    }
};
