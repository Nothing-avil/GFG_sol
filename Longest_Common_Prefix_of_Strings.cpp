class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        string str="";
        int c=INT_MAX;
        for(string s: arr){
            if(c>s.size()){
                c=s.size();
            }
        }
        int b=0;
        bool check = true;
        for(int i=0; i<c; i++){
            check =true;
            for(int j=1; j<arr.size(); j++){
                if(arr[j][i] != arr[0][i]){
                    check= false;
                    c=0;
                    break;
                }
            }
            if(check){
                b++;
            }
            if(b==0){
                return "-1";
            }
            if(c==0){
                break;
            }
        }
        return arr[0].substr(0, b);
    }
};
