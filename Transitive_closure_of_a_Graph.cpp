class Solution{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        vector<vector<int>> closure=graph;
    
        for (int i = 0; i < N; i++) {
            closure[i][i]=1;
        }
        for (int k = 0; k < N; k++) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (closure[i][k] && closure[k][j]) {
                        closure[i][j] = 1;
                    }
                }
            }
        }
    
        return closure;
    }
};
