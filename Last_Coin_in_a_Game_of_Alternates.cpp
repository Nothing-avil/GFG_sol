class Solution {
  public:
    int coin(vector<int>& arr) {
        return *min_element(arr.begin(),arr.end());
    }
};
