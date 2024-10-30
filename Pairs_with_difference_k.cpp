// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i : arr){
            ans += mp[i+k];
            ans+= mp[i-k];
            mp[i]++;
        }
        return ans;
    }
};
