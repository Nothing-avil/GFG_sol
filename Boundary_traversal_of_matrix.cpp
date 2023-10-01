class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> res;
        if(n == 1){
            for(int i=0;i<m;i++){
                res.push_back(matrix[0][i]);
            }
            return res;
        }
        else if(m == 1){
           for(int i=0;i<n;i++){
                res.push_back(matrix[i][0]);
            }
            return res; 
        }
        for(int i=0; i<m; i++){
            res.push_back(matrix[0][i]);
        }
        for(int i=1; i<n; i++){
            res.push_back(matrix[i][m-1]);
        }
        for(int i=m-2; i>=0; i--){
            res.push_back(matrix[n-1][i]);
        }
        for(int i=n-2; i>0; i--){
            res.push_back(matrix[i][0]);
        }
        return res;
    }
};
