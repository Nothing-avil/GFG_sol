// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp;
        for(int i: arr){
            if(mp.find(i) != mp.end()){
                return true;
            }
            mp[(target - i)]++;
        }
        return false;
    }
};
