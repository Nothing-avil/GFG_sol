class Solution {
  public:
    vector<int> minHeightRoot(int V, vector<vector<int>>& edges) {
        if (V == 1) return {0};
        
        vector<int> deg(V, 0);
        vector<vector<int>> adj(V);
        
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
            ++deg[e[0]];
            ++deg[e[1]];
        }
        
        queue<int> q;
        for (int i = 0; i < V; ++i)
            if (deg[i] == 1) q.push(i);
        
        vector<int> res;
        
        while (!q.empty()) {
            res.clear();
            int sz = q.size();
            
            while (sz--) {
                int u = q.front(); q.pop();
                res.push_back(u);
                
                for (int v : adj[u])
                    if (--deg[v] == 1) q.push(v);
            }
        }
        return res;
    }
};
