class Solution {
  public:
    int smallestSubstring(string S) {
        int n= S.size();
        if(n<3){
            return -1;
        }
        int res= INT_MAX;
        char st= S[0];
        int len=1;
        for(int i=1; i<n-1; i++){
            char ch= S[i];
            char chs= S[i+1];
            if(ch==chs){
                len++;
            }
            else if(st==ch||st==chs){
                len=1;
                st=ch;
            }
            else{
                res= min(res, len+2);
                len=1;
                st=ch;
            }
        }
        return res==INT_MAX?-1:res;
    }
};
