class Solution {
  public:
    int maxScore(string &s, vector<vector<char>> &jumps) {
        int n = s.size();
        unordered_set<unsigned char> chars;
        for (char c : s) chars.insert((unsigned char)c);
        vector<long long> pref(n + 1, 0);
        vector<int> a(n);
        for (int i = 0; i < n; i++) a[i] = s[i], pref[i + 1] = pref[i] + a[i];
        unordered_map<unsigned char, vector<long long>> prefC;
        for (unsigned char c : chars) prefC[c].assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            unsigned char c = s[i];
            for (auto &p : prefC) p.second[i + 1] = p.second[i];
            prefC[c][i + 1] += a[i];
        }
        unordered_map<unsigned char, vector<unsigned char>> allow;
        for (unsigned char c : chars) allow[c].push_back(c);
        for (auto &p : jumps)
            if (chars.count(p[0]) && chars.count(p[1]))
                allow[p[0]].push_back(p[1]);
        unordered_map<unsigned char, vector<int>> nxt;
        for (unsigned char c : chars) nxt[c].assign(n + 1, -1);
        unordered_map<unsigned char, int> last;
        for (unsigned char c : chars) last[c] = -1;
        for (int i = n - 1; i >= 0; i--) {
            last[(unsigned char)s[i]] = i;
            for (auto &p : last) nxt[p.first][i] = p.second;
        }
        vector<long long> dp(n, -1e18);
        dp[0] = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] < 0) continue;
            unsigned char c = s[i];
            for (unsigned char ch : allow[c]) {
                int j = nxt[ch][i + 1];
                if (j == -1) continue;
                long long score = (pref[j] - pref[i]) - (prefC[ch][j] - prefC[ch][i]);
                dp[j] = max(dp[j], dp[i] + score);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
