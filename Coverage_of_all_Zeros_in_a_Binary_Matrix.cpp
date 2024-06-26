class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size(),count=0;
        vector<int> row={-1,1,0,0};
        vector<int> col={0,0,-1,1};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<4;k++)
                    {
                        int rc=i+row[k];
                        int cc=j+col[k];
                        if(rc>=0 && rc<n && cc>=0 && cc<m && matrix[rc][cc]==1)
                        count++;
                    }
                }
            }
        }
        return count;

    }
};
