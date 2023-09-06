class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(int vertex, vector<int> g[], vector<bool> &vis){
        vis[vertex] = true;
        for(auto child: g[vertex]){
            if (vis[child]) continue;
            dfs(child, g, vis);
        }
    }
    
	int findMotherVertex(int k, vector<int>adj[])
	{
	    vector<bool> trip(k, false);
	    int ans=0;
	    for(int i=0; i<k; i++){
	        if (!trip[i]) {
	            dfs(i, adj, trip); 
	            ans=i;
	        }
	    }
	    fill(trip.begin(), trip.end(), false);
	    dfs(ans, adj, trip);
	    for(auto val: trip) if (!val) return -1;
	    return ans;
	    
	    
	}

};
