class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        string s = s1;
        int c=1;
        while(s.size()<s2.size()){
            s+=s1;
            c++;
        }
        if(s.find(s2) != string::npos){
            return c;
        }
        s+=s1;
        c++;
        if(s.find(s2) != string::npos){
            return c;
        }
        return -1;
    }
};
