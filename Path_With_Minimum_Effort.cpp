class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0,0,0});
        int mini = INT_MAX;
        vector<int> dr = {0,1,0,-1};
        vector<int> dc = {1,0,-1,0};
        vector<vector<int>> visited(rows, vector<int>(columns, 0));
        while(!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            int maxi = temp[0];
            int r = temp[1];
            int c = temp[2];
            if(r == rows-1 and c== columns-1)
                return maxi;
            if(visited[r][c])
                continue;
            visited[r][c] =1;
            for(int i=0;i<4;i++)
            {
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr>=0 and nr<rows and nc>=0 and nc<columns  && !visited[nr][nc])
                {
                    int t = abs(heights[r][c] - heights[nr][nc]);
                    t = max(t,maxi);
                    pq.push({t,nr,nc});
                }
            }
        }
        return 0;
    }
};
