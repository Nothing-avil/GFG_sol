class Solution {
  public:
    int maxPartitions(string &s) {
        unordered_map<int, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]] = i;
        }
        int mx = 0, j=0;
        for(int i=0; i<s.size(); i++){
            mx = max(mx, mp[s[i]]);
            if(mx == i){
                j++;
            }
        }
        return j;
    }
};
