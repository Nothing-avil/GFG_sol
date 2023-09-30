class Solution
{   
    public:
    void booleanMatrix(vector<vector<int> > &matrix){
        int R=matrix.size();
        int C= matrix[0].size();
        unordered_map<int, bool> r;
        unordered_map<int, bool> c;
        for(int i=0; i<R;i++){
            for(int j=0; j<C; j++){
                if(matrix[i][j]==1){
                    r[i]=true;
                    c[j]=true;
                }
            }
        }
        
        for(int i=0; i<R;i++){
            for(int j=0; j<C; j++){
                if(r[i] || c[j]){
                    matrix[i][j]=1;
                }
            }
        }
    }
};
