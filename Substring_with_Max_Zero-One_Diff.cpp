class Solution {
  public:
    int maxSubstring(string &s) {
        int zero=0, one=0;
        int maxi=0;
        
        for(char &ch:s){
            if(ch=='0'){
                zero++;
            }
            else{
                one++;
                if(one>zero){
                    one=0;
                    zero=0;
                }
            }
            maxi=max(maxi, zero-one);
        }
        
        return maxi==0?-1:maxi;
    }
};
