class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int c =0;
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            int r = target - arr[i];
            if(mp.find(r) != mp.end()){
                c += mp[r];
            }
            mp[arr[i]]++;
        }
        return c;
    }
};
