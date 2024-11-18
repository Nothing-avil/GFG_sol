class Solution {
  public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size(), j=0;
        int move = d%n;
        vector<int> lo(n);
        for(int i=move; i<n; i++){
            lo[j++] = arr[i];
        }
        for(int i=0; i<move; i++){
            lo[j++] = arr[i];
        }
        for(int i=0; i<n; i++){
            arr[i] = lo[i];
        }
    }
};
