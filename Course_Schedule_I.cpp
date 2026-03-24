class Solution {
  public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        for (auto& p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }
        vector<int> state(n, 0);  
        for (int i = 0; i < n; ++i) {
            if (state[i] != 0) continue;
            stack<pair<int, int>> st;  
            st.push({i, 0});
            state[i] = 1;
            while (!st.empty()) {
                auto& [node, idx] = st.top();
                if (idx == adj[node].size()) {
                    state[node] = 2;
                    st.pop();
                    continue;
                }
                int next = adj[node][idx++];
                if (state[next] == 1) return false;  
                if (state[next] == 0) {
                    state[next] = 1;
                    st.push({next, 0});
                }
            }
        }
        return true;
    }
};
