class Solution {
public:
	unordered_map<int, vector<int>> adj;
    
    int total = 0;
    int solve(int curr, int prev = -1) {
        int ans = 0;
        for(auto i : adj[curr]) {
            if(i != prev) {
                int res = solve(i, curr); 
                if(res%2 == 0) {
                    total++;
                }
                else {
                    ans += res;
                }
            }
        }
        
        return ans + 1;
    }
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    for(auto i : edges) {
	        int s = i[0];
	        int e = i[1];
	        adj[s].push_back(e);
	        adj[e].push_back(s);
	    }
	    solve(1);
	    return total;
	}
};
