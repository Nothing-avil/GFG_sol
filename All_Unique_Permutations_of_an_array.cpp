class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>>store;
        sort(arr.begin(),arr.end());
        do{
            store.push_back(arr);
        }while(next_permutation(arr.begin(),arr.end()));
        return store;
    }
};
