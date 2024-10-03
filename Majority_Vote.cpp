class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<int> res;
        for(auto i : mp){
            if(i.second > n/3){
                res.push_back(i.first);
            }
        }
        if(res.size()==0){
            return {-1};
        }
        return res;
    }
};
