class Solution {
  public:
    bool sameFreq(string& s) {
        vector<int> mp(26, 0);
        for(char ch : s) mp[ch - 'a']++;
        unordered_set<int> ss;
        int mx = 0, mn = 100000;
        unordered_map<int, int> freq;
        for(int i = 0 ; i < 26 ; i++) {
            if(mp[i] != 0) {
                ss.insert(mp[i]);
                freq[mp[i]]++;
                mx = max(mx, mp[i]);
                mn = min(mn, mp[i]);
            }
        }
        if(ss.size() > 2) return false;
        if((mx == mn) || (mn == 1 && freq[mn] == 1) || (freq[mx] == 1 && mx - mn == 1)) return true;
        return false;
    }
};
