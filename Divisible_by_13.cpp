class Solution {
  public:
    bool divby13(string &s) {
        int answer = 0;
        for(char ch : s){
            answer = (answer * 10 + (ch - '0'))%13;
        }
        return answer == 0;
    }
};
