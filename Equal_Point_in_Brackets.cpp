class Solution {
  public:
    int findIndex(string &s) {
        int rightClosing = 0;
        for(char c: s){
            if(c == ')') rightClosing++;
        }
        if(rightClosing ==0 ) return 0;
        if(rightClosing == s.size()) return s.size();
        int leftOpen = 0;
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            if(leftOpen == rightClosing) return i;
            if(c=='(') leftOpen++;
            if(c == ')') rightClosing--;
        }
        return s.size();
    }
};
