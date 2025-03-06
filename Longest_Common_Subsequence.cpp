class Solution {
  public:
    int lcs(string &s1, string &s2) {
        int n = s1.size(), m = s2.size();
        vector<vector<int>> lcs(n+1, vector<int>(m+1));
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(s1[i-1] == s2[j-1]){
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                }else{
                    lcs[i][j] = max(lcs[i][j-1], lcs[i-1][j]);
                }
            }
        }
        return lcs[n][m];
    }
};
