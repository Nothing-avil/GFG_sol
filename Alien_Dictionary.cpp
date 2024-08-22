class Solution {
  public:
    void DFS(int u,vector<bool>&visit,stack<int>&st,vector<int>adj[]){
    
      visit[u]=true;
      for(auto v:adj[u]){
          if(visit[v]==false)
          DFS(v,visit,st,adj);
      }
      st.push(u);
    }
    string findOrder(string dict[], int n, int k) {
        vector<int>adj[k];
        for(int i=0;i<n-1;i++){
            string str1=dict[i];
            string str2=dict[i+1];
            int len=min(str1.length(),str2.length());
            for(int j=0;j<len;j++){
                if(str1[j]!=str2[j]){
                    adj[str1[j]-'a'].push_back(str2[j]-'a');
                    break;
                }
            }
        }
        stack<int>st;
        vector<bool>visit(k,false);
        for(int i=0;i<k;i++){
            if(visit[i]==false)
            DFS(i,visit,st,adj);
        }
        string str="";
        while(st.empty()==false){
            str=str+char(st.top()+'a');
            st.pop();
        }
        return str;
    }
};
