class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> ans;
        for(int i=0; i<q; i++){
            vector<int> res= queries[i];
            int s=0;
            for(int j=-res[0]; j<=res[0]; j++){
                for(int k=-res[0]; k<=res[0]; k++){
                    if(abs(j)==res[0] || abs(k)==res[0]){
                        int x= res[1]+j;
                        int y= res[2]+k;
                        
                        if(x>=0 && y>=0 && x<n && y<m){
                            s += mat[x][y];
                        }
                    }
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};
