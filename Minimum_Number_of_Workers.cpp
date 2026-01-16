class Solution {
  public:
    int minMen(vector<int>& arr) {
        vector<int>v(100010 , -1);
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] == -1)
                continue;
            int l = max(0 , i - arr[i]);
            int r = min(n - 1 , i + arr[i]);
            v[l] = max(v[l] , r);
        }
        if(v[0] == -1)
            return -1;
        int curr = v[0] , cnt = 1;
        int j = 1;
        while(curr < n - 1){
            int maxi = v[curr + 1];
            while(j <= curr)
                maxi = max(maxi , v[j++]);
            if(maxi <= curr)
                return -1;
            curr = maxi;
            cnt++;
        }
        return cnt;
    }
};
