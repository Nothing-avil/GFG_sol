class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i : arr){
            if(!mp.count(i)){
                res.push_back(i);
            }
            mp[i]++;
        }
        return res;
    }
};
