class Solution {
  public:
  
    long long determinant(vector<vector<double>>& mat, int size) {
        
        double det = 1;
        
        for (int i = 0; i < size; i++) {
            
            int pivot = i;
            
            for (int j = i; j < size; j++) {
                if (abs(mat[j][i]) > 1e-9) {
                    pivot = j;
                    break;
                }
            }
            
            if (abs(mat[pivot][i]) < 1e-9)
                return 0;
            
            if (pivot != i) {
                swap(mat[pivot], mat[i]);
                det *= -1;
            }
            
            det *= mat[i][i];
            
            for (int j = i + 1; j < size; j++) {
                
                double factor = mat[j][i] / mat[i][i];
                
                for (int k = i; k < size; k++) {
                    mat[j][k] -= factor * mat[i][k];
                }
            }
        }
        
        return round(det);
    }
  
    int countSpanTree(int n, vector<vector<int>>& edges) {
        
        if (n == 1)
            return 1;
        
        vector<vector<double>> lap(n, vector<double>(n, 0));
        
        for (auto &e : edges) {
            
            int u = e[0];
            int v = e[1];
            
            lap[u][u]++;
            lap[v][v]++;
            
            lap[u][v]--;
            lap[v][u]--;
        }
        
        vector<vector<double>> cof(n - 1, vector<double>(n - 1));
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                cof[i][j] = lap[i][j];
            }
        }
        
        return determinant(cof, n - 1);
    }
};
