class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
         vector<vector<int>> ans(V);
        for(int i = 0; i < edges.size(); i++){
            int a=edges[i].first;
            int b=edges[i].second;
            ans[a].push_back(b);
            ans[b].push_back(a);
        }
        return ans;
    }
};
