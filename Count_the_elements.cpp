// User function Template for C++
class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q) {
        sort(b.begin(), b.end());
        vector<int> ans;
        
        for(int i : query) {
            int index = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            ans.push_back(index);
        }
        
        return ans;
    }
};
