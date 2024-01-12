class Solution
{
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
        int n= q.size()-k;
        stack<int> st;
        while(k--){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(n--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
