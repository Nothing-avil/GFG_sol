class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat, vector<vector<int>>& opr) {
        int n = mat.size();
        int m = mat[0].size();
        int l = opr.size();
        vector<vector<int>> res(n, vector<int>(m, 0));
        for(int i=0; i<l; i++){
            int v = opr[i][0];
            int r1 = opr[i][1];
            int c1 = opr[i][2];
            int r2 = opr[i][3];
            int c2 = opr[i][4];
            res[r1][c1]+=v;
            if(r2+1<n)res[r2+1][c1]-=v;
            if(c2+1<m)res[r1][c2+1]-=v;
            if(r2+1<n && c2+1<m)res[r2+1][c2+1]+=v;
        }
        for(int i=1;i<m;i++)res[0][i]+=res[0][i-1];
        for(int i=1;i<n;i++)res[i][0]+=res[i-1][0];
        for(int i =1;i<n;i++){
            for(int j=1;j<m;j++){
                res[i][j]+=res[i-1][j]+res[i][j-1]-res[i-1][j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)res[i][j]+=mat[i][j];
        }
        return res ;
    }
};
