class Solution {
  public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b){
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first > b.first;
    }
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int, int> dp;
        vector<int> res;
        for(int a: nums){
            dp[a]++;
        }
        vector<pair<int, int>> rp(dp.begin(), dp.end());
        sort(rp.begin(), rp.end(), cmp);
        for(int i=0; i<k; i++){
            res.push_back(rp[i].first);
        }
        return res;
    }
};
