class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int>st;
        int n = arr.size();
        st.push(arr.back());
        arr.back() = -1;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(!st.empty() && st.top()>arr[i]){
                int p = arr[i];
                arr[i] = st.top();
                st.push(p);
            }
            else{
                st.push(arr[i]);
                arr[i] = -1;
            }
        }
        return arr;
    }
};
