class Solution {
  public:
    string removeSpaces(string& s) {
        int i=0, j=0, n = s.size();
        while(j < n){
            if(s[j] != ' '){
                s[i] = s[j];
                i++;
            }
            j++;
        }
        return string(s.begin(), s.begin() + i);
    }
};
