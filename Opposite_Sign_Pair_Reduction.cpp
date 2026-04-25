class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        vector<int> st;  // acts like a stack
        
        for (int x : arr) {
            while (!st.empty() && 
                  ((st.back() > 0 && x < 0) || (st.back() < 0 && x > 0))) {
                
                int top = st.back();
                
                if (abs(top) > abs(x)) {
                    // x gets destroyed
                    x = top;
                    st.pop_back();
                }
                else if (abs(top) < abs(x)) {
                    // top gets destroyed
                    st.pop_back();
                }
                else {
                    // both destroyed
                    st.pop_back();
                    x = 0;
                    break;
                }
            }
            
            if (x != 0) {
                st.push_back(x);
            }
        }
        
        return st;
    }
};
