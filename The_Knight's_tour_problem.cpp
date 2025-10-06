class Solution {
  public:
    bool dfs(int i,int j,int n,vector<vector<int>>& ans,int &cnt)
    {
        if(cnt == n*n)
        {
            return true;
        }
        for(int r=i-2;r<=i+2;r++){
            for(int c=j-2;c<=j+2;c++){
                int rDistance = abs(r-i); // 0 1 2
                int cDistance = abs(c-j);   // 0 1 2
                if(r>=0 and r<n and c>=0 and c<n and ans[r][c]==-1 and rDistance+cDistance == 3)    // 2.5 jump
                {
                    ans[r][c] = ans[i][j]+1;
                    cnt++;
                    if(dfs(r,c,n,ans,cnt))
                        return true;
                    else
                    {
                        ans[r][c] = -1;
                        cnt--;
                    }
                }
            }
        }
        return false;
    }
    vector<vector<int>> knightTour(int n) {
        vector<vector<int>> answer(n,vector<int>(n,-1));
        answer[0][0] = 0;
        int cnt = 1;
        if(dfs(0, 0, n, answer, cnt))
            return answer;
        return {};
    }
};
