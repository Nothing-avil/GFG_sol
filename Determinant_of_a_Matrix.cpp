class Solution
{   
    public:
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        if(n==1)
            return matrix[0][0];
        vector<vector<int>>submat(n-1,vector<int>(n-1));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                int x=0;
                for(int k=0;k<n;k++)
                {
                    if(k==i)
                        continue;
                    submat[j-1][x++]=matrix[j][k];
                }
            }
            ans+=(matrix[0][i]*determinantOfMatrix(submat,n-1)*((i&1)==1?-1:1));
        }
        return ans;
    }
};
