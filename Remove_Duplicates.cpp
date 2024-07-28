// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        int res[26] ={0};
        for(char ch : str){
            res[ch-'a']++;
        }
        string s ="";
        for(char ch : str){
            if(res[ch-'a']>0){
                s+=ch;
                res[ch-'a']=0;
            }
        }
        return s;
    }
};
