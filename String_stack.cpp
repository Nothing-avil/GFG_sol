class Solution {
  public:
    bool stringStack(string &pat, string &tar) {
        int i = pat.size()-1;
        int j = tar.size()-1;
        
        int c = 0;
        while (i >= 0  && j >= 0) {
            if (pat[i] == tar[j] && c%2 == 0){
                c = 0;
                j--;
            } else {
                c++;
            }
            
            i--;
        }
        
        return j < 0;
    }
};
