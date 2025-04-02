class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        queue<int> qu;
        vector<int> res;
        bool vis[10001] = {false};
        qu.push(0);
        vis[0] = true;
        while(qu.size()){
            int i = qu.front();
            qu.pop();
            res.push_back(i);
            for(int a : adj[i]){
                if(vis[a] == false){
                    qu.push(a);
                    vis[a] = true;
                }
            }
        }
        return res;
    }
};
