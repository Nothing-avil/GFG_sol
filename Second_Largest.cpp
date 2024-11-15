class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int maxs = -1, ans=-1;
        for(int i=0; i<n; i++){
            maxs = max(arr[i], maxs);
        }
        for(int i=0; i<n; i++){
            if(arr[i]!=maxs){
                ans = max(arr[i], ans);}
        }
        return ans;
    }
};
