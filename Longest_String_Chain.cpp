class Solution {
  public:
    int longestStringChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](string& a, string& b){
            return a.size() < b.size();
        });
        unordered_map<string, int> dp;
        int ans = 0;
        for(string s : words){
            int len = 0;
            for(int i=0; i<s.size(); i++){
                string p = s.substr(0, i) + s.substr(i+1);
                len = max(len,dp[p]);
            }
            dp[s] = len + 1;
            ans = max(ans, dp[s]);
        }
        return ans;
    }
};
