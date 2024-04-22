class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        int maxi= 1;
        int idx=1000;
        for(int i=0; i<n; i++){
            int c=0;
            for(int j=0; j<m; j++){
                if(a[i][j]==1){
                    c++;
                }
            }
            if(c<idx){
                maxi= i+1;
                idx=c;
            }
        }
        
        return maxi;
    }
};
