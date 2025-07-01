class Solution {
  public:
    int substrCount(string &s, int k) {
        int i=0, j=0, answer = 0;
        int n = s.size();
        unordered_map<char, int> mp;
        for(; j<k; j++){
            mp[s[j]]++;
        }
        if(mp.size() == k - 1){
                answer++;
            }
        while(j < n){
            if(--mp[s[i]] == 0){
                mp.erase(s[i]);
            }
            mp[s[j]]++;
            if(mp.size() == k - 1){
                answer++;
            }
            i++;
            j++;
        }
        return answer;
    }
};
