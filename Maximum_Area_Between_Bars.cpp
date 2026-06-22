class Solution {
  public:
    int maxArea(vector<int> &height) {
        int res = INT_MIN;
        int n = height.size();
        int i = 0, j = n-1;
        while(i < j){
            res = max(res, min(height[i], height[j]) * (j-i-1));
            if(height[i] >= height[j]){
                j--;
            } else {
                i++;
            }
        }
        return res;
    }
};
