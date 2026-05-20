class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
         int n=arr.size();
        unordered_set<long long>st;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                if(target==0 && st.find(0)!=st.end()){
                    return true;
                }
            }
            else{
                if(target%arr[i]==0){
                  long long num=target/arr[i];
                  
                  if(st.find(num)!=st.end()){
                     return true;
                  }
                }
            }
           st.insert(arr[i]);
        }
        return false;
    }
};
