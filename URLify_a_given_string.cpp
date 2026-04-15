class Solution {
  public:
    string URLify(string &s) {
        string ans = "";
        for(char  i : s){
            if(i == ' '){
                ans = ans + "%20";
            }
            else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};
