class Solution {
  public:
    string roundToNearest(string str) {
        int n=str.size();
        if(str[n-1] <= '5'){
            str[n-1] = '0';
            return str;
        }
        int i= n-2;
        bool c =true;
        str[n-1] = '0';
        while(i>=0 && c){
            if(str[i]=='9'){
                str[i] = '0';
                i--;
            }
            else{
                str[i] = str[i]+1;
                c = false;
            }
        }
        if(c){
            str = '1' + str;
        }
        return str;
    }
};
