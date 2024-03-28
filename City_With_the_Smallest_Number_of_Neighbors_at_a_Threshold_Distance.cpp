class Solution {
public:
    int dijkstra(int curr, int& n, int& distThreshold, vector<vector<pair<int, int>>>& graph) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        vector<int> vis(n, 0);
        pq.push({0, curr});
        
        int cnt = 0;
        while (!pq.empty()) {
            int dist = pq.top().first; 
            int node = pq.top().second;
            pq.pop();
            
            if (vis[node]) 
                continue;
                
            vis[node] = 1;
            if (dist > distThreshold) 
                continue;
            ++cnt;
            
            for (auto itr : graph[node]) {
                int nodeDist = itr.first;
                int nextNode = itr.second;
                if (!vis[nextNode]) 
                    pq.push({dist + nodeDist, nextNode});
            }
        }
        return cnt;
    }
    
    int findCity(int n, int m, vector<vector<int>>& edges, int distThreshold) {
        vector<vector<pair<int, int>>> graph(n);
        
        for (auto &itr : edges) {
            graph[itr[0]].push_back({itr[2], itr[1]});
            graph[itr[1]].push_back({itr[2], itr[0]});
        }
        
        int out = -1, nax = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int cnt = dijkstra(i, n, distThreshold, graph);
            
            if (cnt <= nax) {
                nax = cnt;
                out = i;
            }
        }
        return out;
    }
};
