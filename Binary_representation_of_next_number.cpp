class Solution {
  public:
  
    string check(string& s){
        int j = 0;
        while (j < s.size() && s[j] == '0') {
            j++;
        }
        return s.substr(j);
    }
  
    string binaryNextNumber(string s) {
        
        int n= s.size()-1;
        int c=0;
        
        if(s[n]=='0'){
            s[n]= '1';
            s= check(s);
            return s;
        }
        else{
            s[n]='0';
            c=1;
        }
        n--;
        while(n>=0){
            if(c==1){
                if(s[n]=='0'){
                    s[n]='1';
                    s= check(s);
                    return s;
                }
                else{
                    s[n]='0';
                    c=1;
                }
                n--;
            }
        }
        
        s= '1'+s;
        s= check(s);
        return s;
    }
};
