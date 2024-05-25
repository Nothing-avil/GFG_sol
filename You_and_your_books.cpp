class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        int i = 0;
        long long sandy =0;
        while(i <n){
            long long temp =0;
            while(i <n && arr[i]<= k){
                temp += arr[i];
                i++;
            }
            sandy = max(sandy,temp);
            i++;
        }
        return sandy;
    }
};
