class Solution {
  public:
    int evaluate(vector<string>& arr) {
        stack<int> st;
        for(string s : arr){
            int a, b, ans = 0;
            if(s =="+"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                ans = a + b;
                st.push(ans);
            }else if(s == "-"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                ans = b - a;
                st.push(ans);
            }else if(s == "*"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                ans = a * b;
                st.push(ans);
            }else if(s == "/"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                ans = b / a;
                st.push(ans);
            }else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
