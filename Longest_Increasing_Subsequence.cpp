class Solution {
  public:
    int lis(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > ans.back()){
                ans.push_back(arr[i]);
            }
            else{
                int id = lower_bound(ans.begin(), ans.end(), arr[i]) - ans.begin();
                ans[id] = arr[i];
            }
        }
        return ans.size();
    }
};
