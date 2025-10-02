class Solution {
  public:
    vector<vector<int>> combinationSum(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        function<void(int, int, int)> f = [&](int n, int k, int l){
            if(v.size()==k){
                if(n==0) ans.push_back(v);
                return;
            }
            for(int i=l+1;i<=9;i++) {
                v.push_back(i);
                f(n-i,k,i);
                v.pop_back();
            }
        };
        f(n,k,0);
        return ans;
    }
};
