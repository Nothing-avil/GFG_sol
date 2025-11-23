class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<int> parent(20005, -1);
        function<int(int)> find = [&](int x) {
            return parent[x] < 0 ? x : parent[x] = find(parent[x]);
        };
        auto unite = [&](int x, int y) {
            x = find(x), y = find(y);
            if (x == y) return false;
            if (parent[x] > parent[y]) swap(x, y);
            parent[x] += parent[y];
            parent[y] = x;
            return true;
        };
        for (auto& s : stones) {
            unite(s[0], s[1] + 10000);
        }
        unordered_set<int> seen;
        for (auto& s : stones) {
            seen.insert(find(s[0]));
            seen.insert(find(s[1] + 10000));
        }
        return n - seen.size();
    }
};
