class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.'
    int findPar(vector<int>& parent,int node){
        if(parent[node] == node) return node;
        
        return parent[node] = findPar(parent,parent[node]);
    }
    bool unionSet(int i,int j,vector<int>& parent){
        int u = findPar(parent,i);
        int v = findPar(parent,j);
        
        if(u != v){
            parent[u] = v;
            return false;
        }
        
        return true;
    }
	int detectCycle(int V, vector<int>adj[])
	{
	    vector<int> parent(V);
        for(int i=0;i<V;i++){
            parent[i] = i;
        }
        
        for(int i=0;i<V;i++){
            for(int j=0;j<adj[i].size();j++){
                //i<adj[i][j] to handle case for 1->2 and 2->1 not considre as cycle
                if(i<adj[i][j] && unionSet(i,adj[i][j],parent)){
                    return 1;
                }
            }
        }
        
        return 0;
	}
};
