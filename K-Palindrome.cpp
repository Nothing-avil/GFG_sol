class Solution{
public:
    vector<vector<int>> res;

    int solver(string& s, int l, int r){
        if(l>=r){
            return 0;
        }
        if(res[l][r]!=-1){
            return res[l][r];
        }
        if(s[l]==s[r]){
            res[l][r]= solver(s, l+1, r-1);
        }
        else{
            res[l][r]= 1 + min(solver(s, l+1, r), solver(s, l, r-1));
        }
        return res[l][r];
    }
    
    int kPalindrome(string str, int n, int k){
        res.resize(n, vector<int>(n, -1));
        return solver(str, 0, n-1)<=k;
    }
};
