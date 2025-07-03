class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char, int> mp;
        int n = s.size();
        int answer = 0;
        int i=0, j=0;
        for(j=0; j<n; j++){
            mp[s[j]]++;
            while(mp.size() > k){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            answer = max(answer, j-i+1);
        }
        return mp.size() == k ? answer : -1;
    }
};
