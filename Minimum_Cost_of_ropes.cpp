class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());
        long long ans =0;
        while(pq.size()>1){
            int a = pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            ans += (a+b);
            pq.push(a+b);
        }
        return ans;
    }
};
