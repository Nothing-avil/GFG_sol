class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {int l = 0, r =0;
        int c = 0;
        int res = 0;
        while(r<arr.size()){
            if(arr[r] == 0){
                c++;
            }
            while(c > k){
                if(arr[l] == 0){
                    c--;
                }
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};
