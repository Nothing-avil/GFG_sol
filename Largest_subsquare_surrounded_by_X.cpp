
class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        vector<vector<int>> top (n, vector<int>(n,0));
        vector<vector<int>> left (n, vector<int>(n,0));
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] == 'X')
                {
                    if(i != 0)
                    {
                        top[i][j] = top[i-1][j] + 1;
                    }
                    else top[i][j] = 1;
                    
                    if(j != 0)
                    {
                      
                      left[i][j] = left[i][j-1] + 1;
                    }
                    else left[i][j] = 1;
                }
                
                int maxX = min(top[i][j], left[i][j]);
                while(maxX)
                {
                    int l = i - maxX + 1;
                    int k = j - maxX + 1;
                    if(left[l][j] >= maxX and top[i][k] >= maxX)
                    {
                        ans = max(ans,maxX);
                        break;
                    }
                    maxX--;
                }
            }
        }
        
        return ans;  
    }
};
