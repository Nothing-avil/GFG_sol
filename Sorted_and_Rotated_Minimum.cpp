class Solution {
  public:
    int findMin(vector<int>& arr) {
        return *min_element(arr.begin(), arr.end());
    }
};
