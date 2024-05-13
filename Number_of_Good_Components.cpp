class Solution {
  public:
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        vector<set<int>> vertices(v);
        for(int i = 0; i < v; i++) vertices[i].insert(i);
        for(auto edge : edges) {
            vertices[edge[0]-1].insert(edge[1]-1);
            vertices[edge[1]-1].insert(edge[0]-1);
        }
        
        map<set<int>, int> sets;
        for(auto vertice : vertices) {
            auto it = sets.find(vertice);
            if(it != sets.end()) it->second--;
            else sets[vertice] = vertice.size();
        }
        
        int components = 0;
        for (auto it = sets.begin(); it != sets.end(); ++it) {
            components += (it->second == 1);
        }
        return components;
    }
};
