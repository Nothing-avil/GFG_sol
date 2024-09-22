class Solution {
  public:
    int lps(string str) {
        int p = 0;
        int s = 1;
        int cnt = 0;
        int pos = 1;
        int n = str.size();
        while(p < n && s < n) {
            if(str[p] == str[s]) {
                cnt++;
                p++;
                s++;
            } else {
                cnt = 0;
                pos++;
                s = pos;
                p = 0;
            }
        }

        return cnt;
    }
};
