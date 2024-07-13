vector<pair<int,int>>adj[n+1];
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,
            greater<pair<int,int>>>pq;
        
        pq.push({0,1});
        vector<int>dis(n+1,INT_MAX),par(n+1);
        for(int i=1; i<n+1;i++){
            par[i]=i;
        }
        dis[1]=0;
        while(!pq.empty()){
            auto it=pq.top();
            int node=it.second;
            int dist=it.first;
            pq.pop();
            
            for(auto it:adj[node]){
                int adjnode=it.first;
                int weight=it.second;
                if(dist+weight<dis[adjnode]){
                    dis[adjnode]=dist+weight;
                    pq.push({dist+weight,adjnode});
                    par[adjnode]=node;
                }
            }
        }
        if(dis[n]==INT_MAX) return {-1};
        vector<int >path;
        int node=n;
        while(par[node]!=node){
            path.push_back(node);
            node=par[node];
        }
        path.push_back(1);
        path.push_back(dis[n]);
        reverse(path.begin(),path.end());
        return path;
