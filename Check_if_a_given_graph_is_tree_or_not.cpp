class Solution {
  public:
    void solve(int i, vector<int>& dag, vector<int> res[], int arr[]){
        arr[i]=1;
        dag.push_back(i);
        for(auto id: res[i]){
            if(!arr[id]) {
                solve(id, dag, res, arr);
            }
        }
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        if(n!=m+1){
            return 0;
        }
        vector<int> res[n];
        for(auto id: adj){
            res[id[0]].push_back(id[1]);
            res[id[1]].push_back(id[0]);
        }
        vector<int> dag;
        int arr[n]= {0};
        solve(0, dag, res, arr);
        for(int i=0; i<n; i++) {
            if(arr[i]==0){
                return 0;
            }
        }
        return 1;
    }
};
