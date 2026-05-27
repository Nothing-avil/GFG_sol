class Solution {
  public:
    bool wifiRange(string &s, int x) {
        int cancover=0,iwant=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cancover=x;
                iwant=0;
            }
            else{
                cancover--;
                if(cancover<0) iwant++;
                if(iwant>x) return false;
            }
        }
        if(iwant>0 || cancover<0) return false;
        return true;
    }
};
