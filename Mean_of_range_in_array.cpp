class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
        vector<int> v;
        int sum = 0;
        for(int i = 0;i<arr.size();i++){
            sum += arr[i];
            v.push_back(sum);
        }
        vector<int> ans;
        for(int i = 0;i<queries.size();i++){
            int a = queries[i][0];
            int b = queries[i][1];
            int c = v[a] - arr[a];
            int d = sum - v[b];
            int e = sum - (c + d);
            ans.push_back(e/(b-a+1));
        }
        return ans;
    }
};
