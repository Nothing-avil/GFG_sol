class Solution{
    
    int Find(int u, vector<int> &parent){
        if(parent[u] == u) return u;
        return parent[u] = Find(parent[u], parent);
    }
    int Union(int pu, int pv, vector<int> &parent, vector<int> &size){
        int ans = size[pu] * size[pv];
        if(size[pu] >= size[pv]){
            parent[pv] = pu;
            size[pu] += size[pv];
            } else { 
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        return ans;
    }
public:
vector<int> maximumWeight(int n, vector<vector<int>> edges, int q, vector<int> &queries){
    int m = edges.size();
    unordered_map<int, vector<pair<int, int>>> mp;
    int maxi = INT_MIN
    for(int i = 0; i < m; i++){
        mp[edges[i][2]].push_back({edges[i][0], edges[i][1]});
        maxi = max(maxi, edges[i][2]);
    }
    vector<int> parent(n + 1, 0), size(n + 1, 1);
    for(int i = 0; i <= n; i++) {
        parent[i] = i;
    }
    vector<int> temp(maxi + 1, 0);
    for(int i = 0; i <= maxi; i++){
        if(i != 0) temp[i] += temp[i - 1];
        if(mp.count(i) != 0){
            for(auto it : mp[i]){
                int pu = Find(it.first, parent);
                int pv = Find(it.second, parent);
                if(pu != pv) {
                    temp[i] += Union(pu, pv, parent, size);
 
                }
            }
        }
    }
    vector<int> ans(q, 0);
    for(int i = 0; i < q; i++){
        if(queries[i] <=  maxi) ans[i] = temp[queries[i]]; 
        else ans[i] = temp[maxi];
    }
    
    return ans;
}
};
