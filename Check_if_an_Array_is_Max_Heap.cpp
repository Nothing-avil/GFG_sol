class Solution {
  public:
    bool isMaxHeap(vector<int> &arr) {
        int n= arr.size();
        for (int i=0; i<n; i++){
            if ((2*i+1<n && arr[i]<arr[2*i+1]) || (2*i+2<n && arr[i]<arr[2*i+2])) return false;
        }
        return true;
    }
};
