class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        priority_queue<int> pq(arr.begin(), arr.end());
        vector<int> res;
        while(k--){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};
