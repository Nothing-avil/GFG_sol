class Solution {
  public:
    int shortCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (auto &edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int ans = INT_MAX;
        for (int src = 0; src < V; ++src) {
            vector<int> dist(V, -1);
            vector<int> parent(V, -1);
            queue<int> q;
            dist[src] = 0;
            q.push(src);
            while (!q.empty()) {
                int node = q.front(); q.pop();
                for (int adjNode : adj[node]) {
                    if (dist[adjNode] == -1) {
                        dist[adjNode] = dist[node] + 1;
                        parent[adjNode] = node;
                        q.push(adjNode);
                    } else if (adjNode != parent[node]) {
                        int cycle_len = dist[node] + dist[adjNode] + 1;
                        ans = min(ans, cycle_len);
                    }
                }
            }
        }
        if (ans == INT_MAX) return -1;
        return ans;
    }
};
