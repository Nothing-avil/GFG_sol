class Solution {
  public:
    int maxIndexDifference(string &s) {
        int a_idx = 0;
        int ans = 0;
        unordered_set<int> us(26);
        us.insert(97);
        while (a_idx < s.size() && s[a_idx] != 'a') a_idx++;
        int ascii = 97;
        for (int i = a_idx; i < s.size(); i++){
            if (us.find(s[i] - 1) != us.end()){
                ans = i - a_idx;
                if (s[i] == ascii + 1){
                    us.insert(s[i] - 0);
                    ascii++;
                }
            }
        }
        if (a_idx == s.size()) return -1;
        return ans;
    }
};
