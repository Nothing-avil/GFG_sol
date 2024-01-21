class Solution{
    public:
         bool checkCover(int n, int k, int m, vector<vector<int>> &adj){
            int set = (1 << k) - 1;
            int limit = (1 << n);
            bool visited[n + 1][n + 1];
            while(set < limit){
                memset(visited, 0, sizeof(visited));
                int cnt = 0; 
                for(int j = 1, v = 1; j < limit; j = j << 1, v++){
                    if(set & j){
                        for(int k = 1; k <= n; k++){
                            if(adj[v][k] && !visited[v][k]){
                                visited[v][k] = 1;
                                visited[k][v] = 1;
                                cnt++;
                            }
                        }
					}
				}
				if(cnt == m){
				    return true;
				}
				int c = set & -set;
				int r = set + c;
				set = (((r ^ set) >> 2) / c) | r;
			}
			return false;
        }

        int vertexCoverHelper(vector<vector<int>> &adj, int n, int m){
            int low = 1, high = n;
            while(high > low){
                int mid = (low + high) >> 1;
                if(checkCover(n, mid, m, adj)){
                    high = mid;
                }else{
                    low = mid + 1;
                }
            }
            return low;
        }
        int vertexCover(int n, vector<pair<int, int>> &edges){
            int m = edges.size();
            vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
            for(int i = 0; i < m; i++){
                adj[edges[i].first][edges[i].second] = 1;
                adj[edges[i].second][edges[i].first] = 1;
            }
            return vertexCoverHelper(adj, n, m);
        }
};
