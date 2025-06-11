class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        stack<int>st;
        for(int i=0;i<color.size();i++){
            if(!st.empty() && color[st.top()]==color[i] && radius[st.top()]==radius[i])
            st.pop();
            else
            st.push(i);
        }
        return st.size();
    }
};
