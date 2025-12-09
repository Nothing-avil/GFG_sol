class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        for(int i=0;i < n;i++){
            int idx = abs(arr[i])-1;
            if(arr[idx] > 0){
                arr[idx] *= -1;
            }else{
                ans.push_back(idx+1);
            }
        }
        
        return ans;
    }
};
