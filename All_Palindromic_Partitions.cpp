class Solution {
  public:
  bool isPalindrome(const string &s, int start, int end) {
        while (start < end) {
            if (s[start++] != s[end--]) return false;
        }
        return true;
    }
    void dfs(int i, string &s, vector<string> &path, vector<vector<string>> &res) {
        if (i == s.length()) {
            res.push_back(path);
            return;
        }
        for (int j = i; j < s.length(); ++j) {
            if (isPalindrome(s, i, j)) {
                path.push_back(s.substr(i, j - i + 1));
                dfs(j + 1, s, path, res);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> palinParts(string &s) {
        vector<vector<string>> res;
        vector<string> path;
        dfs(0, s, path, res);
        return res;
    }
};
