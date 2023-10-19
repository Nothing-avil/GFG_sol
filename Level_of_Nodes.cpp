class Solution
{
	public:
	//Function to find the level of node X.
	int dfs(int node, int lev, vector<int>& vis, vector<int> adj[], int X){
	    if(node==X){
	        return lev;
	    }
	    vis[node]=1;
	    
	    for(auto it: adj[node]){
	        if(!vis[it]){
	            int level= dfs(it , lev+1 , vis , adj , X);
	            if(level != -1){
	                return level;
	            }
	        }
	    }
	    return-1;
	}
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    vector<int> vis(V , 0);
	    return dfs(0 , 0 , vis , adj , X);
	}
};
