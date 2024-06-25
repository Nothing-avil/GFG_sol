class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        for(int i=0;i<mat.size();i++){
            int t=0;
            while (t!=k){
                mat[i].push_back(mat[i][t]);
                t++;
            }
            auto it1 = mat[i].begin();
            auto it2 = mat[i].begin()+k;
            mat[i].erase(it1,it2);
        }
        return mat;
    }
};
