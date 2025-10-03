class Solution {
  public:
    void helper(int i, int n, vector<string> &mp, vector<int> &arr, string &tmp, vector<string> &ans) {
        if(i == n) {
            ans.push_back(tmp);
            return;
        }
        if(mp[arr[i]] == "") {
            helper(i + 1, n, mp, arr, tmp, ans);
            return;
        }
        for(int k = 0; k < mp[arr[i]].length(); k++) {
            tmp += mp[arr[i]][k];
            helper(i + 1, n, mp, arr, tmp, ans);
            tmp = tmp.substr(0, tmp.size() - 1);
        }
    }
  public:
    vector<string> possibleWords(vector<int> &arr) {
        int n = arr.size();
        vector<string> mp(10), ans;
        mp = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string tmp = "";
        helper(0, n, mp, arr, tmp, ans);
        return ans;
    }
};
