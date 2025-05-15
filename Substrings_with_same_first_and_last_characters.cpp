class Solution {
  public:
    int countSubstring(string &s) {
        unordered_map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int answer = 0;
        for(auto i : mp){
            answer += (i.second)*(i.second + 1) / 2;
        }
        return answer;
    }
};
