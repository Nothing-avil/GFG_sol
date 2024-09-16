class Solution {
  public:
    int maxLength(string& s) {
        stack<int> st;
        int count =0;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && s[st.top()] == '(' && s[i] == ')'){
                st.pop();
            }
            else{
                st.push(i);
            }
            int curr = (st.empty()) ? i+1 : i-st.top();
            count = max(count, curr);
        }
        return count;
    }
};
