class Solution{
public:
    void solve(int a, int x, vector<int>& res){
        res.push_back(a);
        if(a > 0 && x){
            solve(a-5, 1,  res);
        }
        else if(a != res[0]){
            solve(a+5, 0, res);
        }
    }
    vector<int> pattern(int N){
        vector<int> res;
        solve(N, 1, res);
        return res;
    }
};
