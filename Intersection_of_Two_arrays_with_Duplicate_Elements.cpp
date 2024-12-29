class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        set<int> st(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> ans;
        for (int x : b) {
            if (st.find(x) != st.end() && !binary_search(ans.begin(), ans.end(), x)) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};
