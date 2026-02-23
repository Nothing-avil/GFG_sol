class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        unordered_map<int, int> mp;
        for(int i : a){
            mp[i]++;
        }
        for(int i : b){
            mp[i]++;
        }
        return mp.size();

      /*
  class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_map<int, int> mp;
        for(int i : a){
            mp[i]++;
        }
        for(int i : b){
            mp[i]++;
        }
        vector<int> ans;
        for(auto i : mp){
            ans.push_back(i.first);
        }
        return ans;  //if we have to return the elements
    }
  };
      */
    }
};
