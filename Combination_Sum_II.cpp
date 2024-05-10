class Solution{
public:
     void solve(vector<int> &arr,int n,int k, int idx, int sum, vector<int> &v, set<vector<int>> &st)
    {
        if(sum == k)
        {
            st.insert(v);
            return;
        }
        
        if(idx == n)
            return;
      
        solve(arr, n, k, idx + 1, sum, v, st);
        if(sum < k)
        {
            v.push_back(arr[idx]);
            solve(arr, n, k, idx + 1, sum + arr[idx], v, st);
            v.pop_back();
        }
         
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        vector<int> temp;
        set<vector<int>> st;
        sort(arr.begin(),arr.end());
        solve(arr, n, k, 0, 0, temp, st);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
        
    }
};
