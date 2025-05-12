// User function Template for C++
class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings) {
        sort(meetings.begin(),meetings.end());
        priority_queue<int,vector<int>,greater<int>>pq1;
        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++)
        pq1.push(i);
        vector<int>vis(n,0);
        for(auto i:meetings){
            while(!pq.empty() && pq.top().first<=i[0]){
                pq1.push(pq.top().second);
                pq.pop();
            }
            if(!pq1.empty()){
                vis[pq1.top()]++;
                pq.push({i[1],pq1.top()});
                pq1.pop();
            }
            else{
                auto it=pq.top();
                pq.pop();
                vis[it.second]++;
                int d=i[1]-i[0];
                pq.push({it.first+d,it.second});
            }
        }
        int ans=-1;
        int res=0;
        for(int i=0;i<n;i++){
            if(vis[i]>res){
                res=vis[i];
                ans=i;
            }
        }
        return ans;
    }
};
