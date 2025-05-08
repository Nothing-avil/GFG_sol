// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        for(int i=1; i<n-1; i++){
            if(arr[i+1] - arr[i] > arr[i] - arr[i-1]){
                return arr[i] + (arr[i] - arr[i-1]);
            }
        }
        return arr[n-1] + arr[1] - arr[0];
    }
};
