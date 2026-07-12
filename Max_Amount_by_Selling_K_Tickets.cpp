class Solution {
  public:
    int maxAmount(vector<int>& arr, int k) {
        long long total_earning = 0;
        long long MOD = 1000000007;
        priority_queue<int> pq;
        for (int tickets : arr) {
            if (tickets > 0) {
                pq.push(tickets);
            }
        }
        while (k > 0 && !pq.empty()) {
            int current_max_tickets = pq.top();
            pq.pop();
            total_earning = (total_earning + current_max_tickets) % MOD;
            if (current_max_tickets - 1 > 0) {
                pq.push(current_max_tickets - 1);
            }
            k--;
        }
        return total_earning;
    }
};
