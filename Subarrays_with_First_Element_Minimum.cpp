class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        int n=arr.size();
        stack<int> st;
        int res=0;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            int next=st.empty()?n:st.top();
            res+=(next-i);
            st.push(i);
        }
        return res;
    }
};
