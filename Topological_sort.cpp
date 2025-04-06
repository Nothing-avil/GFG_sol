class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj(V);
        vector<bool> vis(V, false);
        for(auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
        }
        stack<int> st;
        function<void(int)> call = [&](int i){
            vis[i] = true;
            for(int it : adj[i]){
                if(!vis[it]){
                    call(it);
                }
            }
            st.push(i);
        };
        for(int i=0; i<V; i++){
            if(!vis[i]){
                call(i);
            }
        }
        vector<int> res;
        for(int i=0; i<V; i++){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};
