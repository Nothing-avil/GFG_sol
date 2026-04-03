class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n = mat.size();
        vector<int> result;
        for(int i = 0;i<n;i++)
        {
            int j = i;
            int k = 0;
            while(j>=0 && k<n)
            {
                result.push_back(mat[k][j]);
                j--;
                k++;
            }
        }
        
        for(int i=1;i<n;i++)
        {
            int j = n-1;
            int k = i;
            while(j>=0 && k<n)
            {
                result.push_back(mat[k][j]);
                k++;
                j--;
            }
        }
        return result;
    }
};
