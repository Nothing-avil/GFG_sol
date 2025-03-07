// User function Template for C++

class Solution {
  public:
    int longestPalinSubseq(string &s) {
        int n = s.size();
        string s1 = s;
        reverse(s1.begin(), s1.end());
        vector<vector<int>> lps(n+1, vector<int>(n+1));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(s[i-1] == s1[j-1]){
                    lps[i][j] = lps[i-1][j-1] +1;
                }else{
                    lps[i][j] = max(lps[i-1][j], lps[i][j-1]);
                }
            }
        }
        return lps[n][n];
    }
};
