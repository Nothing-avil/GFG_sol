class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float, int>, vector<pair<float, int>>, greater<>> pq;
        for(int i=0; i<points.size(); i++){
            int a = points[i][0], b = points[i][1];
            int sum = (a)*(a) + (b)*(b);
            float dis = sqrt(sum);
            pq.push(make_pair(dis, i));
        }
        vector<vector<int>> res;
        while(k--){
            auto it = pq.top();
            res.push_back(points[it.second]);
            pq.pop();
        }
        return res;
    }
};
