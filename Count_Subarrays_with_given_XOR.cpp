class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        long ans =0;
        map<int, int> mp;
        int res=0;
        for(int i : arr){
            res^= i;
            ans += mp[res^k];
            if(res == k){
                ans++;
            }
            mp[res]++;
        }
        return ans;
    }
};
