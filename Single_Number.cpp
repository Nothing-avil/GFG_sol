// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i:arr){
            mp[i]++;
        }
        for(auto i: mp){
            if(i.second&1){
                return i.first;
            }
        }
        return 0;
    }
};
