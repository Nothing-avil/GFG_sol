class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> pre) 
    {
        vector<vector<int>> g(n);
        vector<int> ind(n,0);
        queue<int> q;
        vector<int> ans;
        
        for(auto x:pre){
            g[x[1]].push_back(x[0]);
            ind[x[0]]++;
        }
        
        for(int i=0; i<n; i++){
            if(ind[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            ans.push_back(f);
            for(auto x:g[f]){
                ind[x]--;
                if(ind[x] == 0) q.push(x);
            }
        }
        
        if(ans.size()!=n) return {};
        return ans;
    }
};
