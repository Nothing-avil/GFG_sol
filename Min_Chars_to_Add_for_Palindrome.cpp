class Solution {
  public:
    int minChar(string s) {
        int i=0, j= s.size()-1, n= s.size();
        while( j>=0){
            if(s[i] == s[j]){
                i++;
            }
            j--;
        }
        if(i == n){
            return 0;
        }
        string ss = s.substr(i);
        return ss.size() + minChar(s.substr(0, i));
    }
};
