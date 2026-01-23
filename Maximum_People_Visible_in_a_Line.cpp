class Solution {
  public:
    int maxPeople(vector<int> &arr) {
        int n = arr.size();
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int>t;
        for(int i=0;i<n;i++){
            if(maxi == arr[i]) t.push_back(i);
        }
        
        if(t.size() == 1) return n;
        int m = t.size();
        int ans = (t[0] + 1) + (t[1] - t[0] - 1);
        for(int i=1;i<m-1;i++){
            ans = max(ans , t[i] - t[i-1] + t[i+1] - t[i] - 1);
        }
        
        ans = max(ans , t[m-1] - t[m-2] + n - t[m-1] - 1);
        
        return ans;
    }
};
