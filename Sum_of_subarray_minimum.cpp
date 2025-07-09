class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
         int n = arr.size();
       vector<int>next(n,n);
       vector<int>prev(n,-1);
       unsigned int sum = 0;
       stack<int>st;
       for(int i=n-1;i>=0;i--){
           while(!st.empty() and arr[st.top()] > arr[i]){
               st.pop();
           }
           if(!st.empty()){
               next[i] = st.top();
           }
           st.push(i);
       }
       while(!st.empty()){
           st.pop();
       }
       for(int i=0;i<n;i++){
           while(!st.empty() and arr[st.top()] >= arr[i]){
               st.pop();
           }
           if(!st.empty()){
               prev[i] = st.top();
           }
           st.push(i);
       }
       
       for(int i=0;i<n;i++){
            sum += (next[i]-i)*(i-prev[i])*arr[i];
       }
       
       return sum;
    }
};
