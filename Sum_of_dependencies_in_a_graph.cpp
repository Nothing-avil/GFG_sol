class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int V) {
        int cnt=0;
        for(int i=0;i<V;i++)
            cnt+=adj[i].size();
        return cnt;
    }
};
