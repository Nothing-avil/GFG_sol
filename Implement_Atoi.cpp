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

// Another 

class Solution {
  public:
    int myAtoi(char *s) {
        int i=0;
        while(s[i] == ' ' && s[i] == '\0'){
            i++;
        }
        int position = 1;
        if(s[i] == '-' || s[i] == '+'){
            position = 1 - 2*(s[i] == '-');
            i++;    
        }
        int value = 0;
        while(s[i] >= '0' && s[i] <= '9' && s[i] != '\0'){
            if(value > INT_MAX/10 || (value == INT_MAX/10 && s[i] > '7')){
                return (position == -1) ? INT_MIN : INT_MAX;
            }
            value = value*10 + (s[i++] - '0');
        }
        return value*position;
    }
};
