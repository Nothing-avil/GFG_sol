// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    int n= mat.size();
    for(int i=0; i<n/2; i++){
        vector<int> t= mat[i];
        mat[i] = mat[n-i-1];
        mat[n-i-1] = t;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int t = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = t;
        }
    }
}
