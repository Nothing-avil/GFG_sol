class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            if(st.empty()){
                res[i] = i+1;
            }
            else{
                res[i] = i - st.top();
            }
            st.push(i);
        }
        return res;
    }
};
