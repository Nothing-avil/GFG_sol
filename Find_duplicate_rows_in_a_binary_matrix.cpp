class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        set<int>res;
        for(int i=0; i<M; i++){
            for(int j=i+1; j<M; j++){
                if(matrix[i]==matrix[j]){
                    res.insert(j);
                }
            }
        }
        vector<int> vc(res.begin(), res.end());
        return vc;
    } 
};
