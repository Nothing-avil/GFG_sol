class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        
        vector<int> adjRev[V];
        int indegree[V] = {0};
        for(int i=0;i<V;i++){
            for(auto it:adj[i])
            {
                adjRev[it].push_back(i);
                indegree[i]++;
            }
        }
        vector<int>ans;
        queue<int>q;
        
        for(int i=0;i<V;i++){
            if(indegree[i]==0)
            q.push(i);
        }
       
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto nbr:adjRev[node])
            {
                indegree[nbr]--;
               
                if(indegree[nbr]==0)
                q.push(nbr);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
