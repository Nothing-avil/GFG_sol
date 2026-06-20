class Solution {
  public:
    int getLastDigit(string& a, string& b) {
        if(b=="0")return 1;
        int last_digit= a.back()-'0';
        int mod= 0;
        for(char ch: b){
            mod= (mod*10 + (ch-'0'))%4;
        }
        if(mod==0){
            mod=4; 
        }
        int ans=1;
        for(int i=0; i<mod; i++){
            ans= (ans*last_digit) %10;
        }
        return ans;
    }
};
