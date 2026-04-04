class Solution {
  public:
    vector<string> graycode(int n) {
        vector<string> ans = {"0", "1"};
        for (int i = 2; i <= n; i++) {
            int size = ans.size();
            for (int j = size-1; j >= 0; j--) {
                ans.push_back('1'+ans[j]);
                ans[j] = '0'+ans[j];
                
            }
        }
        return ans;
    }
};
