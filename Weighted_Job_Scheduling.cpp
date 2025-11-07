class Solution {
  public:
    int maxProfit(vector<vector<int>> &jobs) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        sort(jobs.begin(), jobs.end());
        int maxprofit = 0;
        for(int i = 0;i<jobs.size();i++){
            int start = jobs[i][0], end = jobs[i][1], profit = jobs[i][2];
            while(!q.empty() and q.top().first<=start){
                maxprofit = max(maxprofit, q.top().second);
                q.pop();
            }
            q.push({end, profit+maxprofit}); 
        }
        while(!q.empty()){
            maxprofit = max(maxprofit, q.top().second);
            q.pop();
        }
        return maxprofit;
    }
};
