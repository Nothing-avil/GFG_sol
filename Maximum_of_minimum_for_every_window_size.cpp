class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> l(n), r(n);
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                l[i] = -1;
            }
            else{
                l[i] = st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                r[i] = n;
            }
            else{
                r[i] = st.top();
            }
            st.push(i);
        }
        vector<int> res(n);
        for(int i=0; i<n; i++){
            int idx = r[i] - l[i] - 1;
            res[idx-1] = max(res[idx - 1], arr[i]);
        }
        for(int i = n-2; i>=0; i--){
            res[i] = max(res[i], res[i+1]);
        }
        return res;
    }
};
