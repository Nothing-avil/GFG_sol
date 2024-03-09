class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        while(r--){
            string str="";
            for(int i=0;i<n+2; i++){
                if(s[i]=='1'){
                    str+="10";
                }
                else if(s[i]=='0'){
                    str+="01";
                }
            }
            s=str;
        }
        return s[n];
    }
};
