class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> ans(n, vector<int>(m,-1));
        queue<pair<int,int>> bfsQ;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){ 
                    bfsQ.push({i,j});
                    ans[i][j]=0;
                }
            }
        }
        int dx[4]={-1,0,1,0};
        int dy[4]={0,-1,0,1};
        while(!bfsQ.empty()){
                int cx=bfsQ.front().first;
                int cy=bfsQ.front().second;
                bfsQ.pop();
                for(int j=0;j<4;j++){
                    int nx=cx+dx[j];
                    int ny=cy+dy[j];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && ans[nx][ny]==-1){
                        ans[nx][ny]=ans[cx][cy]+1;
                        bfsQ.push({nx,ny});
                    }
                }
        }
        return ans;
        
    }
};
