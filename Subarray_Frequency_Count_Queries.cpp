class Solution {
  public:
    vector<int> freqInRange(vector<int>& arr, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]].push_back(i);
        }
        vector<int> ans;
        for(int i=0; i<queries.size(); i++){
            int l=queries[i][0];
            int r= queries[i][1];
            int ele= queries[i][2];
            int count= upper_bound(mp[ele].begin(), mp[ele].end(), r) - lower_bound(mp[ele].begin(), mp[ele].end(), l);
            ans.push_back(count);
        }
        return ans;
    }
};
