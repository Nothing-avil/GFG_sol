class Solution {
  public:
    int maxMinDiff(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int lo = 0, hi = 1e5;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int prv = arr[0], cnt = 1;
            for(int i=1;i<arr.size();i++){
                if(arr[i]-prv >= mid) {
                    prv = arr[i];
                    cnt++;
                }
            }
            if(cnt >= k) lo = mid+1;
            else hi = mid-1;
        }
        return hi;
    }
};
