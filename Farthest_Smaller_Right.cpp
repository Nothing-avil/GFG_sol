class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        set<int,greater<int>> st;
        vector<int> fsr(arr.size(),-1);
        
        for(int i=arr.size()-1;i>=0;i--){
            if(st.empty() || arr[*st.rbegin()]>=arr[i]){
                st.insert(i);
                continue;
            }
            
            for(auto s:st){
               if(arr[i]>arr[s]){
                   fsr[i]=s;
                   break;
               }
            }
        }
        return fsr;
    }
};
