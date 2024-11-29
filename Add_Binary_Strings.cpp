// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        if(s1.size() < s2.size()){
            return addBinary(s2, s1);
        }
        int n = s1.size()-1;
        int m = s2.size()-1;
        int carry = 0;
        string s = "";
        while(n>=0 && m>=0){
            if(s1[n] == '1' && s2[m] == '1'){
                if(carry == 1){
                    s = "1" + s;
                }
                else{
                    s = "0" + s;
                }
                carry=1;
            }
            else if(s1[n] == '0' && s2[m] == '0'){
                if(carry == 1){
                    s = "1" + s;
                    carry=0;
                }
                else{
                    s = "0" + s;
                }
            }
            else{
                if(carry == 1){
                    s = "0" + s;
                }
                else{
                    s = "1" + s;
                }
            }
            n--;
            m--;
        }
        while(n>=0){
            if(carry == 1){
                if(s1[n] == '1'){
                    s = "0" + s;
                }else{
                    s = "1" + s;
                    carry = 0;
                }
            }
            else{
                s = s1[n] + s;
            }
            n--;
        }
        if(carry == 1){
            s = "1" + s;
            carry = 0;
        }
        while(s[carry] == '0'){
            carry++;
        }
        s.erase(0, carry);
        return s;
    }
};
