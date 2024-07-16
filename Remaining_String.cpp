// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        for(int i=0; i<s.size(); i++){
            if(s[i]==ch){
                count--;
            }
            if(count==0){
                return string(s, i+1);
            }
        }
        return "";
    }
};
