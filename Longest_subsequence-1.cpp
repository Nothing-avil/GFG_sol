class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        unordered_map<int, int> mp;
        int maxs=0;
        for(int i: a){
            mp[i] = max(mp[i+1], mp[i-1])+1;
            maxs= max(maxs, mp[i]);
        }
        return maxs;
    }
};
