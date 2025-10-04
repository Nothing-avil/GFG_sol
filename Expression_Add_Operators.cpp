class Solution {
  public:
    void fn(int x, string S, int target, vector<string>& res, string t, long long a, long long y){
        if(x==S.size()){
            if(y==target)
            res.push_back(t);
            
            return;
        }
        string z="";
        long long c=0;
        for(int i=x; i<S.size(); i++){
            if(i>x && S[x]=='0')
            break;
            z+=S[i];
            c=c*10+S[i]-'0';
            if(x==0)
            fn(i+1, S, target, res, t+z, c, c);
            else{
                fn(i+1, S, target, res, t+"+"+z, c, y+c);
                fn(i+1, S, target, res, t+"-"+z, -c, y-c);
                fn(i+1, S, target, res, t+"*"+z, a*c, y-a+a*c);
            }
        }
        return;
    }
  
    vector<string> findExpr(string &s, int target) {
        vector<string> res;
        string t="";
        long long a=0;
        fn(0, s, target, res, t, a, 0);
        return res;
    }
};
