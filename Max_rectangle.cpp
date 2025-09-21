class Solution {
  public:
    int maxArea(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();
        int ans = 0;
        vector<int> height(col, 0);
        vector<int> st; 
        st.reserve(col + 1);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (mat[i][j] == 0)
                    height[j] = 0;
                else
                    height[j]++;
            }
            st.clear();
            for (int j = 0; j <= col; j++) {
                int h = (j == col) ? 0 : height[j];
                while (!st.empty() && height[st.back()] > h) {
                    int index = st.back();
                    st.pop_back();
                    int width = st.empty() ? j : (j - st.back() - 1);
                    int area = height[index] * width;
                    if (area > ans) ans = area;
                }
                st.push_back(j);
            }
        }
        return ans;
    }
};
