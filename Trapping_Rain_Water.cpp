class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        vector<int> l(n), r(n);
        l[0] = arr[0];
        for(int i=1; i<n; i++){
            l[i] = max(l[i-1], arr[i]);
        }
        r[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            r[i] = max(r[i+1], arr[i]);
        }
        int c = 0;
        for(int i=0; i<n; i++){
            int mini = min(l[i], r[i]);
            c += abs(mini - arr[i]);
        }
        return c;
    }
};
