class Solution {
  public:
    string armstrongNumber(int n) {
        int res=0;
        int nn=n;
        while(nn>0){
            int a= nn%10;
            res = res + a*a*a;
            nn=nn/10;
        }
        if(res==n){
            return "true";
        }
        return "false";
    }
};
