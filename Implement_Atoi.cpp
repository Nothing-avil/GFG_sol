class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int j=0;
        int len = s.length();
        bool sign =false;
        
        while(j<len && s[j] == ' ') j++;
        if(s[j] == '-'){
            sign =true;
            j++;
        }
        else if(s[j] == '+'){
            j++;
        } 
        for(int i=j;i<s.size();i++){
            if(s[i]<'0'||s[i]>'9'){
                return -1;
            }
        }
        long long dig =0;
        while(j<len && s[j] >='0' && s[j] <='9'){
            dig*=10;
            dig+=(s[j]-'0');
            if(dig >=INT_MAX || dig <= INT_MIN) break;
            j++;
            
        }
        if(sign) dig*=-1;
        if(dig >=  INT_MAX) return INT_MAX;
        if(dig <= INT_MIN) return INT_MIN;
        return int(dig);
    }
};
