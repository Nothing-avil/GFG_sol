class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &m) {
        vector<int> v;
        int row_s=0, row_e= m.size()-1;
        int col_s =0, col_e= m[0].size()-1;
        while(row_s <= row_e && col_s <= col_e){
            for (int i = col_s; i <= col_e; i++) {
                v.push_back(m[row_s][i]);
            }
            row_s++;
            for (int i = row_s; i <= row_e; i++) {
                v.push_back(m[i][col_e]);
            }
            col_e--;
            if (row_s <= row_e) {
                for (int i = col_e; i >= col_s; i--) {
                    v.push_back(m[row_e][i]);
                }
                row_e--;
            }
            if (col_s <= col_e) {
                for (int i = row_e; i >= row_s; i--) {
                    v.push_back(m[i][col_s]);
                }
                col_s++;
            }
        }
        return v;
    }
};
