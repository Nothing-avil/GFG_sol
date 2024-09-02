class Solution
{
    public:
    int minimumCostPath(vector<vector<int>>& grid){
        priority_queue<pair<int,pair<int,int>>, 
                    vector<pair<int,pair<int,int>>>, 
                            greater<pair<int,pair<int,int>>>> pq;
        long long n = grid.size(); long long dp[n+1][n+1]; 
        int dxy[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
        for ( int i = 0; i<n; i++ ){
            for ( int j = 0; j<n; j++ ) dp[i][j] = 1e15;
        } dp[n-1][n-1] = grid[n-1][n-1]; pq.push({dp[n-1][n-1],{n-1,n-1}});
        while ( !pq.empty() ){
            pair<int,pair<int,int>> p = pq.top(); pq.pop();
            int dist = p.first, x = p.second.first, y = p.second.second;
            for ( int k = 0; k<4; k++ ){
                int a = x + dxy[k][0], b = y + dxy[k][1];
                if ( a >= 0 && a < n && b >= 0 && b < n 
                            && dp[a][b] > grid[a][b] + dist ){
                    dp[a][b] = grid[a][b] + dist;
                    pq.push({dp[a][b],{a,b}});
                }
            }
        }
        return dp[0][0];
    }
};
