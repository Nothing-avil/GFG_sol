class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>stk;
        while(!st.empty()){
            stk.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!stk.empty()){
            st.push(stk.top());
            stk.pop();
        }
        return st;
    }
};
