class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        vector<int> leftmax(n), rightmax(n), leftmin(n), rightmin(n);
        leftmax[0] = leftmin[0] = arr[0];
        rightmax[n-1] = rightmin[n-1] = arr[n-1];,
        for(int i=1; i<n; i++){
            int j = n-i-1;
            leftmin[i] = min(leftmin[i-1], arr[i]);
            leftmax[i] = max(leftmax[i-1], arr[i]);
            rightmax[j] = max(rightmax[j+1], arr[j]);
            rightmin[j] = min(rightmin[j + 1], arr[j]);
        }
        int ans = 1e9;
        for(int i=0; i<=n-k; i++){
            int x, y;
            if(i == 0){
                x = rightmin[i + k];
                y = rightmax[i + k];
            }else if(i + k == n){
                x = leftmin[i-1];
                y = leftmax[i-1];
            }else{
                x = min(leftmin[i-1], rightmin[i + k]);
                y = max(rightmax[i + k], leftmax[i -1]);
            }
            ans = min(ans, y-x);
        }
        return ans;
    }
};
