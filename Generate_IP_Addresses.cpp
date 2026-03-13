class Solution {
  public:
    void solve(int i, int cnt, string& s, string t, int num, vector<string>& ans){
        
        if (i == s.size()){
            if (cnt == 3) ans.push_back(t);
            return;
        }

        int val = num * 10 + (s[i] - '0');

        // extend current segment (only if no leading zero)
        if (num != 0 && val <= 255){
            solve(i + 1, cnt, s, t + s[i], val, ans);
        }

        // put dot -> start new segment
        if (cnt < 3){
            solve(i + 1, cnt + 1, s, t + "." + s[i], s[i] - '0', ans);
        }
    }

    vector<string> generateIp(string &s) {
        vector<string> ans;

        if (s.size() < 4 || s.size() > 12) return ans;

        solve(1, 0, s, string(1, s[0]), s[0] - '0', ans);

        return ans;
    }
};
