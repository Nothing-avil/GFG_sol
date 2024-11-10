class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int> st;
        for(int i : a){
            st.insert(i);
        }
        for(int i : b){
            st.insert(i);
        }
        return vector<int>(st.begin(), st.end());
    }
};
