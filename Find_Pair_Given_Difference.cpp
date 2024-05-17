class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int i =0;
        int j = 1;
        while(j < n && i < n){
            if(arr[j]-arr[i] == x && i != j)return 1;
            else if(arr[j]-arr[i] < x)j++;
            else {
                i++;
            }
        }
        return -1;
    }
};
