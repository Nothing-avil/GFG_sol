class Solution {
  public:
    void dfs(int node,vector<vector<int>>& adj,vector<int> &vis,vector<int> &res){
        res.push_back(node);
        vis[node] = 1;
        
        for(auto it : adj[node]){
            if(!vis[it]) dfs(it,adj,vis,res);
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
       int n = adj.size();
       vector<int> vis(n,0), res;
       
       dfs(0,adj,vis,res);
       
       return res;
    }
};
