class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i=0, j =n-1;
        long long sum =0 ;
        while(i<=j){
            sum += (abs(arr[i++] - arr[j--]))*2;
        }
        return sum;
    }
};
