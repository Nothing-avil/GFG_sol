class Solution {
  public:
    int maxXor(vector<int> &arr) {
        int maxXor = 0, mask=0;
        for(int i=31;i>=0;i--){
            mask|=(1<<i);
            unordered_set<int> us;
            for(auto z : arr)
                us.insert(mask&z);
            
            int temp = maxXor|(1<<i);
            for(auto p : us){
                int t = temp^p;
                if(us.find(t) != us.end()){
                    maxXor = temp;
                    break;
                }
            }
            
        }
        return maxXor;
    }
};
