class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        int n = arr.size();
      
         map<int , int >mp;
         stack<int>st;
         for(int it :arr){
             mp[it]++;
         }
         vector<int>ans(n,-1);
         for(int i=0 ; i<n ; i++){
             while(!st.empty() && mp[arr[i]]>mp[arr[st.top()]]){
                 ans[st.top()]= arr[i];
                 st.pop();
             }
             st.push(i);
         }
     return ans ;
    }
};
