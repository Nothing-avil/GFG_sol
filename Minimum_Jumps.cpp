class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int k=0;
        queue<vector<int>> q;
        q.push({0,k});
        for(int i=0;i<arr.size();i++){
            while(!q.empty() && q.front()[0]<i) q.pop();
            if(q.empty()) return -1;
            if(q.front()[0]<i+arr[i]){
                q.push({i+arr[i],q.front()[1]+1});
            }
        }
        if(q.empty()) return -1;
        return q.front()[1];
    }
};
