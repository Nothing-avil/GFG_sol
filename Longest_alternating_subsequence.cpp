class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        if (arr.size() == 0) {
            return 0;
        }
        int up = 1;
        int down = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[i - 1]) {
                up = down + 1;
            }
            else if (arr[i] < arr[i - 1]) {
                down = up + 1;
            }
        }
        return max(up, down);
    }
};
