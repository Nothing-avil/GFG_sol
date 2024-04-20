class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> st;
        for(int i=0; i<n; i++){
            st.insert(arr1[i]);
        }
        for(int i=0; i<m; i++){
            st.insert(arr2[i]);
        }
        
        return vector<int> (st.begin(), st.end());
    }
};
