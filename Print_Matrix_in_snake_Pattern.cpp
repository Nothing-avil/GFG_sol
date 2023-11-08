class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int> res;
        int n=matrix.size(), i;
        for(i=0; i<n; i++){
            if(i%2==0){
                for(int j=0; j<n; j++){
                    res.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j=n-1; j>=0; j--){
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
    }
};
