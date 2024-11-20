class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        map<int, int> mp;
        int n = arr.size();
        vector<int> res;
        for(int i : arr){
            mp[i]++;
        }
        for( auto i : mp){
            if(i.second > n/3){
                res.push_back(i.first);
            }
        }
        return res;
    }
};
