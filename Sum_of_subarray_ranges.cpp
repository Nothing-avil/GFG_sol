class Solution {
  public:
    int subarrayRanges(vector<int>& arr) {
        int n = arr.size();
        long long ans = 0;
        stack<int> st;
        for(int i = 0; i <= n; i++){
            int x;
            if(i == n) x = INT_MIN;
            else x = arr[i];
            while(st.size() && arr[st.top()] >= x){
                int idx = st.top(), l = -1;
                st.pop();
                if(st.size()) l = st.top();
                ans -= (i-idx)*(idx-l)*arr[idx];
            }
            
            if(i < n)
            st.push(i);
        }
        for(int i = 0; i <= n; i++){
            int x;
            if(i == n) x = INT_MAX;
            else x = arr[i];
            while(st.size() && arr[st.top()] <= x){
                int idx = st.top(), l = -1;
                st.pop();
                if(st.size()) l = st.top();
                ans += (i-idx)*(idx-l)*arr[idx];
            }
            
            if(i < n)
            st.push(i);
        }
        return int(ans);
    }
};
