class Solution {
  public:
    int findSubString(string& str) {
        set<char> st;
        for(char ch : str){
            st.insert(ch);
        }
        int n = st.size();
        unordered_map<char, int> mp;
        int answer = INT_MAX;
        int j = 0, i = 0;
        while(j < str.size()){
            mp[str[j]]++;
            if(mp.size() == n){
                while(mp[str[i]] > 1){
                    mp[str[i]]--;
                    i++;
                }
                answer = min(answer, j - i + 1);
            }
            j++;
        }
        return answer;
    }
};
