class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        set<char> st;
        int ans=0, j=0;
        for(int i=0; i<s.size(); i++){
            while(st.count(s[i])){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            ans = max(ans, (i-j+1));
        }
        return ans;
    }
};
