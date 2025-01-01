// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        map<string, vector<string>> mp;
        for(string s: arr){
            string ss = s;
            sort(ss.begin(), ss.end());
            mp[ss].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it : mp){
            res.push_back(it.second);
        }
        return res;
    }
};
