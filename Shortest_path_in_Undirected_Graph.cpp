class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<vector<int>>adj(N+1);
        for(auto &x:edges){
           adj[x[0]].push_back(x[1]);
           adj[x[1]].push_back(x[0]);
        }
        queue<int>pq;
        pq.push(src);
        vector<int>dist(N,INT_MAX);
        dist[src]=0;
        while(!pq.empty()){
            int node=pq.front();
            pq.pop();
            for(auto &x:adj[node]){
                if(dist[x]>dist[node]+1){
                    dist[x]=dist[node]+1;
                    pq.push(x);
                }
            }
        }
        for(auto &x:dist) {
            if(x==INT_MAX)x=-1;
        }
        return dist;
    }
};
