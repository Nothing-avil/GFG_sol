class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        vector<int> count(high-low+1,0);
        for(int i:arr)if(i>=low && i<=high) count[i-low]++;
        vector<int> ans;
        for(int i=0;i<=high-low;i++){
            if(count[i]==0)ans.push_back(low+i);
        }
        return ans;
    }
};
