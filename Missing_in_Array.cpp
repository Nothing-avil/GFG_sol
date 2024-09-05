class Solution {
  public:
    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        int sum = n*(n+1)/2;
        int sum2= accumulate(arr.begin(), arr.end(), 0);
        return sum-sum2;
    }
};
